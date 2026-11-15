#include "headers.h"

/* Definition of Functions */
void biological_sex_menu();
void height_menu();
void weight_menu();
void temperature_menu();

void header()
{
	gotoxy(54, 10);
	cout << "ADD NEW RECORD";
}

void add_record()
{
	string surname, given_name, middle_name, professor_name;
	int age;
	char the_end;

	// Student's Name
	help(7);
	header();
	gotoxy(54, 12);
	cout << "Student's Name";
	gotoxy(40, 15);
	cout << "Enter the Student's Last Name: ";
	getline(cin, surname);
	gotoxy(40, 16);
	cout << "Enter the Student's Given Name: ";
	getline(cin, given_name);
	gotoxy(40, 17);
	cout << "Enter the Student's Middle Name: ";
	getline(cin, middle_name);

	clear();
	border();
	header();

	// Professor's Name and Student's Age
	help(8);
	gotoxy(54, 12);
	cout << "Other Details";
	gotoxy(40, 15);
	cout << "Enter the Professor's Name: ";
	getline(cin, professor_name);

	clear();
	border();
	header();

	// Student's Biological Sex
	biological_sex_menu();

	clear();
	border();
	header();

	// Temperature
	temperature_menu();

	clear();
	border();
	header();

	// Weight
	weight_menu();

	clear();
	border();
	header();

	// Height
	height_menu();

	clear();
	border();
	header();

	// Age and Heartrate
	help(20);
	
	age_input:
	gotoxy(40, 14);
	cout << "Enter the student's age: ";
	cin >> age;

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

		goto age_input;
	}

	// Clear out the failed message
	if (!cin.fail())
	{
		gotoxy(20, 19);
		cout << string(80, ' ');
	}

	heart_rate_input:
	gotoxy(40, 15);
	cout << "Enter the student's Heart rate: ";
	cin >> heart_rate;


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

		goto heart_rate_input;
	}

	// Clear out the failed message
	if (!cin.fail())
	{
		gotoxy(20, 19);
		cout << string(80, ' ');
	}

	compute();

	gotoxy(43, 19);
	cout << "Student record created sucessfully.";

	Sleep(700);

	clear();
	border();

	ostringstream temperature_final, weight_final, height_final, bmi_final;
	temperature_final << fixed << setprecision(2) << temperature;
	weight_final << fixed << setprecision(2) << weight;
	height_final << fixed << setprecision(2) << height;
	bmi_final << fixed << setprecision(2) << bmi;

	// Final Output
	help(21);

	string output_1 = "Name: " + surname + ", " + given_name + " " + middle_name;
	string output_2 = "Age: " + to_string(int(age));
	string output_3 = "Sex: " + sex_value;
	string output_4 = "Professor: " + professor_name;
	string output_5 = "Temperature: " + temperature_final.str() + "C (" + temperature_status + ")";;
	string output_6 = "Weight: " + weight_final.str() + "kg";
	string output_7 = "Height: " + height_final.str() + "m";
	string output_8 = "BMI: " + bmi_final.str() + " (" + bmi_status + ")";
	string output_9 = "Heart Rate: " + to_string(int(heart_rate)) + "bpm (" + heart_rate_status + ")";

	gotoxy(40, 9);
	cout << output_1;
	gotoxy(40, 10);
	cout << output_2;
	gotoxy(40, 11);
	cout << output_3;
	gotoxy(40, 12);
	cout << output_4;
	gotoxy(40, 13);
	cout << output_5;
	gotoxy(40, 14);
	cout << output_6;
	gotoxy(40, 15);
	cout << output_7;
	gotoxy(40, 16);
	cout << output_8;
	gotoxy(40, 17);
	cout << output_9;

	string printer_output =
		output_1 + "\n" +
		output_2 + "\n" +
		output_3 + "\n" +
		output_4 + "\n" +
		output_5 + "\n" +
		output_6 + "\n" +
		output_7 + "\n" +
		output_8 + "\n" +
		output_9;

	gotoxy(40, 19);
	cout << "Output sent to the system's print handler";

	/* Printing */
	PRINTDLG printing = {};
	printing.lStructSize = sizeof(printing);
	printing.Flags = PD_RETURNDC;

	if (PrintDlg(&printing)) {

		DOCINFOA text_output = {};
		text_output.cbSize = sizeof(text_output);
		text_output.lpszDocName = "WellFitCheck Output";

		if (StartDocA(printing.hDC, &text_output) > 0) {

			if (StartPage(printing.hDC) > 0) {

				istringstream all_output(printer_output);
				string line;

				int x = 150;
				int y = 100;
				int lineHeight = 80;

				HFONT font = CreateFontA(
					50, 0, 0, 0,
					FW_NORMAL,
					FALSE, FALSE, FALSE,
					ANSI_CHARSET,
					OUT_DEFAULT_PRECIS,
					CLIP_DEFAULT_PRECIS,
					CLEARTYPE_QUALITY,
					FIXED_PITCH | FF_MODERN,
					"Consolas"
				);

				HFONT oldFont = (HFONT)SelectObject(printing.hDC, font);

				while (getline(all_output, line)) {

					TextOutA(
						printing.hDC,
						x,
						y,
						line.c_str(),
						(int)line.length()
					);

					y += lineHeight;
				}

				EndPage(printing.hDC);
			}

			EndDoc(printing.hDC);

			gotoxy(31, 19);
			cout << "Printing successful. Press Enter to return to the main menu.";
		}

		DeleteDC(printing.hDC);

		if (printing.hDevMode)
			GlobalFree(printing.hDevMode);

		if (printing.hDevNames)
			GlobalFree(printing.hDevNames);

	}
	else {
		gotoxy(31, 19);
		cout << "Printing cancelled. Press Enter to return to the main menu.";
	}

	do {
		the_end = _getch();
	} while (the_end != char(13));

	if (the_end == char(13))
	{
		// Fixes the issue when recreating a new record, the last name is automatically filled with char(13)
		cin.clear();
		cin.ignore(10000, '\n');

		clear();
		main_menu();
	}
}