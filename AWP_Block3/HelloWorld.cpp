#include <iostream>

using namespace std;


int main() {

	cout << "Drehkreuzsteuerung: "; cout << endl;

	for (int i = 30; i > 0; i--) {
		cout << i; cout << " Plaetze übrig."; cout << endl;
	}

	cout << "Aus die Maus!";
}




//int main()
//{
//	// Variablen für Berechnung des Anhalteweges definieren und mit 0 initalisieren
//	float stopping_distance = 0;
//
//	float speed = 0;
//	float reaction_time = 0;
//	float delay_time = 0;
//
//	//Distanz die unterschritten werden muss um ein positives Ergebnis zu haben
//	const int distance_person = 15;
//
//	char repeat_char;
//
//	do {
//		//User Input
//		cout << "------------ Bestimmung des Anhaltewegs ------------" << endl;
//		cout << "Geben Sie Ihre Geschwindigkeit in km/h ein: "; cin >> speed;
//		cout << "Geben Sie die Reaktionszeit ein: "; cin >> reaction_time;
//		cout << "----------------------------------------------------------------------------------" << endl << endl;
//
//		cout << "Situationen:" << endl;
//		cout << "1: Nasser Asphalt" << endl;
//		cout << "2: Nasser Beton" << endl;
//		cout << "3: Trockener Asphalt" << endl;
//		cout << "4: Trockener Beton" << endl;
//
//		char menu_option = ' ';
//
//		do {
//			cin >> menu_option;
//
//			switch (menu_option)
//			{
//			case '1':
//				delay_time = 9;
//				break;
//			case '2':
//				delay_time = 7;
//				break;
//			case '3':
//				delay_time = 5;
//				break;
//			case '4':
//				delay_time = 3;
//				break;
//			default:
//				cout << "Bitte 1, 2, 3 oder 4 Eingeben!";
//				break;
//			}
//
//		} while (menu_option != '1' && menu_option != '2' && menu_option != '3' && menu_option != '4');
//
//		float speedInMs = (speed * 1000) / 3600;
//
//		stopping_distance = speedInMs * reaction_time + (pow(speedInMs, 2) / (2 * delay_time));
//
//
//		// Ausgabe Anhalteweg
//		cout << "Anhalteweg:" << stopping_distance << endl << endl;
//
//
//		if (distance_person > stopping_distance)
//		{
//			cout << ":) OK";
//		}
//		else
//		{
//			cout << ":(  RIP";
//		}
//
//
//		// Abfragen ob neue Abfrage gemacht werden soll
//		cout << endl << endl << "Wollen Sie einen neuen Wert berechnen? (J/j): ";
//
//		cin >> repeat_char;
//		cout << endl << endl;
//
//	} while (repeat_char == 'j' || repeat_char == 'J');
//
//
//
//}

//#include <iostream>
//#include <math.h> 
//
//using namespace std;
//
////int main()
////{
////    std::cout << "Hello World!\n";
////    int charAsInt = getchar();
////    std::cout << charAsInt;
////    return 0;
////}
//
////int main()
////{
////	int userPos = 0;
////	int bikePos = 0;
////	//list<int> bikePositions;
////	//string input = "";
////
////	
////	cout << "Wo ist der Benutzer?";
////	cin >> userPos;
////	cout << "Wo ist das Fahrrad?";
////	cin >> bikePos;
////
////	cout << "--------------------------------------\n";
////	cout << "Der Benutzer ist an Position:" << userPos << "\n";
////	cout << "Das Fahrrad ist an Position:" << bikePos << "\n";
////
////	int distance = 0;
////
////	bikePos < userPos ? distance = userPos - bikePos : distance = bikePos - userPos;
////
////	cout << "Die Distanz ist:" << distance << "\n";
////	
////}
//
////int main()
////{
////	int userX = 0;
////	int userY = 0;
////	int bikeX = 0;
////	int bikeY = 0;
////
////
////	cout << "Wo ist der Benutzer X und Y?";
////	cin >> userX >> userY;
////
////	cout << "Wo ist das Fahrrad X und Y?";
////	cin >> bikeX >> bikeY;
////
////
////	cout << "--------------------------------------\n";
////	cout << "Der Benutzer ist an Position: X = " << userX << "| Y = " << userY << "\n";
////	cout << "Das Fahrrad ist an Position: X = " << bikeX << "| Y = " << bikeY << "\n";
////
////	//Distanz auf der X Achse
////	int distanceX = 0;
////	//Distanz auf der Y Achse
////	int distanceY = 0;
////	//Finale Distanz im 2D Bereich
////	float distanceFinal = 0;
////
////	bikeX < userX ? distanceX = userX - bikeX : distanceX = bikeX - userX;
////	userY < userX ? distanceY = userY - bikeY : distanceY = bikeY - userY;
////
////	distanceFinal = sqrt(pow(distanceX, 2) + pow(distanceY, 2));
////	
////
////	cout << "Die Distanz ist:" << distanceFinal << "\n";
////
////	getchar();
////	getchar();
////}
//
//
////int main()
////{
////	//bool x = (year % 4 == 0) && ((year % 100 != 0) || (year % 400 == 0));
////	string continueExe;
////
////	do 
////	{
////		int year = 0;
////		string output;
////
////		cin >> year;
////
////
////
////		if (year % 4 == 0)
////		{
////
////			if (year % 100 == 0)
////			{
////				if (year % 400 == 0)
////				{
////					output = "Ist ein Schaltjahr";
////				}
////				else
////				{
////					output = "Ist kein Schaltjahr";
////				}
////			}
////			else
////			{
////				output = "Ist ein Schaltjahr";
////			}
////		}
////		else
////		{
////			output = "Es ist kein Schaltjahr";
////		}
////
////		cout << output << endl << endl;
////		cout << "Wollen Sie noch ein Jahr eingeben? j/n";
////
////		cin >> continueExe;
////
////	} while (continueExe != "n");
////	
////}
//
////int main() 
////{
////	int num;
////
////	cin >> num;
////
////	do 
////	{
////		int remaining = num % 2;
////		num = num / 2;
////
////		cout << remaining;
////	} while (num > 0);
////}
//
////
////int main()
////{
////	int speed = 0;
////	float reactionTime = 0;
////	float delay = 0;
////
////	cout << "--------------Bestimmung des Anhaltewegs--------------" << endl;
////	cout << "Bitte geben Sie Ihre Geschwindigkeit in km/h ein: ";
////	cin >> speed;
////	cout << endl;
////
////	cout << "Bitte geben Sie Ihre Reaktionszeit in s ein: ";
////	cin >> reactionTime;
////	cout << endl;
////
////	cout << "Bitte geben Sie Ihren Verzögerungswert in m/s^2 ein: ";
////	cin >> delay;
////	cout << endl;
////	cout << "-----------------------------------------------------" << endl;
////
////	float speedInM = ((float)speed * 1000) / 3600;
////
////	float result = speedInM * reactionTime + (pow(speedInM, 2)/(2 * delay));
////
////	cout << result;
////
////}
//#include <iostream>
//#include <math.h> 
//
//using namespace std;
//
//int main()
//{
//	// Variablen für Berechnung des Anhalteweges definieren und mit 0 initalisieren
//	float stopping_distance = 0;
//
//	float speed = 0;
//	float reaction_time = 0;
//	float delay_time = 0;
//
//	//Distanz die unterschritten werden muss um ein positives Ergebnis zu haben
//	const int distance_person = 15;
//
//	char repeat_char;
//
//	do {
//		//User Input
//		cout << "------------ Bestimmung des Anhaltewegs ------------" << endl;
//		cout << "Geben Sie Ihre Geschwindigkeit in km/h ein: "; cin >> speed;
//		cout << "Geben Sie die Reaktionszeit in s ein: "; cin >> reaction_time;
//		cout << "Geben Sie den Verzögerungswert in m/s^2 an (9, 7, 5 oder 3) ein: "; cin >> delay_time;
//		cout << "----------------------------------------------------------------------------------" << endl;
//
//		float speedInMs = (speed * 1000) / 3600;
//
//		stopping_distance = speedInMs * reaction_time + (pow(speedInMs, 2) / (2 * delay_time));
//
//
//		// Ausgabe Anhalteweg
//		cout << "Anhalteweg:" << stopping_distance << endl << endl;
//
//
//		if (distance_person > stopping_distance)
//		{
//			cout << ":) OK";
//		}
//		else
//		{
//			cout << ":(  RIP";
//		}
//
//
//		// Abfragen ob neue Abfrage gemacht werden soll
//		cout << endl << endl << "Wollen Sie einen neuen Wert berechnen? (J/j): ";
//
//		cin >> repeat_char;
//		cout << endl << endl;
//
//	} while (repeat_char == 'j' || repeat_char == 'J');
//
//
//
//}

//int main()
//{
//	// Variablen für Berechnung des Anhalteweges definieren und mit 0 initalisieren
//	float stopping_distance = 0;
//
//	float speed = 0;
//	float reaction_time = 0;
//	float delay_time = 0;
//
//	//Distanz die unterschritten werden muss um ein positives Ergebnis zu haben
//	const int distance_person = 15;
//
//	char repeat_char;
//
//	do {
//		//User Input
//		cout << "------------ Bestimmung des Anhaltewegs ------------" << endl;
//		cout << "Geben Sie Ihre Geschwindigkeit in km/h ein: "; cin >> speed;
//		cout << "Geben Sie die Reaktionszeit in s ein: "; cin >> reaction_time;
//		cout << "Geben Sie den Verzögerungswert in m/s^2 an (9, 7, 5 oder 3) ein: "; cin >> delay_time;
//		cout << "----------------------------------------------------------------------------------" << endl;
//
//		float speedInMs = (speed * 1000) / 3600;
//
//		stopping_distance = speedInMs * reaction_time + (pow(speedInMs, 2) / (2 * delay_time));
//
//
//		// Ausgabe Anhalteweg
//		cout << "Anhalteweg:" << stopping_distance << endl << endl;
//
//
//		if (distance_person > stopping_distance)
//		{
//			cout << ":) OK";
//		}
//		else
//		{
//			cout << ":(  RIP";
//		}
//
//
//		// Abfragen ob neue Abfrage gemacht werden soll
//		cout << endl << endl << "Wollen Sie einen neuen Wert berechnen? (J/j): ";
//
//		cin >> repeat_char;
//		cout << endl << endl;
//
//	} while (repeat_char == 'j' || repeat_char == 'J');
//
//
//
//}