#pragma once
#include <iostream>
#include "LiczbaZespolona.h"
class Macierz
{
private:
	LiczbaZespolona **tablica;
	int M, N;

public:
	Macierz(int m = 1, int n = 1);
	Macierz(const Macierz &mac);
	Macierz &operator=(const Macierz &mac);
	~Macierz();
	void setM(int x);
	void setN(int y);
	LiczbaZespolona getM();
	LiczbaZespolona getN();
	void wypelnijZerami();
	void wypelnijJedynkami();
	void wypelnijLosowo();
	void wyswietlMacierz();
	void wypelnijLiczbami(LiczbaZespolona &b);

};

