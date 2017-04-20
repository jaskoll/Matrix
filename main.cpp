#include "LiczbaZespolona.h"
#include "Macierz.h"
#include <cstdlib> 
#include <iostream>
using namespace std;

int main(){
	int a, b, c, d, a1, a2;
	cout << "Podaj czesc rzeczywista liczby zespolonej" << endl;
	cin >> a;
	cout << "Podaj czesc urojona liczby zespolonej" << endl;
	cin >> b;
	LiczbaZespolona liczba(a, b);
	cout << "Liczba Zespolona: ";
	cout << liczba<<endl;
	liczba.kat(a, b);

	cout << "Podaj ilosc wierszy macierzy: " << endl;
	cin >> c;
	cout << "Podaj ilosc kolumn macierzy" << endl;
	cin >> d;
	Macierz macierz(c, d);
	macierz.wypelnijLosowo();
	cout << "Macierz z losowymi liczbami: " << endl;
	macierz.wyswietlMacierz();
	cout << "Macierz z jedynkami: " << endl;
	macierz.wypelnijJedynkami();
	macierz.wyswietlMacierz();
	cout << "Macierz z zerami: " << endl;
	macierz.wypelnijZerami();
	macierz.wyswietlMacierz();
	cout << "Macierz z liczba zespolona: " << endl;
	macierz.wypelnijLiczbami(liczba);
	macierz.wyswietlMacierz();
	cout << endl;
	cout << "Podaj czesc rzeczywista drugiej liczby zespolonej" << endl;
	cin >> a1;
	cout << "Podaj czesc urojona drugiej liczby rzeczywistej" << endl;
	cin >> a2;
	LiczbaZespolona liczba1(a1, a2), liczba3;
	cout << "Druga liczba zespolona: " << endl;
	cout << liczba1 << endl;
	cout << "Wynik dodawania dwoch liczb" << endl;
	liczba3 = liczba + liczba1;
	cout << liczba3 << endl;

	system("pause");
	return 0;
}