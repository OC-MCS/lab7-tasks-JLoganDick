#include "RetailItem.h"

RetailItem::RetailItem(string desc, int inv, double cost) {
	description = desc;
	unitsOnHand = inv;
	price = cost;
}

float RetailItem::getStockValue() {
	float stockValue = static_cast<float>(unitsOnHand * price);
	return stockValue;
}

string RetailItem::getDescription() {
	return description;
}

int RetailItem::getUnitsOnHand() {
	return unitsOnHand;
}

double RetailItem::getPrice() {
	return price;
}
