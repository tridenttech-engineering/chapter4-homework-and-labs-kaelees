// Intermediate14.cpp - displays total sold and percentages of small, medium,
// large, and family sold Created/revised by <your name> on <current date>

#include <iostream>
using namespace std;

int main() {
  int smallPizzas = 0;
  int mediumPizzas = 0;
  int largePizzas = 0;
  int familyPizzas = 0;
  int totalPizzas = 0;
  double smallPizzasPercent = 0.0;
  double mediumPizzasPercent = 0.0;
  double largePizzasPercent = 0.0;
  double familyPizzasPercent = 0.0;

  cout << "Number of small pizzas sold: ";
  cin >> smallPizzas;
  cout << "Number of medium pizzas sold: ";
  cin >> mediumPizzas;
  cout << "Number of large pizzas sold: ";
  cin >> largePizzas;
  cout << "Number of family pizzas sold: ";
  cin >> familyPizzas;

  totalPizzas = smallPizzas + mediumPizzas + largePizzas + familyPizzas;
  

  cout << "Total pizzas sold: " << totalPizzas << endl;

  smallPizzasPercent = smallPizzas / totalPizzas * 100;
  mediumPizzasPercent = mediumPizzas / totalPizzas * 100;
  largePizzasPercent = largePizzas / totalPizzas * 100;
  familyPizzasPercent = familyPizzas / totalPizzas * 100;
  
  cout << "Small pizzas contribution: " << smallPizzasPercent << endl;
  cout << "Medium pizzas contribution: " << mediumPizzasPercent << endl;
  cout << "Large pizzas contribution: " << largePizzasPercent << endl;
  cout << "Family pizzas contribution: " << familyPizzasPercent << endl;
  

  return 0;
} // end of main function