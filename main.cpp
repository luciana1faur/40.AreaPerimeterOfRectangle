#include <iostream>
#include <cmath>
using namespace std;

int main() {
  double lungimea, latimea;
  double aria, perimetru;

 cout << "Print the area and perimeter of a rectangle: " << endl;
 cout << "------------------------------------" << endl;

 cout << "Introduceti lungimea dreptunghiului: ";
 cin >> lungimea;

 cout << "Introduceti latimea dreptunghiului: ";
 cin >> latimea;

 aria = lungimea * latimea;
 perimetru = 2 * lungimea + 2 * latimea;

 cout << "Aria dreptungiului este: " << aria << endl;
 cout << "Perimetrul dreptunghiului este: " << perimetru << endl;

return 0;
}