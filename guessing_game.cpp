#include <iostream>
#include <random>
using namespace std;
int main(){

    // random number block
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution dist(1,30);
    // Setted number
    int number = 25;

    cout << "========[ Guessing Game ]==========" << endl;
    cout << "You have only 5 time to guess, Goodluck!" << endl;
    
    int round = 0;
    do {
        cout << "--> Guess the number between 1-30 : ";
        cin >> number;
        if (number > dist(gen)){
            cout << "The number is too high, Lower please!" << endl;
        } else if(number == dist(gen)){
            cout << "Congratulation! you geuss the correct number" << endl;
        } else {
            cout << "The number is too low, Higher please!" << endl;
        }
        round++;
    } while (round < 5);
        cout << "5 times already! You lost" << endl;
return 0;
}