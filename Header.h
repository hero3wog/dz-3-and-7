#pragma once
#ifndef Header
#define Header
#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;
class complex {
	double re;
	double im;
public:
	complex(double re = 0, double im = 0);
	double module();
	complex sopr();
	complex operator+(const complex& other);
	complex operator-(const complex& other);
	complex operator*(const complex& other);
	complex operator/(const complex& other);
	friend ostream& operator<<(ostream& os, const complex& other);
	~complex();
};
class vector {
	double x;
	double y;
	double z;
public:
	vector(double x = 0, double y = 0, double z = 0);
	double module();
	vector operator +(const vector& other);
	vector operator -(const vector& other);
	vector operator *(int num);
	vector operator /(int num);
	friend ostream& operator<<(ostream& os, const vector& other);
	double scalarnoe(vector b, double angle);
	vector vectornoe(vector b);
	double smeshannoe(vector b, vector c);
	~vector();
};
class circle {
	double r;
public:
	circle(double r);
	double diameter();
	double dlina();
	double ploshad();
	friend ostream& operator<<(ostream& os, const circle& other);
	~circle();
};
#endif Header