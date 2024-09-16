//Lab4-4.cpp - displays the volume of a cylinder
//Created/revised by kaelee storozuk on 9/16/24

#include <iostream>
using namespace std; 


int main ()
{

double Height   = 0.0;
double Radius   = 0.0;
double Volume   = 0.0;
const double PI = 3.14;
 cout << "Height: ";
 cin >> Height; 
 cout << "Radius: "; 
 cin >> Radius;

Volume = PI * Radius * Radius * Height;
cout << "Volume: " << Volume << endl;

return 0;
  
}// end of main function
