/*
 * main.cc
 *
 *  Created on: 2018��6��28��
 *      Author: super
 */

#include <iostream>
using namespace std;

int plus_a(int a = 10, int b = 20)
{
	return a+b;
}

int main()
{
	cout << plus_a() << endl;
	return 0;
}
