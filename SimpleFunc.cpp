// SimpleFunc.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <iostream>

using namespace std;

int func(int a, int b);

int _tmain(int argc, _TCHAR* argv[])
{
	int x = 5;
	int y = 3;

	int sum = func(x, y);

	cout << "Sum: " << sum << endl;

	getchar();
	return 0;
}

int func(int a, int b) {
	return a + b;
}