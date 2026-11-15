#include "headers.h"

void help(int help_value)
{
	// Help for login credentials creation
	if (help_value == 1)
	{
		gotoxy(31, 23);
		cout << "You will be asked to create a username and a password.";
		gotoxy(43, 24);
		cout << "Supply a username and a password.";
		gotoxy(34, 25);
		cout << "Press ENTER after you completed typing on each entry.";
		gotoxy(19, 26);
		cout << "If the login credentials are creates sucessfully, a brief confirmation will appear.";
	}

	// Help for login
	else if (help_value == 2)
	{
		gotoxy(25, 23);
		cout << "You will be asked to enter the username and password you just created.";
		gotoxy(32, 24);
		cout << "Ensure that it is exactly the same as you created them.";
		gotoxy(34, 25);
		cout << "Press ENTER after you completed typing on each entry";
		gotoxy(24, 26);
		cout << "If the login credentials are correct, a \"Logging in\" screen shall appear.";
	}

	// Help for wrong login credentials
	else if (help_value == 3)
	{
		gotoxy(39, 23);
		cout << "Oops! Your login credentials are incorrect.";
		gotoxy(12, 24);
		cout << "Ensure that the login credentials you input is exactly the same as you created them.";
		gotoxy(34, 25);
		cout << "Press ENTER after you completed typing on each entry.";
		gotoxy(24, 26);
		cout << "If the login credentials are correct, a \"Logging in\" screen shall appear.";
	}

	// Help for login screen progression
	else if (help_value == 4)
	{
		gotoxy(54, 24);
		cout << "Please wait.";
	}

	// Help for the main menu
	else if (help_value == 5)
	{
		gotoxy(41, 23);
		cout << "Welcome! You are now in the main menu.";
		gotoxy(43, 24);
		cout << "Press 1 to add a new student record.";
		gotoxy(43, 25);
		cout << "Press 2 to consult the user manual.";
		gotoxy(46, 26);
		cout << "Press 3 to exit the program.";
	}

	// Help for the exit menu
	else if (help_value == 6)
	{
		gotoxy(31, 23);
		cout << "Warning! You have previously selected to exit the program.";
		gotoxy(54, 24);
		cout << "Are you sure?";
		gotoxy(46, 25);
		cout << "Press 1 to exit the program.";
		gotoxy(43, 26);
		cout << "Press 2 to return to the main menu.";
	}

	// Help for the student name entry
	else if (help_value == 7)
	{
		gotoxy(42, 23);
		cout << "You need to enter the student's name.";
		gotoxy(18, 24);
		cout << "You will be first asked of the last name, followed by the given name and middle name.";
		gotoxy(20, 25);
		cout << "Press ENTER if you have already finished typing the entry for the specific prompt.";
		gotoxy(23, 26);
		cout << "If a field is not applicable like the middle name, press ENTER to skip them.";
	}

	// Help for the other details entry
	else if (help_value == 8)
	{
		gotoxy(39, 23);
		cout << "You need to enter the name of the professor";
		gotoxy(38, 24);
		cout << "You will be first asked of the professor name.";
		gotoxy(20, 25);
		cout << "Press ENTER if you have already finished typing the entry for the specific prompt.";
	}

	// Help for Biological Sex
	else if (help_value == 9)
	{
		gotoxy(32, 23);
		cout << "You will now be asked about the student's biological sex.";
		gotoxy(33, 24);
		cout << "Press 1 if he is a male and Press 2 if she is a female.";
		gotoxy(25, 25);
		cout << "After pressing the correct number, you will be brought to the next item.";
	}

	// Help for Temperature Menu
	else if (help_value == 10)
	{
		gotoxy(14, 23);
		cout << "You will now be asked about the unit of temperature used on getting the student's vital signs.";
		gotoxy(24, 24);
		cout << "Press 1 if the unit used is in Celsius and Press 2 if it is in Fahrenheit.";
		gotoxy(25, 25);
		cout << "After pressing the correct number, you will be brought to the next item.";
		}

	// Help for Temperature in Celsius
	else if (help_value == 11)
	{
		gotoxy(27, 23);
		cout << "You will now be asked to enter the student's temperature in Celsius.";
		gotoxy(39, 24);
		cout << "Supply the student's temperature in Celsius.";
		gotoxy(32, 25);
		cout << "After completing the entry, please press ENTER to proceed.";
		}

	// Help for Temperature in Fahrenheit
	else if (help_value == 12)
	{
		gotoxy(25, 23);
		cout << "You will now be asked to enter the student's temperature in Fahrenheit.";
		gotoxy(39, 24);
		cout << "Supply the student's temperature in Fahrenheit.";
		gotoxy(32, 25);
		cout << "After completing the entry, please press ENTER to proceed.";
		}

	// Help for Weight Menu
	else if (help_value == 13)
	{
		gotoxy(16, 23);
		cout << "You will now be asked about the unit of weight used on getting the student's vital signs.";
		gotoxy(25, 24);
		cout << "Press 1 if the unit used is in Kilograms and Press 2 if it is in Pounds.";
		gotoxy(25, 25);
		cout << "After pressing the correct number, you will be brought to the next item.";
		}

	// Help for Weight in Kilograms
	else if (help_value == 14)
	{
		gotoxy(28, 23);
		cout << "You will now be asked to enter the student's weight in Kilograms.";
		gotoxy(40, 24);
		cout << "Supply the student's weight in Kilograms.";
		gotoxy(32, 25);
		cout << "After completing the entry, please press ENTER to proceed.";
		}

	// Help for Weight in Pounds
	else if (help_value == 15)
	{
		gotoxy(30, 23);
		cout << "You will now be asked to enter the student's weight in Pounds.";
		gotoxy(42, 24);
		cout << "Supply the student's weight in Pounds.";
		gotoxy(32, 25);
		cout << "After completing the entry, please press ENTER to proceed.";
		}


	// Help for Height Menu
	else if (help_value == 16)
	{
		gotoxy(16, 23);
		cout << "You will now be asked about the unit of height used on getting the student's vital signs.";
		gotoxy(17, 24);
		cout << "Press 1 if the unit used is in Centimeters, 2 if in Meters, and 3 if in Feet and Inches.";
		gotoxy(25, 25);
		cout << "After pressing the correct number, you will be brought to the next item.";
		}

	// Help for Height in Centimeters
	else if (help_value == 17)
	{
		gotoxy(27, 23);
		cout << "You will now be asked to enter the student's height in Centimeters.";
		gotoxy(39, 24);
		cout << "Supply the student's height in Centimeters.";
		gotoxy(32, 25);
		cout << "After completing the entry, please press ENTER to proceed.";
		}

	// Help for Height in Meters
	else if (help_value == 18)
	{
		gotoxy(30, 23);
		cout << "You will now be asked to enter the student's height in Meters.";
		gotoxy(42, 24);
		cout << "Supply the student's height in Meters.";
		gotoxy(32, 25);
		cout << "After completing the entry, please press ENTER to proceed.";
		}

	// Help for Height in Feet and Inches
	else if (help_value == 19)
	{
		gotoxy(25, 23);
		cout << "You will now be asked to enter the student's height in Feet and Inches.";
		gotoxy(37, 24);
		cout << "Supply the student's height in Feet and Inches.";
		gotoxy(32, 25);
		cout << "After completing the entry, please press ENTER to proceed.";
		}

	// Help for Heart rate
	else if (help_value == 20)
	{
		gotoxy(25, 23);
		cout << "You will now be asked to enter the student's age and his/her heart rate.";
		gotoxy(46, 24);
		cout << "Supply the age and heart rate.";
		gotoxy(27, 25);
		cout << "After completing the entry, please press ENTER to proceed.";
	}

	// Help for generated report
	else if (help_value == 21)
	{
		gotoxy(34, 23);
		cout << "Here is the record of student generated by the system.";
		gotoxy(30, 24);
		cout << "You will be asked to print it using the Windows' print dialog";
		gotoxy(32, 25);
		cout << "If you would like to return to the main menu, press ENTER.";
		gotoxy(28, 26);
		cout << "If you want to exit, return to the main menu and exit from there.";
	}

	// Help for the failed exit notification
	else if (help_value == 22)
	{
		gotoxy(39, 23);
		cout << "Login failed after 3 unsucessful attempts.";
		gotoxy(35, 24);
		cout << "Due to that you will be evicted out of the program.";
		gotoxy(37, 25);
		cout << "If you wish to retry, please re-run the program.";
		gotoxy(51, 26);
		cout << "Press ENTER to exit.";
		}
}