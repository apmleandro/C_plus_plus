#include <iostream>
#include <cmath>
using namespace std;
int main() {
  int a;
  int b;
  int c;
  
  cout << "Enter a: ";
  cin >> a;
  cout << "Enter b: ";
  cin >> b;
  cout << "Enter c: ";
  cin >> c;

  double root1;
  double root2;
  
  //double denominator = 2*a;
  //double raiz = b^2 - 4*a*c;

 //cout << denominator << endl;
  //cout << raiz << endl;


  root1 = (-b + sqrt(pow(b,2) - 4*a*c))/(2*a);
  root2 = (-b - sqrt(pow(b,2) - 4*a*c))/(2*a);

  cout << "Root 1 is "<<root1 << endl;
  cout << "Root 2 is "<<root2 << endl;


}
