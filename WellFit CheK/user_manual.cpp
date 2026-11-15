#include "headers.h"

void user_manual_border()
{
	int x1 = 6, x2 = 6, y1 = 1, y2 = 1;

	do {
		gotoxy(x1, 1);
		cout << "*";
		x1++;
	} while (x1 <= 114);

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
}

void user_manual()
{
	clear();
	user_manual_border();

	gotoxy(53, 10);
	cout << "SYSTEM OVERVIEW";

	gotoxy(20, 12);
	cout << "In order to produce a student's record, the system will ask the following:";

	gotoxy(20, 14);
	cout << "-Student's Name, Age, Sex, Temperature, Weight, Height and Heart Rate";
	gotoxy(20, 15);
	cout << "-Professor's Name";

	gotoxy(20, 17);
	cout << "The system have a detailed instructions on each page, make sure to just follow them.";

	gotoxy(57, 20);
	cout << "CREDITS";

	gotoxy(9, 22);
	cout << "https://asciigenerators.com/ for the ASCII logo generation";

	gotoxy(9, 23);
	cout << "https://my.clevelandclinic.org/health/diagnostics/heart-rate for heart rate classification";

	gotoxy(9, 24);
	cout << "https://otsukahealth.com.ph/bmi-calculator/ for bmi calculation and classification procedure";

	gotoxy(9, 25);
	cout << "https://www.behealthy.ph/blogs/all-about-your-health/fever-temperature-chart-philippines for temperature";

	gotoxy(9, 26);
	cout << "https://www.ascii-code.com/ for ASCII code reference";

	gotoxy(9, 27);
	cout << "https://stackoverflow.com/ for help on Windows APIs";

	gotoxy(41, 29);
	cout << "Press Enter to return to the main menu";

	char ending_manual;

	do {
		ending_manual = _getch();
	} while (ending_manual != char(13));
	
	if (ending_manual == char(13))
	{
		clear();
		main_menu();
	}
}