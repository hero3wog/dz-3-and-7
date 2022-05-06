#include "Header.h"
complex::complex(double re, double im) {
	this->re = re;
	this->im = im;
}
complex::~complex(){

}
double complex::module() {
	return sqrt(pow(re, 2) + pow(im, 2));
}
complex complex::sopr() {
	complex buf;
	buf.re = this->re;
	this->im > 0 ? buf.im = -(this->im) : buf.im = abs(this->im);
	return buf;
}
complex complex::operator+(const complex& other) {
	complex buffer;
	buffer.re = this->re + other.re;
	buffer.im = this->im + other.im;
	return buffer;
}
complex complex::operator-(const complex& other) {
	complex buffer;
	buffer.re = this->re - other.re;
	buffer.im = this->im - other.im;
	return buffer;
}
complex complex::operator*(const complex& other) {
	complex buffer;
	buffer.re = this->re * other.re - this->im * other.im;
	buffer.im = this->re * other.im + this->im * other.re;
	return buffer;
}
complex complex::operator/(const complex& other) {
	complex buffer;
	buffer.re = (this->re * other.re + this->im * other.im) / (pow(other.re, 2) + pow(other.im, 2));
	buffer.im = (this->im * other.re + -this->re * other.im) / (pow(other.re, 2) + pow(other.im, 2));
	return buffer;
}
ostream& operator<<(ostream& os, const complex& other) {
	char znak;
	other.im < 0 ? znak = '-' : znak = '+';
	return os << other.re << " " << znak << " " << abs(other.im) << "i\n";
}