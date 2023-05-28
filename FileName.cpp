#include <iostream>
using namespace std;

class Complex
{
public:
	Complex() {}
	Complex( double r, double i ) {real = r; imag = i; }
	friend Complex operator+(Complex& co1, Complex& co2);

	void print();
private:
	double real;
	double imag;
};

Complex operator+(Complex& co1, Complex& co2)
{
	Complex temp;
	temp.real = co1.real + co2.real;
	temp.imag = co1.imag + co2.imag;
	return temp;
}

void Complex::print()
{
	cout << real;
	if (imag > 0)cout << "+";
	if (imag != 0)cout << imag << "i\n";
}

int main()
{
	Complex com1(1.1, 2.2), com2(3.3, 4.4), total;
	total = com1 + com2;
	total.print();

}