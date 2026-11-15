#include "headers.h"

void startup()
{
	int border_top = 41;
	int border_bottom = 4;
	int border_left = 39;
	int border_right = 81;
	int border_y = 6;
	int x_loading = 31; /* x-axis start of Loading x movement dots */

	do {
		gotoxy(border_top, 5);
		Sleep(5);
		cout << "*";
		border_top++;
		cout << " ";
		border_top++;
	} while (border_top <= 79);

	do {
		gotoxy(border_right, border_y);
		Sleep(1);
		cout << "*";

		gotoxy(border_left, border_y);
		Sleep(1);
		cout << "*";

		border_right += 2;
		border_left -= 2;
		border_y++;
	} while (border_y < 25);

	do {
		gotoxy(border_bottom, 24);
		Sleep(1);
		cout << " ";
		border_bottom++;
		cout << "*";
		border_bottom++;
	} while (border_bottom <= 117);

	gotoxy(53, 10);
	Sleep(150);
	cout << R"(
				  __        __   _ _ _____ _ _      ____ _          _    
				  \ \      / /__| | |  ___(_) |_   / ___| |__   ___| | __
				   \ \ /\ / / _ \ | | |_  | | __| | |   | '_ \ / _ \ |/ /
				    \ V  V /  __/ | |  _| | | |_  | |___| | | |  __/   < 
				     \_/\_/ \___|_|_|_|   |_|\__|  \____|_| |_|\___|_|\_\
)";

	gotoxy(40, 17);
	cout << "Making PATHFit and Clinic records easier.";

	gotoxy(20, 20);
	Sleep(20);
	cout << "Starting up";

	do {
		Sleep(200);
		gotoxy(x_loading, 20);
		cout << ".";
		x_loading++;
	} while (x_loading <= 30);

	gotoxy(37, 23);
	cout << "Copyright Adrien Martin. All Rights Reserved.";

	do {
		Sleep(200);
		gotoxy(x_loading,20);
		cout << ".";
		x_loading++;
	} while (x_loading <= 39);

	clear();
}