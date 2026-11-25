#include <iostream>
#include <random>
using namespace std;
int main(){

    // random number block
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution dist(1,10);
    
    // Setted number
    
    int number;
    int secretNumber;
        secretNumber = dist(gen);

    cout << "=========[ Guessing Game ]==========" << endl;
    cout << "You have only 5 time to guess, Goodluck!" << endl;
    cout << "--> Guess the number between 1-10 : " << endl;
    
    int attemp = 0;

    while (attemp < 5){
        cout << "Guess #"<< attemp + 1 <<" : ";
        cin >> number;
        if (number > secretNumber){
            cout << "The number is too high, Lower please!" << endl;
        } else if(number == secretNumber){
            cout << "Congratulation! you geuss the correct number" << endl;
            break;
        } else {
            cout << "The number is too low, Higher please!" << endl;
        }
        attemp++;
    }
    if (attemp >= 5){
        cout << "Wrong guessing!" << endl;
        cout << "You hit the limit, You lost!" << endl;
        cout << "The correct one is : " << secretNumber << endl;
    }
    
        
return 0;
}