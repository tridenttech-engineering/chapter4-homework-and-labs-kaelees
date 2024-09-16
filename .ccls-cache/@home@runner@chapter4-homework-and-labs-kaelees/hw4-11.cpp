// Introductory11.cpp - displays ending balance
// Created/revised by kaelee storozuk on 9/16/24

#include <iostream>
using namespace std;

int main() {
  double salePrice = 0.0;
  double taxRate = 0.0;
  double SalesTax = 0.0;
  double cost = 0.0;

  cout << "Enter the sale price: ";
  cin >> salePrice;
  cout << "Eneter the sales tax rate: ";
  cin >> taxRate;

  SalesTax= salePrice * taxRate;
  cost = salePrice + SalesTax;

  cout << "Cost: $" << cost << endl;
  

  return 0;
} // end of main function