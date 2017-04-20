#pragma once
#include <iostream>

using namespace std;

class LiczbaZespolona
{
private:
	friend class Macierz;
	double im, re;
public:
	void setRe(double x);
	void setIm(double y);
	double getRe();
	double getIm();
	void wyswietl();
	double modul();
	void kat(double x, double y);
	LiczbaZespolona operator+(const LiczbaZespolona &b);
	LiczbaZespolona & operator+=(const LiczbaZespolona &b);
	LiczbaZespolona & operator=(const LiczbaZespolona &b);
	friend ostream& operator<<(ostream &str, const LiczbaZespolona &b);
	LiczbaZespolona operator-(const LiczbaZespolona &b);
	LiczbaZespolona operator*(const LiczbaZespolona &b);
	LiczbaZespolona operator/(const LiczbaZespolona &b);
	LiczbaZespolona& operator-=(const LiczbaZespolona &b);
	LiczbaZespolona operator==(const LiczbaZespolona &b);

public:
	LiczbaZespolona();
	LiczbaZespolona(double x);
	LiczbaZespolona(double x, double y);
};
