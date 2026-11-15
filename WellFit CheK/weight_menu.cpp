#include "headers.h"

int weight_selection = 0;

void weight_menu()
{
	help(13);
	gotoxy(42, 12);
	cout << "What is the unit of weight used?";

	gotoxy(42, 14);
	cout << "1. Kilograms";
	gotoxy(42, 15);
	cout << "2. Pounds";

	do {
		gotoxy(42, 17);
		cout << "Type your selection: ";
		weight_selection = _getche();

		if (weight_selection != 49 && weight_selection != 50) {
			gotoxy(47, 19);
			cout << "Invalid unit. Try it again.";
			cout << endl;
		}
	} while (weight_selection != 49 && weight_selection != 50);

	if (weight_selection == 49)
	{
		clear();
		border();
		help(14);
		gotoxy(51, 12);
		cout << "UNIT: Kilograms (kg)";

		kg_input:
		gotoxy(40, 14);
		cout << "Enter the student's weight: ";
		cin >> weight;


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

			goto kg_input;
		}

		// Clear out the failed message
		if (!cin.fail())
		{
			gotoxy(20, 19);
			cout << string(80, ' ');
		}
	}
	if (weight_selection == 50)
	{
		float pounds;

		clear();
		border();
		help(15);
		gotoxy(52, 12);
		cout << "UNIT: Pounds (lb)";

		lb_input:
		gotoxy(40, 14);
		cout << "Enter the student's weight: ";
		cin >> pounds;

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

			goto lb_input;
		}

		// Clear out the failed message
		if (!cin.fail())
		{
			gotoxy(20, 19);
			cout << string(80, ' ');
		}

		weight = pounds * 0.4535924;
	}
}