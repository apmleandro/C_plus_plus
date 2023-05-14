#include <iostream>
using namespace std;
int main() {
  double earth_weight;
  cout << "Please enter your weight: ";
  cin >> earth_weight;
  double mars_weight =(earth_weight/9.81) * 3.711;
  cout << "Your weight in Mars would be "<< mars_weight << endl;
}
