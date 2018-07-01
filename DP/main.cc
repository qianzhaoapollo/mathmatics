/*
 * main.cc: coins calculate.
 *
 *  Created on: 2018Äê6ÔÂ28ÈÕ
 *      Author: super
 */

#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <math.h>
using namespace std;

#define SIZE 100
#define COIN  5

int sum[SIZE];
int coin[COIN] = {1, 2, 3, 5, 7};


void coin_number(int n){

	sum[0] = 0;

	for(int i=0; i<SIZE; i++) {
		for(int j=0; j<COIN; j++) {
			if(i - coin[j] > -1 && sum[i - coin[j]] + 1 < sum[i]) {
				sum[i] = sum[i - coin[j]] + 1;
			}
		}
	}
}

int main()
{
	memset(sum, 99900, sizeof(sum));
	coin_number(SIZE);
	for(int i=0; i<SIZE; i++) {
		cout << "sum[" << i << "]" << " = " << sum[i] << endl;
	}

	return 0;
}

/*
int coin_number(int k=0)
{
	int former_number = 9999;
	while(k < 100 && (k - coin[0] > -1 && k - coin[1] > -1 && k - coin[2] > -1)) {

		if(sum[k - coin[0]] < former_number)
			former_number = sum[k - coin[0]];
		if(sum[k - coin[1]] < former_number)
			former_number = sum[k - coin[1]];
		if(sum[k - coin[2]] < former_number)
			former_number = sum[k - coin[2]];


		if(former_number == sum[k - coin[0]])
			sum[k] = coin_number(k - coin[0]) + 1;
		if(former_number == sum[k - coin[1]])
			sum[k] = coin_number(k - coin[1]) + 1;
		if(former_number == sum[k - coin[2]])
			sum[k] = coin_number(k - coin[2]) + 1;
	}

	if(k == 0)
		return 0;
	if(k == 1)
		return 1;
	if(k == 2)
		return 2;
	if(k == 3)
		return 1;
	if(k == 4)
		return 2;
	if(k == 5)
		return 1;

	return 0;
}

int main()
{
//	int n;
	memset(sum, 0, sizeof(sum));
	sum[0] = 0; sum[1] = 1; sum[2] = 2; sum[3] = 1; sum[4] = 2; sum[5] = 1;

	int result = coin_number(10);

	cout << result;

	return 0;
}
*/



