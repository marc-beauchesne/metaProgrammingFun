// metaProgrammingFun.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "standAlones\factorial.h"
#include <iostream>
using namespace std;

int main()
{
	const int valToFac = 10;
	const int facVal = factorial<valToFac>::retVal;
	cout << "Factorial of " << valToFac << " = " << facVal << endl;

	int temp;
	cin >> temp;

    return 0;
}

