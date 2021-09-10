#include <iostream>
#include <string>
using namespace std;

string randsymbs(int scmin, int scmax)
{
	srand(time(0)); // seed

	int symbcount, symbadded = 0, symbrand;
	string result, alphabet = "qwertyuiopasdfghjklzxcvbnm123456789";
	symbcount = rand() % scmax + scmin;

	for (symbadded; symbadded < symbcount; symbadded++)
	{
		symbrand = rand() % 35 + 1;
		result += alphabet[symbrand];
	}

	return result;
}

int main()
{
	cout << "\n " << randsymbs(1, 20) << endl;
}