#include "headers.h"

void login_failed();
int user_created = 1;
int attempts_left = 3;
int previous_login_attempt = 0;

void login()
{
	string created_username, created_password; /* Save as string the created user password */
	string login_username, login_password; /* Save as string the login password */
	char pass;
	int x_loading = 65; /* x-axis start of Loading x movement dots */

	border();
	help(1);

	/* Credentials Creation */
	gotoxy(56, 10);
	cout << "Welcome!";

	gotoxy(57, 12);
	cout << "SIGNUP";

	// Username Creation
	gotoxy(46, 15);
	cout << "Create a username: ";
	getline(cin, created_username);

	// Password Creation
	gotoxy(46, 16);
	cout << "Create a password: ";


	/* Password Creation Masked */
	do {
		pass = _getch();

		/* 
		Only append unless the following keys are pressed:
		1. Enter key
		2. Backspace key
		3. Esc Key
		*/
		if (pass != char(13) && pass != char(8) && pass != char(27))
		{
			created_password += pass;
			cout << "*";
		}


		/* If backspace is pressed then remove previous character */
		if (pass == char(8))
		{
			/* Prevent crashes due to deleting empty string */
			if (created_password != "")
			{
				created_password.pop_back();
				cout << "\b \b" << flush;
			}
		}

	} while (pass != char(13) || created_password == "");

	// Confirmation
	gotoxy(39, 18);
	cout << "Login credentials are sucessfully created.";

	user_created = 2;
	Sleep(600);

	clear();
	border();

	help(2);

	/* Login */
	gotoxy(56, 10);
	cout << "Welcome!";

	gotoxy(57, 12);
	cout << "LOGIN";


	do {

		if (previous_login_attempt >= 5)
		{
			login_failed();
		}

		// Enter username
		gotoxy(44, 15);
		cout << "Enter your username: ";
		getline(cin, login_username);


		// Enter password
		gotoxy(44, 16);
		cout << "Enter your password: ";

		/* Password Input Masked */
		do {
			pass = _getch();

			/* If the inputted stroke is an Enter key, then do not include it on the appending */

		/*
		Only append unless the following keys are pressed:
		1. Enter key
		2. Backspace key
		3. Esc Key
		*/
			if (pass != char(13) && pass != char(8) && pass != char(27))
			{
				login_password += pass;
				cout << "*";
			}


			/* If backspace is pressed then remove previous character */
			if (pass == char(8))
			{
				/* Prevent crashes due to deleting empty string */
				if (login_password != "")
				{
					login_password.pop_back();
					cout << "\b \b" << flush;
				}
			}
		} while (pass != char(13) || login_password == "");

		previous_login_attempt++;

		// If username or password is wrong, then reject login
		if ((created_username != login_username || created_password != login_password) && previous_login_attempt <= 5) {
			gotoxy(46, 18);
			cout << "Wrong credentials inserted.";
			gotoxy(55, 19);
			cout << "Try again.";

			clear();
			border();

			help(3);

			gotoxy(56, 10);
			cout << "Welcome!";

			gotoxy(57, 12);
			cout << "LOGIN";

			if (attempts_left > 0)
			{
				gotoxy(39, 18);
				cout << "Wrong login credentials inserted. Try again.";
				gotoxy(52, 19);
				cout << attempts_left << " attempt(s) left.";
			}

			if (attempts_left == 0)
			{
				gotoxy(39, 18);
				cout << "Wrong login credentials inserted. Try again.";
				gotoxy(33, 19);
				cout << "This is your final attempt or else you will be evicted.";
			}
			attempts_left--;
			login_password = ""; // Clear variable to not append to the previous
		}

		// If username or password is wrong, then repeat login prompt
	} while ((created_username != login_username || created_password != login_password) && previous_login_attempt <= 5);


	// If username and password is correct, allow the login
	if (created_username == login_username && created_password == login_password)
	{
		login_successful = 1;
		cout << endl;

		clear();
		border();

		help(4);

		gotoxy(55, 14);
		cout << "Logging in";

		do {
			Sleep(200);
			gotoxy(x_loading, 14);
			cout << ".";
			x_loading++;
		} while (x_loading <= 68);

		clear();
	}
}