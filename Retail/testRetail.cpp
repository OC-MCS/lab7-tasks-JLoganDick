#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <iomanip>
#include "RetailItem.h"
using namespace std;
// code to test your RetailItem class goes here

void loadItems(vector<RetailItem>& Items);

int main()
{
	vector<RetailItem> Stock;
	loadItems(Stock);

	cout << "Description \t" << "Price \t\t" << "On Hand \t" << "Value" << endl;
	cout << "-------------------------------------------------" << endl;
	for (int i = 0; i < Stock.size(); i++) {
		cout << setw(8) << left << Stock[i].getDescription() << "\t" << setw(7) << right << Stock[i].getPrice() << "\t" << setw(10) << right << Stock[i].getUnitsOnHand() << "\t" << setw(10) << right << Stock[i].getStockValue() << endl;
	}

	return 0;
}

void loadItems(vector<RetailItem>& Items)
{
	ifstream data;

	string desc;
	string unitsStr;
	string priceStr;

	
	data.open("Book1.csv");
	while (getline(data, desc, ','))
	{
		getline(data, unitsStr, ',');
		getline(data, priceStr, '\n');

		RetailItem item(desc, stoi(unitsStr), stod(priceStr));
		Items.push_back(item);
	}
	data.close();
}
