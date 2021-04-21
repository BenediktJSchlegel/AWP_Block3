///
///	Code für Kurzarbeit vom 21.04.2021
/// Mit Vorgaben für Benennungen und Code-Style
/// 



//Autor: Benedikt Schlegel IF10C 21.04.2021

//Kopiertes Template aus Aufgabe

// Kommentieren Sie ausführlich mit Bezug zur Aufgabe (vgl. Beispiel)
// Geben Sie frühzeitig ab für Bonuspunkte
// 
// Verwenden Sie bei den Variablen Namenskürzel
// Beispiel: Antonia Musterfau --> int i_zahl_AM

// Vorbereitsungszeit: ca 30min für Klassendiagramme
// Erwartete Note: 1

// Viel Erfolg!


#include <iostream>

using namespace std;

//Funktion deklarationen
float mittelwert(int i_laenge_BS);
void ueberpruefung(int i_laenge_BS, float f_normgewicht_BS);

//Globale variablen und konstanten
const int i_gemuese_anzahl_BS = 10;
float a_gemuese_BS[i_gemuese_anzahl_BS] = {0.62, 0.55, 0.56};

int main()
{
	float f_norm_gewicht_BS = 0.61;
	float f_mittleres_gewicht_BS;

	cout << "Spargelkontrolle von Benedikt Schlegel" << endl << endl;

	//Setzen der fehlenden Array werte
	for (int i = 0; i < i_gemuese_anzahl_BS; i++)
	{
		//Wenn der Wert noch 0 ist
		if (a_gemuese_BS[i] == 0) {
			//Gerader Index => 0.57 sonst 0.67
			if (i % 2 == 0) {
				a_gemuese_BS[i] = 0.57;
			}
			else {
				a_gemuese_BS[i] = 0.67;
			}
		}
	}

	//Mittelwert errechnen
	f_mittleres_gewicht_BS = mittelwert(size(a_gemuese_BS));

	//Mittelwert ausgeben
	cout << "Der Mittelwert der Kisten ist: " << f_mittleres_gewicht_BS << "kg" << endl;

	//Jedes Bündel einzeln prüfen
	ueberpruefung(size(a_gemuese_BS), f_norm_gewicht_BS);
	
	
	return 0;
}

//Gibt den mittelwert des Arrays zurück
float mittelwert(int i_laenge_BS) {
	float f_gesamtwert_BS = 0.0;

	//Alle werte zum gesamten zählen
	for (int i = 0; i < i_laenge_BS; i++)
	{
		f_gesamtwert_BS = f_gesamtwert_BS + a_gemuese_BS[i];
	}

	//Mittelwert berechnen
	float f_mittelwert_BS = f_gesamtwert_BS / i_laenge_BS;

	//Mittelwert zurückgeben
	return f_mittelwert_BS;
}

//Überprüft jedes Bündel und gibt aus ob es zu schwer/leicht oder genau passt
void ueberpruefung(int i_laenge_BS, float f_normgewicht_BS) {

	//Für jeden Index das Bündel prüfen
	for (int i = 0; i < i_laenge_BS; i++)
	{
		//Zu schwer?

		if (a_gemuese_BS[i] > f_normgewicht_BS) {
			//Zu schwer!
			//Ausgeben => i+1 das 1 basiert nicht 0 basiert ist
			cout << "Das Buendel Nr:" << i + 1 << " ist zu schwer: " << a_gemuese_BS[i] << "kg" << endl;
		}
		else {
			//Nicht zu schwer

			//Zu leicht?
			if (a_gemuese_BS[i] < f_normgewicht_BS) {
				//zu leicht
				cout << "Das Buendel Nr:" << i + 1 << " ist zu leicht: " << a_gemuese_BS[i] << "kg" << endl;

			} else {
				//passt genau!
				cout << "Das Buendel Nr:" << i + 1 << " passt genau: " << a_gemuese_BS[i] << endl;
			}
		}
	}
}
