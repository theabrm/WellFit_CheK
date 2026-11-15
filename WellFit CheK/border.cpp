/* Defines universal border */
#include "headers.h"

void border()
{
	int x1 = 6, x2 = 6, x3 = 6, y1 = 1, y2 = 1;

	do {
		gotoxy(x1, 1);
		cout << "*";
		x1++;
	} while (x1 <= 114);

	do {
		gotoxy(x3, 21);
		cout << "*";
		x3++;
	} while (x3 <= 114);

	do {
		gotoxy(x2, 31);
		cout << "*";
		x2++;
	} while (x2 <= 114);

	do {
		gotoxy(6, y1);
		cout << "*";
		y1++;
	} while (y1 <= 31);

	do {
		gotoxy(114, y2);
		cout << "*";
		y2++;
	} while (y2 <= 31);

	gotoxy(49, 2);
	cout << R"(
				  __        __   _ _ _____ _ _      ____ _          _    
				  \ \      / /__| | |  ___(_) |_   / ___| |__   ___| | __
				   \ \ /\ / / _ \ | | |_  | | __| | |   | '_ \ / _ \ |/ /
				    \ V  V /  __/ | |  _| | | |_  | |___| | | |  __/   < 
				     \_/\_/ \___|_|_|_|   |_|\__|  \____|_| |_|\___|_|\_\
)";

	gotoxy(58, 22);
	cout << "HELP";

	gotoxy(57, 28);
	cout << "Credits";
	
	gotoxy(27, 29);
    cout << "asciigenerators.com | my.clevelandclinic.org | otsukahealth.com.ph";

	gotoxy(36, 30);
	cout << "behealthy.ph | ascii-code.com | stackoverflow.com";
}