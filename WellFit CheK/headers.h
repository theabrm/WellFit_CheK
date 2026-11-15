/* To avoid calling all these functions on every .cpp file, this header file will call all of them at once */
#pragma once
#include <iostream>
#include <string>
#include <windows.h>
#include <conio.h>
#include <optional>
#include "gotoxy.h"
#include "clear.h"
#include <commdlg.h>
#include <iomanip>
#include <sstream>
#include <limits>
using namespace std;

/* Defining Functions */
void startup();
void border();
void login();
void main_menu();
void add_record();
void user_manual();
void compute();
void exit_menu();
void help(int help_value);

/* To make values persist across .cpp and .h files and to avoid the error about multiple values, I used inline */
// Declarations of values that will be used across functions
inline int login_successful = 0;
inline string sex_value = "";

// Declarations of values used in computations that will cross from one function to another
inline float bmi = 0, temperature = 0, weight = 0, height = 0;
inline int heart_rate = 0;
inline string bmi_status = "";
inline string temperature_status = "";
inline string heart_rate_status = "";

