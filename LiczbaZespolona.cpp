#include "LiczbaZespolona.h"
#include <iostream>
#include <cmath>

using namespace std;

void LiczbaZespolona::setRe(double x){
	re = x;

}
void LiczbaZespolona::setIm(double y){
	im = y;
}
double LiczbaZespolona::getRe(){

	return re;
}
double LiczbaZespolona::getIm(){

	return im;
}

void LiczbaZespolona::wyswietl(){
	if (im>0)
		cout << re << "x -" << im << "i" << endl;
	else if (im<0)
		cout << re << "x -(" << im << ")i" << endl;
	else if (im == 0)
		cout << re << "x" << endl;
	else if (re == 0)
		cout << "-(" << im << ")i";
}


double LiczbaZespolona::modul(){


	return sqrt(re*re + im*im);
}
void LiczbaZespolona::kat(double x, double y)
{
	
	double s, c;

	s = y / sqrt(x*x + y*y);
	c = x / sqrt(x*x + y*y);

	if (c == 0, 5 && s == (sqrt(3.0) / 2))
	{
		cout << "Kat jest rowny 60 " << endl;
	}
	if (c == (sqrt(3.0) / 2) && s == 0, 5)
	{
		cout << "Kat jest rowny 30 " << endl;
	}
	if (c == (sqrt(2.0) / 2) && s == (sqrt(2.0) / 2))
	{
		cout << "Kat jest rowny 45 " << endl;
	}
	if (c == 1 && s == 0)
	{
		cout << "Kat jest rowny 0 " << endl;
	}
	if (c == 0 && s == 1)
	{
		cout << "Kat jest rowny 90 " << endl;
	}
	else cout << "Kat jest nietypowy" << endl;

}

LiczbaZespolona::LiczbaZespolona(){
	re = 0;
	im = 0;
}

LiczbaZespolona::LiczbaZespolona(double x){

	re = x;
	im = 0;
}
LiczbaZespolona::LiczbaZespolona(double x, double y){
	re = x;
	im = y;

}

LiczbaZespolona LiczbaZespolona::operator+(const LiczbaZespolona &b){

	LiczbaZespolona c;
	c.re = re + b.re;
	c.im = im + b.im;
	return c;


}

LiczbaZespolona &LiczbaZespolona::operator+=(const LiczbaZespolona &b){

	re += b.re;
	im += b.im;
	return *this;

}

LiczbaZespolona &LiczbaZespolona::operator=(const LiczbaZespolona &b){

	re = b.re;
	im = b.im;
	return *this;

}

ostream& operator<<(ostream &str, const LiczbaZespolona &b){

	if (b.im>0)
		str << b.re << "x -" << b.im << "i";
	else if (b.im<0)
		str << b.re << "x -(" << b.im << ")i";
	else if (b.im == 0)
		str << b.re << "x";
	else if (b.re == 0)
		str << "-(" << b.im << ")i";
	return str;

}

LiczbaZespolona LiczbaZespolona::operator-(const LiczbaZespolona &b){

	LiczbaZespolona c;
	c.re = re - b.re;
	c.im = im - b.im;
	return c;

}

LiczbaZespolona LiczbaZespolona::operator*(const LiczbaZespolona &b){

	LiczbaZespolona c;
	c = re*b.re + re*b.im + im*b.re + im*b.im;
	return c;

}


LiczbaZespolona &LiczbaZespolona::operator-=(const LiczbaZespolona &b){

	re -= b.re;
	im -= b.im;
	return *this;

}

LiczbaZespolona LiczbaZespolona::operator==(const LiczbaZespolona &b){

	if (re == b.re && im == b.im)
		return true;
	else return false;

}

