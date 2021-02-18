#include <iostream>
#include <list>
#include <math.h>

using namespace std;

int main() {
	int num = 10;
	string test(num, '_');
}

//void handle_player_one();
//void handle_player_two();
//
//int number = 0;
//
//int main() {
//
//	char repeat = 'J';
//
//
//	while (repeat == 'J' || repeat == 'j') {
//		system("cls");
//
//		handle_player_one();
//		handle_player_two();
//
//		cout << "Nochmal? (J,N)" << endl;
//
//		cin >> repeat;
//	}
//
//	return 0;
//}
//
//void handle_player_one() {
//
//	do {
//
//		cout << "Spieler 1: Bitte deinen Wert eingeben (1-10)! " << endl;
//		cin >> number;
//
//	} while (number > 10 || number < 1);
//
//
//
//}
//


//void show_menu();
//double calculate_with_interest(int amount, int percent, int years);
//int get_input(string name);
//void handle_simple_interest();
//void handle_advanced_interest();
//void handle_table();
//
//int main() {
//
//	char repeat = 'J';
//
//	while (repeat == 'J' || repeat == 'j') {
//		system("cls");
//
//		show_menu();
//
//		cout << "Nochmal? (J,N)" << endl;
//
//		cin >> repeat;
//	}
//
//	return 0;
//}
//
//void show_menu() {
//	cout << "1: Sparplan berechnen" << endl;
//	cout << "2: Sparplan (jaehrlich)" << endl;
//	cout << "3: Tilgungsding" << endl;
//
//	char option = ' ';
//
//	do {
//
//		cout << "Bitte Wert eingeben: (1,2,3)" << endl;
//		cin >> option;
//
//	} while (option != '1' && option != '2' && option != '3');
//
//
//	switch (option)
//	{
//	case '1':
//		handle_simple_interest();
//		break;
//	case '2':
//		handle_advanced_interest();
//		break;
//	case '3':
//		handle_table();
//		break;
//	default:
//		//Gibts nicht
//		break;
//	}
//}
//
//double calculate_with_interest(int amount, int percent, int years) {
//	return (double)amount * pow((1.0 + ((double)percent / 100.0)), (double)years);
//}
//
//int get_input(string name) {
//	cout << "Bitte " << name << " Eingeben:" << endl;
//
//	int val = 0;
//	cin >> val;
//
//	return val;
//
//}
//
//void handle_simple_interest() {
//	int amount = get_input("Start Kapital");
//	int percent = get_input("Zinssatz");
//	int years = get_input("Laufzeit");
//
//	float result = calculate_with_interest(amount, percent, years);
//
//	cout << endl << endl;
//	cout << "Nach " << years << " Jahren: " << result << endl << endl;
//}
//
//void handle_advanced_interest() {
//	int amount = get_input("Start Kapital");
//	int percent = get_input("Zinssatz");
//	int years = get_input("Laufzeit");
//
//	cout << endl << endl;
//
//	for (int i = 1; i <= years; i++)
//	{
//		double result = calculate_with_interest(amount, percent, i);
//		cout << "Nach " << i << " Jahren: " << result << endl;
//	}
//
//	cout << endl << endl;
//}
//
//void handle_table() {
//	double amount = get_input("Kreditsumme");
//	int percent = get_input("Zinssatz");
//	int years = get_input("Laufzeit");
//
//	double yearly_payoff = amount / years;
//
//	double total_interest = 0.0;
//
//	cout << "Ergebnis: Zinsen, Tilgung, Gesamt zu zahlen, Restschuld" << endl << endl;
//
//	for (int i = 1; i <= years; i++)
//	{
//		//Jährliche Zinsen
//		double interest = (amount / 100) * percent;
//
//		//Zinsen gesamt dazurechnen
//		total_interest += interest;
//
//		amount = amount - yearly_payoff;
//
//		cout << "Nach dem " << i << " Jahr:       " << interest << "       " << yearly_payoff << "       " << interest + yearly_payoff << "       " << amount << endl;
//	}
//
//	cout << "Zinsen gesamt: " << total_interest;
//}


//double get_untaxed_amount(double amount, double tax_in_percent);
//double get_input(string input_name);
//void print_to_screen(string val);
//void print_result(double result);
//
//int main()
//{
//	print_to_screen("AUF GEHTS");
//
//	double amount = get_input("Wert");
//	double tax = get_input("Steuersatz");
//
//	double untaxed_amount = get_untaxed_amount(amount, tax);
//
//	print_result(untaxed_amount);
//}
//
//double get_untaxed_amount(double amount, double tax_in_percent) {
//
//	return (amount / (100 + tax_in_percent)) * 100;
//}
//
//double get_input(string input_name) {
//	print_to_screen(input_name);
//
//	double val = 0.0;
//	cin >> val;
//
//	return val;
//	
//}
//
//void print_to_screen(string val) {
//	cout << val << endl;
//}
//
//
//void print_result(double result) {
//	cout << "Ergebnis: " << result;
//}
//
//
//





//double calculate_distance(int x_user, int y_user, int x_dest, int y_dest);
//void is_suitable(bool snow, double distance);
//
//
//int main()
//{
//	// Wohnort
//	int x_start = 0;
//	int y_start = 0;
//
//	// Loipeneigenschaften
//	int x_dest = 0;
//	int y_dest = 0;
//	bool hasSnow = false;
//	double distance = 0;
//
//
//	// Thalmässing
//	cout << "Loipe Thalmaessing:" << endl;
//	x_dest = 3;
//	y_dest = -13;
//	hasSnow = true;
//
//	is_suitable(hasSnow, calculate_distance(x_start, y_start, x_dest, y_dest));
//
//	// Balderschwang
//	cout << "Loipe Balderschwang:" << endl;
//	x_dest = -50;
//	y_dest = -187;
//	hasSnow = true;
//
//	is_suitable(hasSnow, calculate_distance(x_start, y_start, x_dest, y_dest));
//
//
//	// Ochsenkopf
//	cout << "Loipe Ochsenkopf:" << endl;
//	x_dest = 34;
//	y_dest = 112;
//	hasSnow = true;
//	is_suitable(hasSnow, calculate_distance(x_start, y_start, x_dest, y_dest));
//
//	// Eibach
//	cout << "Loipe Eibach:" << endl;
//	x_dest = 3;
//	y_dest = -3;
//	hasSnow = false;
//
//	is_suitable(hasSnow, calculate_distance(x_start, y_start, x_dest, y_dest));
//
//	// Oberhochstatt
//	cout << "Loipe Oberhochstatt:" << endl;
//	x_dest = -7;
//	y_dest = -13;
//	hasSnow = true;
//
//
//}
//
//
//
//double calculate_distance(int x_user, int y_user, int x_dest, int y_dest)
//{
//	int i_delta_x = x_user - x_dest;
//	int i_delta_y = y_user - y_dest;
//
//	double d_distanz = sqrt(i_delta_x * i_delta_x + i_delta_y * i_delta_y);
//	return d_distanz;
//}
//
//void is_suitable(bool snow, double distance) {
//
//	if (snow && distance < 15.0) {
//		cout << "OK!" << endl;
//	}
//	else {
//		cout << "NE!" << endl;
//	}
//}
//



//class Destination {
//public:
//	float destination_distance;
//	string destination_name;
//	bool destination_snow;
//
//
//	Destination(float distance, string name, bool snow)
//	{
//		destination_distance = distance;
//		destination_name = name;
//		destination_snow = snow;
//	}
//
//	bool is_suited() {
//		if (destination_snow && destination_distance < 15.0) {
//			return true;
//		}
//
//		return false;
//	}
//};
//
//int main() {
//
//	list<Destination> destinations;
//	destinations.push_back(Destination(2.1, "Name1", true));
//	destinations.push_back(Destination(4.1, "Name2", false));
//	destinations.push_back(Destination(32.1, "Name3", true));
//	destinations.push_back(Destination(55.1, "Name4", false));
//
//	for (Destination destination : destinations) {
//		if (destination.is_suited()) {
//			cout << destination.destination_name << " " << "ist geeignet!" << endl;
//		}
//		else {
//			cout << destination.destination_name << " " << "NICHT geeignet!" << endl;
//		}
//	}
//
//	return 0;
//}
//



//int main() {
//	int maxValue = 15;
//
//	for (int i = 0; i <= maxValue; i += 2) {
//		cout << i << endl;
//	}
//
//	cout << "------------------------------------------------" << endl << endl << endl;
//
//	int counter = 0;
//	for (int i = 0; i <= maxValue; i += 2) {
//		cout << i << " " << maxValue - counter <<  endl;
//		counter++;
//	}
//
//	
//}



//int main() {
//
//	cout << "Drehkreuzsteuerung: "; cout << endl;
//
//	for (int i = 30; i > 0; i--) {
//		cout << i; cout << " Plaetze uebrig." << endl;
//
//		getchar();
//	}
//
//	cout << "Aus die Maus!";
//
//	return 0;
//}
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