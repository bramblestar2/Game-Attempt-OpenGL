#pragma once
#include "Vector.h"

template<typename T>
struct Rect
{
public:
	Rect(T Left, T Top, T Width, T Height);
	Rect();

	bool contains(Vector<T> point);
	bool intersects(Rect<T> rectangle);

	T left, top, width, height;

private:
	void init(T Left, T Top, T Width, T Height);
};

typedef Rect<int> IntRect;
typedef Rect<float> FloatRect;
typedef Rect<double> DoubleRect;
