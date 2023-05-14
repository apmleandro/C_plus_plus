#include <iostream>
using namespace std;

string pc_choices[5] = {"Rock", "Paper", "Scissors","Lizard","Spock"};
int index;
string pc_option;
string user_option;
string b;
string a;

int main(){

  int option;

  cout << "Please select your option for the game: " <<endl<<
  "1)  Rock" <<endl<<
  "2)  Paper" <<endl<<
  "3)  Scissors" <<endl<<
  "4)  Lizard" <<endl<<
  "5)  Spock"  <<endl;

  cin >> option;

  if (option == 1){
    user_option = "Rock";
  }
  else if (option == 2){
    user_option = "Paper";
  } 
  else if (option == 3){
    user_option = "Scissors";
  }
  else if (option == 4){
    user_option = "Lizard";
  }
  else if (option == 5){
    user_option = "Spock";
  }
  else{
    cout << "Invalid Option." << endl;
    user_option = "Invalid.";
  }

  srand(time(NULL));
  index = rand() % 4;
  pc_option = pc_choices[index];

  if (pc_option == user_option){
    cout << "We are even." << endl;
  }

  if (pc_option != user_option){
    if (pc_option == "Rock" || user_option == "Rock"){
        if (pc_option == "Rock"){
          a = pc_option;
          b = user_option;
        }
        else{
          b = pc_option;
          a = user_option;
        }
        if (b == "Scissors"){
          cout << "Rock Crushes Scissors." << endl;
          if (a == pc_option){
            cout << "We win" << endl;
          }
          else{
            cout << "You win" << endl;
          }
        }
        if (b == "Lizard"){
          cout << "Rock Crushes Lizard." << endl;
          if (a == pc_option){
            cout << "We win" << endl;
          }
          else{
            cout << "You win" << endl;
          }
        }
        if (b == "Paper"){
          cout << "Paper covers Rock." << endl;
          if (b == pc_option){
            cout << "We win" << endl;
          }
          else{
            cout << "You win" << endl;
          }
        }
        if (b == "Spock"){
          cout << "Spock vaporizes Rock." << endl;
          if (b == pc_option){
            cout << "We win" << endl;
          }
          else{
            cout << "You win" << endl;
          }
        }
      }


      if (pc_option == "Scissors" || user_option == "Scissors"){
        if (pc_option == "Scissors"){
          a = pc_option;
          b = user_option;
        }
        else{
          b = pc_option;
          a = user_option;
        }
        if (b == "Paper"){
          cout << "Scissors cuts Paper." << endl;
          if (a == pc_option){
            cout << "We win" << endl;
          }
          else{
            cout << "You win" << endl;
          }
        }
        if (b == "Lizard"){
          cout << "Scissors decapitates Lizard." << endl;
          if (a == pc_option){
            cout << "We win" << endl;
          }
          else{
            cout << "You win" << endl;
          }
        }
        if (b == "Spock"){
          cout << "Spock smashes Scissors." << endl;
          if (b == pc_option){
            cout << "We win" << endl;
          }
          else{
            cout << "You win" << endl;
          }
        }
      }


        if (pc_option == "Spock" || user_option == "Spock"){
        if (pc_option == "Spock"){
          a = pc_option;
          b = user_option;
        }
        else{
          b = pc_option;
          a = user_option;
        }
        if (b == "Lizard"){
          cout << "Lizard poisons Spock." << endl;
          if (b == pc_option){
            cout << "We win" << endl;
          }
          else{
            cout << "You win" << endl;
          }
        }
        if (b == "Paper"){
          cout << "Paper disproves Spock." << endl;
          if (b == pc_option){
            cout << "We win" << endl;
          }
          else{
            cout << "You win" << endl;
          }
        }
      }


        if (pc_option == "Lizard" || user_option == "Lizard"){
        if (pc_option == "Lizard"){
          a = pc_option;
          b = user_option;
        }
        else{
          b = pc_option;
          a = user_option;
        }
        if (b == "Paper"){
          cout << "Lizard eats Paper." << endl;
          if (a == pc_option){
            cout << "We win" << endl;
          }
          else{
            cout << "You win" << endl;
          }
        }
      }
  }


  cout << "My option is " << pc_option <<endl <<
  "Your option is " << user_option << endl;

  }