

#include <iostream>
#include <list>
#include <math.h>

using namespace std;

int main() {
	
}

//#define GRUEN           0x0002
//#define ROT             0x0004
//#define NORMAL          0x0007
//#define HELLBLAU        0x0009
//
//using namespace std;
//int Lkw_P[50] = { 0,1,0,1,0,2 }; //Belegung des 2ten und 4ten Parkplatzes, Reservierung des 6ten Parkplatzes und "frei"-Status aller anderen Parkplätze
//
//void Statusuebersicht(); //Funktion zur Ausgabe aller Parkplätze, Belegungsstatus und Belegungsstunden 
//void Farbe(WORD color);  //Funktion zum Setzen der Ausgabefarben des Textes
//void Parkplatzbelegung();//Funktion zur Abfrage und Belegung eines Parkplatzes
//
//int main()
//{
//	Farbe(NORMAL);
//
//	cout << endl << "MELDUNG:" << endl; //Ausgabe beim ersten Durchlauf (nur für korrekte Formatierung nötig)
//
//	while (1) {
//		Statusuebersicht();  //Ausgabe der Parkplätze (mit Belegung) in zwei Spalten
//		Parkplatzbelegung(); //"Frage nach" und "setzen von" "Belegungsstunden und Belegtstatus"
//	}
//	return 0;
//}
//
////Funktion zum Setzen der Ausgabefarben des Textes
//void Farbe(WORD color)
//{
//	SetConsoleTextAttribute(::GetStdHandle(STD_OUTPUT_HANDLE), color);
//}
//
////Funktion zur Ausgabe aller Parkplätze mit Belegungsstatus (in 3 Spalten)
//void Statusuebersicht()
//{
//	for (int i = 0; i < 49; i++)
//	{
//		if (Lkw_P[i] == 1) {
//			cout << i << " ist belegt" << endl;
//		}
//		else if (Lkw_P[i] == 2) {
//			cout << i << " ist reserviert" << endl;
//		}
//		else {
//			cout << i << " ist frei" << endl;
//		}
//
//
//	}
//}
//
////Funktion zur Abfrage und Belegung eines Parkplatzes
//void Parkplatzbelegung()
//{
//	int input = 0;
//	cout << "Bitte eingeben" << endl;
//	cin >> input;
//
//	if (input < 1 || input > 50) {
//		return;
//	}
//
//	if (Lkw_P[input - 1] != 0) {
//		cout << "Schon belegt/reserviert" << endl;
//	}
//	else {
//		Lkw_P[input - 1] = 1;
//		cout << "Wurde belegt" << endl;
//	}
//
//}