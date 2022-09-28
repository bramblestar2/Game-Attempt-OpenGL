#pragma once
template <typename T>
struct Vector
{
public:
	Vector(T x, T y);
	Vector();

	T x, y;
};

typedef Vector<int> Vector2i;
typedef Vector<unsigned int> Vector2u;
typedef Vector<float> Vector2f;
typedef Vector<double> Vector2d;
