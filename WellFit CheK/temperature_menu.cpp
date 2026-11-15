#include "headers.h"

int temperature_selection = 0;

void temperature_menu()
{
	help(10);
	gotoxy(42, 12);
	cout << "What is the unit of temperature used?";

	gotoxy(42, 14);
	cout << "1. Celsius";
	gotoxy(42, 15);
	cout << "2. Fahrenheit";

	do {
		gotoxy(42, 17);
		cout << "Type your selection: ";
		temperature_selection = _getche();

		if (temperature_selection != 49 && temperature_selection != 50) {
			gotoxy(47, 19);
			cout << "Invalid unit. Try it again.";
			cout << endl;
		}
	} while (temperature_selection != 49 && temperature_selection != 50);

	if (temperature_selection == 49)
	{
		clear();
		border();
		help(11);
		gotoxy(54, 12);
		cout << "UNIT: CELSIUS";

		cel_input:
		gotoxy(40, 14);
		cout << "Enter the student's temperature: ";
		cin >> temperature;

		// Checking for non-numerical input
		while (cin.fail())
		{
			gotoxy(20, 19);
			cout << string(80, ' ');

			gotoxy(45, 19);
			cout << "Invalid input. Please try again";

			cin.clear();
			cin.ignore((numeric_limits<streamsize>::max)(), '\n');

			gotoxy(40, 14);
			cout << string(50, ' ');

			goto cel_input;
		}

		// Clear out the failed message
		if (!cin.fail())
		{
			gotoxy(20, 19);
			cout << string(80, ' ');
		}
	}
	
	else if (temperature_selection == 50)
		{
			float fahrenheit;

			clear();
			border();
			help(12);
			gotoxy(55, 12);
			cout << "UNIT: FAHRENHEIT";

			fah_input:
			gotoxy(40, 14);
			cout << "Enter the student's temperature: ";
			cin >> fahrenheit;

			// Checking for non-numerical input
			while (cin.fail())
			{
				gotoxy(20, 19);
				cout << string(80, ' ');

				gotoxy(45, 19);
				cout << "Invalid input. Please try again";

				cin.clear();
				cin.ignore((numeric_limits<streamsize>::max)(), '\n');

				gotoxy(40, 14);
				cout << string(50, ' ');

				goto fah_input;
			}

			// Clear out the failed message
			if (!cin.fail())
			{
				gotoxy(20, 19);
				cout << string(80, ' ');
			}
			temperature = ((fahrenheit - 32) * (5.0 / 9.0));
		}
}