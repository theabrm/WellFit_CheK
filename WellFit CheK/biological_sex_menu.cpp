#include "headers.h"

int sex_selection = 0;

void biological_sex_menu()
{
	help(9);
	gotoxy(42, 12);
	cout << "What is the student's biological sex?";
	
	gotoxy(42, 14);
	cout << "1. Male";
	gotoxy(42, 15);
	cout << "2. Female";

	do {
		gotoxy(42, 17);
		cout << "Type your selection: ";
		sex_selection = _getche();

		if (sex_selection != 49 && sex_selection != 50) {
			cout << "\b \b" << flush;
			gotoxy(48, 19);
			cout << "Invalid sex. Try it again.";
		}
	} while (sex_selection != 49 && sex_selection != 50);

	if (sex_selection == 49)
	{
		sex_value = "Male";
	}
	if (sex_selection == 50)
	{
		sex_value = "Female";
	}
}