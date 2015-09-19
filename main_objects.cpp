#include "main_objects.h"

Coupler::Coupler(int xl , int yl , int h , int CRGB ) : Line(xl, yl, xl + h, yl, CRGB)
{};
Car::Car(int x , int y, int h ) {
	c_case = new Case_car(x, y, h, 0xFFB22222);
	d_case = new Door(x + h, y + h, h, 0xFF8B0000);
	wi_case = new Window_train[3];
	whe_case = new Wheel[4];
	s_case = new Spoke[4];
	for (int i = 0; i < 3; i++) {
		wi_case[i] = Window_train(x + 3 * h + i * 2 * h, y + h, h, 0xFF00CED1);
	}
	whe_case[0] = Wheel(x + 2 * h, y + 7 * h / 2, h / 2, 0xFFD2691E);
	whe_case[1] = Wheel(x + 3 * h, y + 7 * h / 2, h / 2, 0xFFD2691E);
	whe_case[2] = Wheel(x + 6 * h, y + 7 * h / 2, h / 2, 0xFFD2691E);
	whe_case[3] = Wheel(x + 7 * h, y + 7 * h / 2, h / 2, 0xFFD2691E);

	s_case[0] = Spoke(x + 2 * h, y + 7 * h / 2, h, 0xFF808080);
	s_case[1] = Spoke(x + 3 * h, y + 7 * h / 2, h, 0xFF808080);
	s_case[2] = Spoke(x + 6 * h, y + 7 * h / 2, h, 0xFF808080);
	s_case[3] = Spoke(x + 7 * h, y + 7 * h / 2, h, 0xFF808080);
};

Car::Car(Car const &tmp){
	*c_case = *tmp.c_case;
	*d_case = *tmp.d_case;
	for (int i = 0; i < 3; i++)
		wi_case[i] = tmp.wi_case[i];
	for (int i = 0; i < 4; i++){
		whe_case[i] = tmp.whe_case[i];
		s_case[i] = tmp.s_case[i];
	}
}

Car& Car::operator=(Car Second){
	*c_case = *Second.c_case;
	*d_case = *Second.d_case;
	for (int i = 0; i < 3; i++)
		wi_case[i] = Second.wi_case[i];
	for (int i = 0; i < 4; i++){
		whe_case[i] = Second.whe_case[i];
		s_case[i] = Second.s_case[i];
	}
	return *this;
}
Car::~Car(){
	delete[]whe_case;
	delete[]wi_case;
	delete d_case;
	delete c_case;
	delete s_case;
};

Loco::Loco(int x , int y , int h ) {
	a_car = new Car(x, y, h);
	buff_case = new Buff_train(x + 9 * h, y + h, h, 0xFFFF8C00);
	pipe_case = new Pipe(x + 11 * h, y - h, h, 0xFFFF4500);
	w_case = new Wheel[2];
	w_case[0] = Wheel(x + 10 * h, y + h * 7 / 2, h * 1 / 2, 0xFFF8F8FF);
	w_case[1] = Wheel(x + 12 * h, y + h * 7 / 2, h * 1 / 2, 0xFFF8F8FF);
	e_case = new Engine(x + 10 * h, y + 3 * h + h / 2, h, 0xFF000000);
	s_case = new Spoke[2];
	s_case[0] = Spoke(x + 10 * h, y + 3 * h + h / 2, h, 0xFF808080);
	s_case[1] = Spoke(x + 12 * h, y + 3 * h + h / 2, h, 0xFF808080);
};

Loco::~Loco(){
	delete[]w_case;
	delete pipe_case;
	delete buff_case;
	delete a_car;
	delete e_case;
	delete s_case;
};


Train::Train(int xl , int yl , int h , int n ){
	OneLoco = new Loco(xl - 13 * h, yl - 3 * h, h);
	size = n;
	CarsOfTrain = new Car[size];
	Coup = new Coupler[size];
	for (int i = 0; i < size; i++){
		CarsOfTrain[i] = Car(xl - 4 * h - (9 * h + h)*(i + 1) - 9 * h, yl - 3 * h, h);
		Coup[i] = Coupler(xl - 4 * h - (9 * h + h)*(i + 1), yl - h / 4, h);
	};
}

Train::~Train(){
	delete OneLoco;
	delete[]CarsOfTrain;
	delete[]Coup;
}

void Car::Move(int dx) {
	c_case->Move(dx);
	d_case->Move(dx);
	for (int i = 0; i < 3; i++) {
		wi_case[i].Move(dx);
	}
	for (int i = 0; i < 4; i++) {
		whe_case[i].Move(dx);
		s_case[i].Move(dx);
	}
};

void Loco::Move(int dx) {
	a_car->Move(dx);
	buff_case->Move(dx);
	pipe_case->Move(dx);
	w_case[0].Move(dx);
	w_case[1].Move(dx);
	s_case[0].Move(dx);
	s_case[1].Move(dx);
	e_case->Move(dx);
}

void Train::Move(int dx){
	OneLoco->Move(dx);
	for (int i = 0; i < size; i++){
		CarsOfTrain[i].Move(dx);
		Coup[i].Move(dx);
	}
};

void Car::Show(BufferedGraphics ^ Buff){
	c_case->Show(Buff);
	d_case->Show(Buff);
	for (int i = 0; i < 3; i++)
		wi_case[i].Show(Buff);

	for (int i = 0; i < 4; i++)
		whe_case[i].Show(Buff);

	for (int i = 0; i < 4; i++)
		s_case[i].Show(Buff);

}

void Loco::Show(BufferedGraphics ^ Buff){
	a_car->Show(Buff);
	buff_case->Show(Buff);
	pipe_case->Show(Buff);
	w_case[0].Show(Buff);
	w_case[1].Show(Buff);
	s_case[0].Show(Buff);
	s_case[1].Show(Buff);
	e_case->Show(Buff);
}

void Train::Show(BufferedGraphics ^ Buff){
	OneLoco->Show(Buff);
	for (int i = 0; i < size; i++){
		CarsOfTrain[i].Show(Buff);
		Coup[i].Show(Buff);
	}
};