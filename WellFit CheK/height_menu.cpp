#include "headers.h"

int height_selection = 0;

void height_menu()
{
	help(16);
	gotoxy(42, 12);
	cout << "What is the unit of height used?";

	gotoxy(42, 14);
	cout << "1. Centimeters (cm)";
	gotoxy(42, 15);
	cout << "2. Meters (m)";
	gotoxy(42, 16);
	cout << "3. Feet and Inches (' \")";

	do {
		gotoxy(42, 18);
		cout << "Type your selection: ";
		height_selection = _getche();

		if (height_selection != 49 && height_selection != 50 && height_selection != 51) {
			gotoxy(47, 20);
			cout << "Invalid unit. Try it again.";
			cout << endl;
		}
	} while (height_selection != 49 && height_selection != 50 && height_selection != 51);

	if (height_selection == 49)
	{
		float cm;
		clear();
		border();
		help(17);
		gotoxy(50, 12);
		cout << "UNIT: Centimeters (cm)";

		cm_input:
		gotoxy(40, 14);
		cout << "Enter the student's height: ";
		cin >> cm;

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

			goto cm_input;
		}

		// Clear out the failed message
		if (!cin.fail())
		{
			gotoxy(20, 19);
			cout << string(80, ' ');
		}

		height = cm / 100;
	}
	if (height_selection == 50)
	{
		clear();
		border();
		help(18);
		gotoxy(53, 12);
		cout << "UNIT: Meters (m)";

		m_input:
		gotoxy(40, 14);
		cout << "Enter the student's height: ";
		cin >> height;

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

			goto m_input;
		}

		// Clear out the failed message
		if (!cin.fail())
		{
			gotoxy(20, 19);
			cout << string(80, ' ');
		}
	}

	if (height_selection == 51)
	{
		float combined_inches, feet_portion, inches_portion;

		clear();
		border();
		help(19);
		gotoxy(48, 12);
		cout << "UNIT: Feet and Inches (' \")";

		ft_input:
		gotoxy(40, 14);
		cout << "Enter the feet portion of the student's height: ";
		cin >> feet_portion;


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

			goto ft_input;
		}

		// Clear out the failed message
		if (!cin.fail())
		{
			gotoxy(20, 19);
			cout << string(80, ' ');
		}

		in_input:
		gotoxy(40, 15);
		cout << "Enter the inches portion of the student's height: ";
		cin >> inches_portion;


		// Checking for non-numerical input
		while (cin.fail())
		{
			gotoxy(20, 19);
			cout << string(80, ' ');

			gotoxy(45, 19);
			cout << "Invalid input. Please try again";

			cin.clear();
			cin.ignore((numeric_limits<streamsize>::max)(), '\n');

			gotoxy(40, 15);
			cout << string(50, ' ');

			goto in_input;
		}

		// Clear out the failed message
		if (!cin.fail())
		{
			gotoxy(20, 19);
			cout << string(80, ' ');
		}

		combined_inches = inches_portion + (feet_portion * 12);
		height = (combined_inches * 2.54) / 100;
		
	}
}