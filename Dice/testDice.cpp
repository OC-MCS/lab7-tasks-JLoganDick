#include "Die.h"
#include <iostream>
// client code to use the Die class goes here
using namespace std;

void displayPct(int a[],int dieSize);

int main()
{
	int dR6[7] = {0,0,0,0,0,0,0};
	int dR12[13] = {0,0,0,0,0,0,0,0,0,0,0,0,0};

	int value;

	Die d6(6);

	for (int i = 0; i < 1000000; i++) {
		d6.roll();
		value = d6.getValue();
		switch (value) {
			case 1: dR6[1]++;
				break;
			case 2:dR6[2]++;
				break;
			case 3:dR6[3]++;
				break;
			case 4:dR6[4]++;
				break;
			case 5:dR6[5]++;
				break;
			case 6:dR6[6]++;
				break;
		}
	}

	displayPct(dR6, 6);

	Die d12(12);

	for (int i = 0; i < 1000000; i++) {
		d12.roll();
		value = d12.getValue();
		switch (value) {
			case 1: dR12[1]++;
				break;
			case 2:dR12[2]++;
				break;
			case 3:dR12[3]++;
				break;
			case 4:dR12[4]++;
				break;
			case 5:dR12[5]++;
				break;
			case 6:dR12[6]++;
				break;
			case 7:dR12[7]++;
				break;
			case 8:dR12[8]++;
				break;
			case 9:dR12[9]++;
				break;
			case 10:dR12[10]++;
				break;
			case 11:dR12[11]++;
				break;
			case 12:dR12[12]++;
				break;
		}
	}

	displayPct(dR12, 12);


	return 0;
}

void displayPct(int a[], int dieSize) {
	int arraySize = dieSize + 1;
	int totalRolls = 0;
	float percent;

	for (int i = 1; i < arraySize; i++) {
		totalRolls = totalRolls + a[i];
	}

	cout << "Stats for " << dieSize << " sided die: " << endl;

	for (int i = 1; i < arraySize; i++) {
		percent = static_cast<float>(a[i]) / totalRolls * 100;
		cout << "Side   " << i << ":  " << percent << "% " << endl;
	}
	cout << endl;
}