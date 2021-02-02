#include <iostream>
#include <list>
#include <math.h>
//#include <string.h>


using namespace std;

void show_menu();
double calculate_with_interest(int amount, int percent, int years);
int get_input(string name);
void handle_simple_interest();
void handle_advanced_interest();
void handle_table();

int main() {

	char repeat = 'J';

	while (repeat == 'J' || repeat == 'j') {
		system("cls");

		show_menu();

		cout << "Nochmal? (J,N)" << endl;

		cin >> repeat;
	}

	return 0;
}

void show_menu() {
	cout << "1: Sparplan berechnen" << endl;
	cout << "2: Sparplan (jaehrlich)" << endl;

	char option = ' ';

	do {

		cout << "Bitte Wert eingeben: (1,2,3)" << endl;
		cin >> option;

	} while (option != '1' && option != '2' && option != '3');


	switch (option)
	{
	case '1':
		handle_simple_interest();
		break;
	case '2':
		handle_advanced_interest();
		break;
	case '3':
		handle_table();
		break;
	default:
		//Gibts nicht
		break;
	}
}

double calculate_with_interest(int amount, int percent, int years) {
	return (double)amount * pow((1.0 + ((double)percent / 100.0)), (double)years);
}

int get_input(string name) {
	cout << "Bitte " << name << " Eingeben:" << endl;

	int val = 0;
	cin >> val;

	return val;

}

void handle_simple_interest() {
	int amount = get_input("Start Kapital");
	int percent = get_input("Zinssatz");
	int years = get_input("Laufzeit");

	float result = calculate_with_interest(amount, percent, years);

	cout << endl << endl;
	cout << "Nach " << years << " Jahren: " << result << endl << endl;
}

void handle_advanced_interest() {
	int amount = get_input("Start Kapital");
	int percent = get_input("Zinssatz");
	int years = get_input("Laufzeit");

	cout << endl << endl;

	for (int i = 1; i <= years; i++)
	{
		double result = calculate_with_interest(amount, percent, i);
		cout << "Nach " << i << " Jahren: " << result << endl;
	}

	cout << endl << endl;
}

void handle_table() {
	double amount = get_input("Kreditsumme");
	int percent = get_input("Zinssatz");
	int years = get_input("Laufzeit");

	double yearly_payoff = amount / years;

	double total_interest = 0.0;

	cout << "Ergebnis: Zinsen, Tilgung, Gesamt zu zahlen, Restschuld" << endl << endl;

	for (int i = 1; i <= years; i++)
	{
		//Jährliche Zinsen
		double interest = (amount / 100) * percent;

		//Zinsen gesamt dazurechnen
		total_interest += interest;

		amount = amount - yearly_payoff;

		cout << "Nach dem " << i << " Jahr:       " << interest << "       " << yearly_payoff << "       " << interest + yearly_payoff << "       " << amount << endl;
	}
}