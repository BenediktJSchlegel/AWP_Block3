
#include <iostream>

using namespace std;

double calculate_distance(int x_pos, int y_pos, int x_dest, int y_dest);
int get_random_position();
void init();

const int bike_count = 50;

int ids[bike_count];
int x_positions[bike_count];
int y_positions[bike_count];

int main()
{
	init();

	while (true) {

		int x_input;
		int y_input;

		cout << "Bitte geben Sie Ihre X Position ein: ";
		cin >> x_input;
		cout << "Bitte geben Sie Ihre Y Position ein: ";
		cin >> y_input;

		cout << endl << endl << "Fahrrad wird gesucht . . ." << endl << endl;

		int best_index;
		// = 2000 = Terrible workaround for first iteration
		double best_distance = 2000;

		for (int i = 0; i < bike_count; i++)
		{
			double distance = calculate_distance(x_input, y_input, x_positions[i], y_positions[i]);

			if (distance < best_distance) {
				best_index = i;
				best_distance = distance;

				cout << "Besseres Rad gefunden: " << "ID: " << ids[best_index] << ", Distanz: " << best_distance << " m" << endl;
			}
		}

		cout << endl << endl;
		cout << "Bitte buchen Sie das Rad mit der ID: " << ids[best_index] << " in " << best_distance << " Metern Entfernung.";
		cout << endl << endl;
	}
}

/// <summary>
/// Generate values for Arrays
/// ID = index + 1. 1 - 50
/// x/y pos = 0 - 1000 Random int
/// </summary>
void init() {
	//Seed the (semi) random number generator => Different values each run
	srand(time(NULL));

	for (int i = 0; i < bike_count; i++)
	{
		ids[i] = i + 1;
		x_positions[i] = get_random_position();
		y_positions[i] = get_random_position();
	}
}

int get_random_position() {
	//Rnd in range 0 - 1000
	return rand() % 1000 + 1;
}

double calculate_distance(int x_pos, int y_pos, int x_dest, int y_dest)
{
	int x_delta = x_pos - x_dest;
	int y_delta = y_pos - y_dest;

	double distance = sqrt((x_delta * x_delta) + (y_delta * y_delta));
	return distance;	
}
