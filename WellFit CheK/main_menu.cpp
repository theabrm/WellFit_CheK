#include "headers.h"

int main_selection = 0;

void main_menu()
{
	border();
	help(5);
	gotoxy(48, 10);
	cout << "What do you want to do?";
	gotoxy(48, 12);
	cout << "1. Add New Record";
	gotoxy(48, 13);
	cout << "2. System Overview";
	gotoxy(48, 14);
	cout << "3. Exit";

	do {
		gotoxy(48, 17);
		cout << "Type your selection: ";
		main_selection = _getche();

		if (main_selection != 49 && main_selection != 50 && main_selection != 51) {
			cout << "\b \b" << flush;
			gotoxy(44, 19);
			cout << "Invalid entry. Please try again.";
		}
	} while (main_selection != 49 && main_selection != 50 && main_selection !=51);

	if (main_selection == 49)
	{
		clear();
		border();
		add_record();
	}
	if (main_selection == 50)
	{
		clear();
		border();
		user_manual();
	}
	if (main_selection == 51)
	{
		clear();
		border();
		exit_menu();
	}
}