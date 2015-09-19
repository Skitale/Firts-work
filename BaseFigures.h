#pragma once
using namespace System::Drawing;

class MainFigura {
protected:
	int xl;
	int yl;
	int wl;
	int hl;
	int CRGB;
public:
	MainFigura(int x, int y, int w, int h, int CRGB) : xl(x), yl(y), wl(w), hl(h), CRGB(CRGB)
	{};
	
	virtual ~MainFigura()
	{};
	
	virtual void Show(BufferedGraphics ^ Buff) = 0;
	void Move(int & dx);
};

class Line {
protected:
	int xl;
	int yl;
	int xr;
	int yr;
	int CRGB;
public:
	Line(int xl=0, int yl=0, int xr = 10, int yr = 10, int CRGB = 0xFF000000) :
		xl(xl), yl(yl), xr(xr), yr(yr), CRGB(CRGB) {};

	void Show(BufferedGraphics ^ Buff);
	void Move(int &dx);
};

class Rect : public MainFigura {
public:
	Rect(int x, int y, int w, int h, int CRGB) : MainFigura(x, y, w, h, CRGB)
	{};
	
	void Show(BufferedGraphics ^ Buff);
};

class Wheel : public MainFigura {
public:
	Wheel(int xc=0, int yc=0, int r=0, int CRGB = 0xFF000000) : MainFigura(xc - r, yc - r,2 * r, 2 * r, CRGB) 
	{};
	
	void Show(BufferedGraphics ^ Buff);
};