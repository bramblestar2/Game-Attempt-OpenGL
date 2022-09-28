#include "Color.h"

Color::Color(float rr, float gg, float bb, float aa)
{
	init(rr, gg, bb, aa);
}

Color::Color(float rr, float gg, float bb)
{
	init(rr, gg, bb, 255);
}

Color::Color()
{
	init(255, 255, 255, 255);
}

void Color::init(float R, float G, float B, float A)
{
	r = R;
	g = G;
	b = B;
	a = A;
}
