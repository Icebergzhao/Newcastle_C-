// ConsoleApplication6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

void function() {
	int a, b;
	cin >> a >> b;
	cout << a*b;
};

double divi (double x, double y) {
	return x / y;
}
int main()
{
	/*Exercise1*/
	/*function();
	system("pause");
	return 0;*/
	/*Exercise 2*/
	/*double c, d;
	cout << "Please type 2 numbers" << endl;
	cin >> c >> d;
	cout << c << "/" << d <<"="<< divi(c, d) << endl;
	system("pause");
	return 0;*/

	/*exercise 3*/
	/*double a, b;
	char c;
	cout << "please type 2 numbers and a  mathematical operator " << endl;
	cin >> a >> c >> b;
	switch (c) {
	case '+':cout << a << "+" << b << "=" << a + b; break;
	case '-':cout << a << "-" << b << "=" << a - b; break;
	case '*':cout << a << "*" << b << "=" << a * b; break;
	case '/':cout << a << "/" << b << "=" << a / b; break;
	}
	system("pause");
    return 0;*/
}

