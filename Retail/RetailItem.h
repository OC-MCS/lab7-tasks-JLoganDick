#pragma once
 
#include<iostream>
#include <string>
using namespace std;

class RetailItem
{
private:
	string description;
	int unitsOnHand;
	double price;
public:
	RetailItem(string desc, int inv, double cost);
	string getDescription();
	int getUnitsOnHand();
	double getPrice();

	float getStockValue();
};
