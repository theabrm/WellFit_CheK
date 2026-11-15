#include "headers.h"

int exit_selection = 0;

void exit_menu()
{
	help(6);
	gotoxy(48, 10);
	cout << "Are you sure that you want to exit?";
	gotoxy(48, 13);
	cout << "1. Exit";
	gotoxy(48, 14);
	cout << "2. Return to main menu";

	do {
		gotoxy(48, 17);
		cout << "Type your selection: ";
		exit_selection = _getche();

		if (exit_selection != 49 && exit_selection != 50) {
			cout << "\b \b" << flush;
			gotoxy(44, 19);
			cout << "Invalid entry. Please try again.";
		}
	} while (exit_selection != 49 && exit_selection != 50);

	if (exit_selection == 49)
	{
		clear();
		exit(0);
	}
	if (exit_selection == 50)
	{
		clear();
		main_menu();
	}
}