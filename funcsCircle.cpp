#include "Header.h"
circle::circle(double r) {
	this->r = r;
}
double circle::diameter() {
	return 2 * this->r;
}
double circle::dlina() {
	return diameter() * 3.14;
}
double circle::ploshad() {
	return 3.14 * pow(this->r, 2);
}
ostream& operator<<(ostream& os, const circle& other) {
	return os << "x^2 + y^2 = " << pow(other.r, 2) << endl;
}
circle::~circle() {
}