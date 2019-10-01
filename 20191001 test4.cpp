// ConsoleApplication5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int add(int x, int y) {
	return x + y;
}

int minus(int x, int y) {
	return x - y;
}

int main()
{
	int a, b, c, exit;
	cout << "Please type in a number" << endl;
	cin >> a;

	cout <<"Please type in another number" << endl;
	cin >> b;

	c = add(a, b);
	cout << a << '+' << b << '=' << c << endl;
	cout << a << '+' << b << '=' << add(a,b) << endl;
	cout << "enter another number to exit" << "\n";
	cin >> exit;
    return 0;
}

