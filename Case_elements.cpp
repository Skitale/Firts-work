#include "Case_elements.h"

Engine::Engine(int xl , int yl , int h , int CRGB ) : Line(xl, yl, xl + 2 * h, yl, CRGB) {
	count = 0;
	r = h / 3;
	xldv = xl; yldv = yl - r;
	xrdv = xr; yrdv = yldv;
};

Spoke::Spoke(int xc, int yc, int h , int CRGB) : xc(xc), yc(yc), CRGB(CRGB) {
	count = 0;
	r = h / 3;
	xdv[0] = xc; ydv[0] = yc - r;
	xdv[1] = xc + 2 * r / 9 + h / 9; ydv[1] = yc - 2 * r / 9 + h / 9;
	xdv[2] = xc + r; ydv[2] = yc;
	xdv[3] = xc + 2 * r / 9 + h / 9; ydv[3] = yc + 2 * r / 9 + h / 9;
	xdv[4] = xc; ydv[4] = yc + r;
	xdv[5] = xc - 2 * r / 9 + h / 9; ydv[5] = yc + 2 * r / 9 + h / 9;
	size = 1.5;
};

void Engine::Show(BufferedGraphics ^ Buff){
	Pen ^ pen = gcnew Pen(Color::FromArgb(CRGB), 3);
	Buff->Graphics->DrawLine(pen, xl, yl, xldv, yldv);
	Buff->Graphics->DrawLine(pen, xldv, yldv, xrdv, yrdv);
	Buff->Graphics->DrawLine(pen, xrdv, yrdv, xr, yr);
	delete pen;
}

void Engine::Move(int &dx){
	xl += dx;
	xr += dx;
	count++;
	xldv = xl + r*sin((float)dx / r*count);
	yldv = yl + r*cos((float)dx / r*count);
	xrdv = xr + r*sin((float)dx / r*count);
	yrdv = yldv;
}

void Spoke::Show(BufferedGraphics ^ Buff){
	Pen ^ pen = gcnew Pen(Color::FromArgb(CRGB), 2);
	for (int i = 0; i < 6; i++)
		Buff->Graphics->DrawLine(pen, xc, yc, xdv[i], ydv[i]);
	delete pen;
}

void Spoke::Move(int &dx){
	xc += dx;
	count++;
	for (int i = 0; i < 6; i++){
		xdv[i] = xc + r*sin((float)dx / r*count + i)*size;
		ydv[i] = yc + r*cos((float)dx / r*count + i)*size;
	}
}

