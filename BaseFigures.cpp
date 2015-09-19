#include "BaseFigures.h"

void MainFigura::Move(int & dx)  {
	xl += dx;
}

void Line::Move(int & dx)  {
		xl += dx;
		xr += dx;
}

void Line::Show(BufferedGraphics ^ Buff) {
	Pen ^ pen = gcnew Pen(Color::FromArgb(CRGB), 3);
	Buff->Graphics->DrawLine(pen, xl, yl, xr, yr);
	delete pen;
}

void Rect::Show(BufferedGraphics ^ Buff) {
	SolidBrush^ Brush_c = gcnew SolidBrush(Color::FromArgb(CRGB));
	Buff->Graphics->FillRectangle(Brush_c, xl, yl, wl, hl);
	delete Brush_c;
}

void Wheel::Show(BufferedGraphics ^ Buff) {
	SolidBrush^ Brush_c = gcnew SolidBrush(Color::FromArgb(CRGB));
	Buff->Graphics->FillEllipse(Brush_c, xl, yl, wl, hl);
	delete Brush_c;
}