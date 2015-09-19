#pragma once
#include "Case_elements.h"

class Coupler : public Line {
public:
	Coupler(int xl = 0, int yl = 0, int h = 0, int CRGB = 0xFF000000);
};

class Car {
private:
	Case_car *c_case;
	Door * d_case;
	Window_train * wi_case;
	Wheel * whe_case;
	Spoke * s_case;
public:
	Car(int x = 0, int y = 0, int h = 0);
	Car(Car const &tmp);
	Car& operator=(Car Second);
	
	void Move(int dx);
	void Show(BufferedGraphics ^ Buff);
	~Car();
};

class Loco {
private:
	Car * a_car;
	Buff_train * buff_case;
	Pipe * pipe_case;
	Wheel * w_case;
	Engine * e_case;
	Spoke * s_case;
public:
	Loco(int x = 0, int y = 0, int h = 0);
	
	void Move(int dx);
	void Show(BufferedGraphics ^ Buff);
	~Loco();
};

class Train {
private:
	Loco * OneLoco;
	int size;
	Car * CarsOfTrain;
	Coupler * Coup;
public:
	Train(int xl = 0, int yl = 0, int h = 0, int n = 1);
	
	void Move(int dx);
	void Show(BufferedGraphics ^ Buff);
	~Train();
};
