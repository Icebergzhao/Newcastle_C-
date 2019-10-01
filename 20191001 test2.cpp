// ConsoleApplication3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	cout << "Hello" << ' ' << "World" << "\n";
	cout << "What is your name?" << "\n";
	string name;
	cin >> name;
	cout << "your name is " << name << "\n";
	system("pause");

	return 0;
}
