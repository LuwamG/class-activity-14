// ConsoleApplication5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib>
#include <ctime>
#include<iomanip>
using namespace std;
int main()
{
	srand(time(0));
	int unknown;
	unknown = rand();
	cout << "Enter a random number: " <<endl;
	int number = 0;
	
	while (number!=unknown) {
		cin >> number;
		if (number < unknown) {
			cout << "Your guess is smaller." << endl;
		}
		else if (number > unknown) {
			cout << "Your guess is larger"<<endl;
		}
		else {
			cout << "You guessed correctly";
		}
	}
	
	
	return 0;
}

