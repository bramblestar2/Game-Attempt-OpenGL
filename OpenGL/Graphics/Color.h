#pragma once
struct Color
{
public:
	Color(float r, float g, float b, float a);
	Color(float r, float g, float b);
	Color();

	Color operator+(Color a) { r += a.r; };

	float r, g, b, a;

private:
	void init(float, float, float, float);
};

