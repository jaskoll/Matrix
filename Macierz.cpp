#include "Macierz.h"
#include <iostream>
#include "LiczbaZespolona.h"
using namespace std;

void Macierz::setM(int x){
	M = x;

}

void Macierz::setN(int y){
	M = y;

}

LiczbaZespolona Macierz::getM(){
	return M;

}

LiczbaZespolona Macierz::getN(){
	return N;

}


Macierz::Macierz(int m, int n){
	M = m;
	N = n;
	tablica = new LiczbaZespolona*[M];
	for (int i = 0; i<M; i++)
		tablica[i] = new LiczbaZespolona[N];

}


Macierz::Macierz(const Macierz &mac){
	M = mac.M;
	N = mac.N;

	tablica = new LiczbaZespolona*[M];
	for (int i = 0; i<M; i++)
		tablica[i] = new LiczbaZespolona[N];


}

Macierz &Macierz::operator=(const Macierz &mac){

	M = mac.M;
	N = mac.N;

	for (int i = 0; i < M; ++i)
		for (int j = 0; j < N; ++j)
			tablica[i][j] = mac.tablica[i][j];
	return *this;

}
Macierz::~Macierz(){
	for (int i = 0; i<M; i++)
		delete[]tablica[i];

	delete[]tablica;

}
void Macierz::wyswietlMacierz(){



	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < N; j++)
		{
			cout << tablica[i][j] << " ";
		}
		cout << endl;
	}


}

void Macierz::wypelnijZerami(){

	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < N; j++)
		{
			tablica[i][j] = 0;

		}
	}



}


void Macierz::wypelnijJedynkami(){

	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < N; j++)
		{
			tablica[i][j] = 1;

		}
	}

}

void Macierz::wypelnijLosowo(){

	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < N; j++)
		{
			tablica[i][j] = (rand() % 100) + 1;

		}
	}

}


void Macierz::wypelnijLiczbami(LiczbaZespolona &b){

	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < N; j++)
		{
			tablica[i][j] = b;

		}
	}

}

