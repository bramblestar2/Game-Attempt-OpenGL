#pragma once
template <typename T>
struct Vector2
{
public:
	Vector2(T x, T y);
	Vector2();

	Vector2 operator+=(const Vector2 a) { x += a.x; y += a.x; };

	T x, y;
private:
	void init(T x, T y);
};

typedef Vector2<int> Vector2i;
typedef Vector2<unsigned int> Vector2u;
typedef Vector2<float> Vector2f;
typedef Vector2<double> Vector2d;

template <typename T>
struct Vector3
{
public:
	Vector3(T x, T y, T z);
	Vector3();

	T x, y, z;
private:
	void init(T x, T y, T z);
};

typedef Vector3<int> Vector3i;
typedef Vector3<unsigned int> Vector3u;
typedef Vector3<float> Vector3f;
typedef Vector3<double> Vector3d;
