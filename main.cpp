#include "Header.h"
int main() {
	complex a(2, 9);
	complex b(8, -1);
	cout << a + b;
	cout << a - b;
	cout << a * b;
	cout << a / b;
	cout << b.sopr();
	cout << a.sopr();
	cout << endl << endl;

	vector c(3, 2, 2);
	vector e(2, -2, 8);
	vector q(13, -3, 7);
	cout << e + c;
	cout << e - c;
	cout << c.scalarnoe(e, 45) << endl;
	cout << c.vectornoe(e);
	cout << c.smeshannoe(e, q);
	cout << endl << endl;

	circle d(2);
	cout << d;
	cout << d.diameter() << endl;
	cout << d.dlina() << endl;
	cout << d.ploshad() << endl;
}