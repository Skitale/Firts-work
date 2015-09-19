#pragma once
#include "BaseFigures.h"
#include <math.h>

class Pipe : public Rect {
public:
	Pipe(int x, int y, int h, int CRGB = 0xFF000000) : Rect(x, y, h, h*2, CRGB) 
	{};
};

class Door : public Rect {
public:
	Door(int x, int y, int h, int CRGB = 0xFFA52A2A) : Rect(x, y, h, h * 2, CRGB)
	{};
};

class Window_train : public Rect {
public:
	Window_train(int x=0, int y=0, int h=0, int CRGB = 0xFF0000FF) : Rect(x, y, h, h, CRGB)
	{};
};

class Case_car : public Rect {
public:
	Case_car(int x, int y, int h, int CRGB = 0xFFFF7F50) : Rect(x, y, 9*h, 3*h, CRGB)
	{};
};

class Buff_train : public Rect {
public:
	Buff_train(int x, int y, int h, int CRGB = 0xFF8B0000) : Rect(x, y, h*9/2, h*2, CRGB)
	{};
};

class Engine : public Line {
private:
	int xldv, yldv;
	int xrdv, yrdv;
	int r;
	int count;
public:
	Engine(int xl = 0, int yl = 0, int h = 0, int CRGB = 0x0000000);
	
	void Show(BufferedGraphics ^ Buff);
	void Move(int &dx);
};

class Spoke {
private:
	int xdv[6], ydv[6];
	int xc, yc;
	int r, count;
	int CRGB;
	double size;
public:
	Spoke(int xc = 0, int yc = 0, int h = 0, int CRGB = 0x000000);
	
	void Show(BufferedGraphics ^ Buff);
	void Move(int &dx);

};


