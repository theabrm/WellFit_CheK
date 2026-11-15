/* WellFitChek */

#include "headers.h"

int main()
{
	cout << "\x1b[8;30;121t";
	system("color 17");
	clear();


	// The program will call the startup function
	startup(); 


	cout << "\x1b[8;33;121t";
	system("color 17");
	clear();

	// After the border has been intialized, the login function shall be called
	login();

	// If the login function reports that a login is sucessful, then proceed to the main menu
	if (login_successful == 1) {

		main_menu();
	}

	return(0);
}