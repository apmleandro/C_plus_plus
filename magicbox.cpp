#include <iostream>
#include <cstdlib>


using namespace std;

int main() {

    cout << "MAGIC 8-BALL: " << endl;

    int answer = rand() % 10;
    srand(time(NULL));

    if (answer == 0) {
        cout << "It is certain." << endl;
    }
    else if (answer == 1) {
        cout << "It is decidedly so." << endl;
    }
    else if (answer == 2) {
        cout << "Without a doubt." << endl;
    }
    else if (answer == 3) {
        cout << "Yes - definitely." << endl;
    }
    else if (answer == 4) {
        cout << "As I see it, yes." << endl;
    }
    else if (answer == 5) {
        cout << "Outlook good." << endl;
    }
    else if (answer == 6) {
        cout << "Reply hazy, try again." << endl;
    }
    else if (answer == 7) {
        cout << "Signs point to yes." << endl;
    }
    else if (answer == 8) {
        cout << "Cannot predict now." << endl;
    }
    else if (answer == 9) {
        cout << "Ask again later." << endl;
    }
    else {
        cout << "Very Doubtful" << endl;
    }



}