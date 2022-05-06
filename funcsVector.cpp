#include "Header.h"
vector::vector(double x, double y, double z) {
	this->x = x;
	this->y = y;
	this->z = z;
}
vector::~vector() {

}
double vector::module() {
	return sqrt(pow(x, 2) + pow(y, 2) + pow(z, 2));
}
vector vector::operator +(const vector& other) {
	vector buffer(0, 0, 0);
	buffer.x = this->x + other.x;
	buffer.y = this->y + other.y;
	buffer.z = this->z + other.z;
	return buffer;
}
vector vector::operator -(const vector& other) {
	vector buffer(0, 0, 0);
	buffer.x = this->x - other.x;
	buffer.y = this->y - other.y;
	buffer.z = this->z - other.z;
	return buffer;
}
vector vector::operator *(int num) {
	this->x *= num;
	this->y *= num;
	this->z *= num;
	return *this;
}
vector vector::operator /(int num) {
	this->x /= num;
	this->y /= num;
	this->z /= num;
	return *this;
}
ostream& operator<<(ostream& os, const vector& other) {
	return os << "(" << other.x << ", " << other.y << ", " << other.z << ")\n";
}
double vector::scalarnoe(vector b, double angle) {
	return this->module() * b.module() * cos(angle);
}
vector vector::vectornoe(vector b) {
	vector c(this->x * b.z - this->z * b.y, this->z * b.x - this->x * b.z, this->x * b.y - this->y * b.x);
	return c;
}
double vector::smeshannoe(vector b, vector c) {
	double deltaPlus, deltaMinus;
	deltaPlus = (this->x * b.y * c.z) + (this->y * b.z * c.x) + (this->z * b.x * c.y);
	deltaMinus = (this->z * b.y * c.x) + (this->y * b.x * c.z) + (this->x * b.z * c.y);
	return deltaPlus - deltaMinus;
}

