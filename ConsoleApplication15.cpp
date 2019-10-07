// ConsoleApplication15.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

bool lower(int x, int y) {
	return (x < y);
}
struct node {
	int value;
	struct node* left;
	struct node* right;
};

struct node* root = NULL;

void insert_integer(struct node** tree, int value);
void print_tree(struct node* tree);
void terminate_tree(struct node* tree);

int main() {
	/*int x = 10;
	int y = 25;
	int z = x + y;

	[]() {cout << "Hello World (1)" << endl; };
	[]() {cout << "Hello World (2)" << endl; }();
	cout << []() {cout << "Hello World (3)" << endl; return 1; } << endl;
	[]() {cout << "Hello World (4)" << endl; return 2; }();
	cout << []() {cout << "Hello World (5)" << endl; return 3; } << endl;
	cout << []() {cout << "Hello World (6)" << endl; return 4; }() << endl;

	cout << "Sum of x+y = " << [=]() {cout << "Working on it! "; return x + y; }() << endl;

	auto myL = [](int a, int b) { return lower(a, b); };
	auto myLA = [=](int a, int b) { return (myL(a, b) ? 'T' : 'F'); };

	cout << myL(x, y) << endl;

	if (myLA(x, y) == 'T')
		cout << "True! " << x << " is smaller than " << y << endl;
	else
		cout << "False! " << x << " is not smaller than " << y << endl;
	return 0;*/

	/*int nights = 1001;
	int * pt = new int;
	*pt = 1001;

	cout << "nights value = ";
	cout << nights << ": location " << &nights << endl;
	cout << "int ";
	cout << "value = " << *pt << ": location= " << pt << endl;
	double *pd = new double;
	*pd = 10000001.0;
	cout << "double ";
	cout << "value = " << *pd << ": location= " << pd << endl;
	cout << "location of pointer pd: " << &pd << endl;
	cout << "size of pt = " << sizeof(pt);
	cout << ": size of *pt= " << sizeof(*pt) << endl;
	cout << "size of pd = " << sizeof(pd);
	cout << ": size of *pd = " << sizeof(*pd) << endl;
	cin.get();
	return 0;*/

	/*int a;
	int* b;
	a = 100;
	b = new int;
	cout << "The pointer b points to the memory address " << b << " located on the heap" << endl;
	cout << "The value in memory location b is " << *b << endl;

	*b = a;
	cout << "The value of stack variable a is " << a << endl;
	cout << "The 'heap' memory pointed to by b coutains " << *b << endl;

	delete b;
	b = NULL;
	cin.get();
	return 0;*/

	/*double wages[3] = { 10000.0,20000.0,30000.0 };
	short stacks[3] = { 3,2,1 };
	double * pw = wages;
	short * ps = &stacks[0];
	cout << "pw = " << pw << ", *pw =" << *pw << endl;
	pw = pw + 1;
	cout << "add 1 to the pw pointer: " << endl;
	cout << "pw = " << pw << ", *pw = " << *pw << endl;
	cout << "ps = " << ps << ", *ps = " << *ps << endl;
	ps = ps + 1;
	cout << "add 1 to the ps pointer: " << endl;
	cout << "ps = " << ps << ", *ps = " << *ps << endl;

	cout << "access two elements with array notation " << endl;
	cout << "stacks[0] = " << stacks[0] << ", stacks[1]= " << stacks[1] << endl;
	cout << "access two elements with pointer notation " << endl;
	cout << "*stacks =" << *stacks << ", *(stacks + 1)= " << *(stacks + 1) << endl;
	cout << sizeof(wages) << " = size of wages array" << endl;
	cout << sizeof(pw) << " = size of pw pointer" << endl;
	cin.get();
	return 0;*/

}
