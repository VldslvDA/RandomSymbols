#pragma once
#include <time.h>
#include <string>
#include <Windows.h>
#include "randomsymb.h"
using namespace std;

// A function that generates random symbols, you just need to write the minimum and maximum number of characters as arguments (you can turn off the numbers or letters generation)
string randsymbs(int rsmin, int rsmax, bool generatelett, bool generatenums)
{
	int symbadded = 0, symbrand, alphabetsymbcount, symbcount = rand() % rsmax + rsmin;
	string result, alphabet;

	while (symbcount > rsmax) // fix
	{
		symbcount = rand() % rsmax + rsmin;
	}

	if (generatelett == true && generatenums == false)
	{
		alphabet = "qwertyuiopasdfghjklzxcvbnm"; alphabetsymbcount = 26;
	}
	if (generatelett == false && generatenums == true)
	{
		alphabet = "1234567890"; alphabetsymbcount = 10;
	}
	if (generatenums == false && generatelett == false)
	{
		MessageBox(NULL, L"generatenums == false && generatelett == true", L"randomsymbs.h", MB_ICONERROR); exit(1);
	}
	if (generatenums == true && generatelett == true)
	{
		alphabet = "qwertyuiopasdfghjklzxcvbnm1234567890"; alphabetsymbcount = 36;
	}

	for (symbadded = 0; symbadded < symbcount; symbadded++)
	{
		//cout << symbadded << " ";
		//cout << rsmin << " ";
		//cout << rsmax << " ";
		//cout << symbcount << endl;
		symbrand = rand() % alphabetsymbcount + 0;
		result += alphabet[symbrand];
	}
	return result;
}