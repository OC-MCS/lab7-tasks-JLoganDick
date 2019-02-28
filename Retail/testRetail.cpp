#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include "RetailItem.h"
using namespace std;
// code to test your RetailItem class goes here

bool parseInt(string sval, int& val);
bool parseDouble(string sval, double& val);
void loadItems(vector<RetailItem>& Items);

int main()
{
	vector<RetailItem> Stock;


	return 0;
}

void loadItems(vector<RetailItem>& Items)
{
	string itemNumStr, desc, unitsStr, priceStr;
	int itemNum = 0, units = 0;
	double price = 0;

	ifstream data;
	data.open("Book1.csv");
	while (getline(data, itemNumStr, ','))
	{
		getline(data, desc, ',');
		getline(data, unitsStr, ',');
		
			data >> priceStr;
		data.ignore(80, '\n');

		parseInt(unitsStr, units);
		parseDouble(priceStr, price);

		RetailItem item(desc, units, price);
		Items.push_back(item);
	}
	data.close();
}bool parseInt(string sval, int& val)
{
	int num;
	bool success = true;
	try
	{
		num = stoi(sval);   // or use stof for string-to-float
		val = num;
	}
	catch (const std::exception&)
	{
		success = false;
	}
	return success;
}

bool parseDouble(string sval, double& val)
{
	double num;
	bool success = true;
	try
	{
		num = stod(sval);   // or use stof for string-to-float
		val = num;
	}
	catch (const std::exception&)
	{
		success = false;
	}
	return success;
}