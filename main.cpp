#include <iostream>
#include <string>
#include "randomsymb.h"
using namespace std;

int main()
{
	srand(time(NULL));
	cout << "\n numbers and letters:\n " << randsymbs(5, 20, true, true) << endl;
	cout << "\n numbers:\n " << randsymbs(5, 20, false, true) << endl;
	cout << "\n letters:\n " << randsymbs(5, 20, true, false) << endl;
}