// Introductory11.cpp - displays ending balance
// Created/revised by kaelee storozuk on 9/16/24

#include <iostream>
using namespace std;

int main() {
  double beginningBalance = 0.0;
  double totalDeposits = 0.0;
  double totalWithdrawals = 0.0;
  double endBalance = 0.0;

  cout << "Beginning balance: ";
  cin >> beginningBalance;
  cout << "Total Deposits: ";
  cin >> totalDeposits;
  cout << "Total Withdrawals: ";
  cin >> totalWithdrawals;

  endBalance= beginningBalance + totalDeposits - totalWithdrawals;

  
  

  cout << "End balance: $" << endBalance << endl;
  

  return 0;
} // end of main function