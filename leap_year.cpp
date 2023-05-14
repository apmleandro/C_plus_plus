#include <iostream>
using namespace std;
int main() {
  int leap_year;
  cout << "Please enter the leap_year: ";
  cin >> leap_year;

  if (leap_year >= 1000 && leap_year <= 9999){
      if (leap_year % 4 ==0 ){
        if (leap_year % 100 ==0 && leap_year% 400!=0){
          cout << "The year "<< leap_year << " does not falls on a leap."<<endl; 
        }
        else {
          cout << "The year "<< leap_year << " falls on a leap."<<endl; 
        }
      }
      else {
        cout << "The year "<< leap_year << " does not falls on a leap."<<endl;
      }
  
  }
else{
  cout << "The year "<< leap_year << " is invalid and has more or less than 4 digits."<<endl;
}
