#include "headers.h"

void login_failed()
{
	char exit_enter;

	clear();
	border();
	help(22);
	gotoxy(54, 10);
	cout << "Login failed.";
	gotoxy(35, 13);
	cout << "Because of a failed login attempt, you are evicted.";
	gotoxy(50, 15);
	cout << "Press ENTER to exit.";

	gotoxy(60, 18);
	exit_enter = _getche();
	

	if (exit_enter == char(13))
	{
		clear();
		exit(0);
	}
}