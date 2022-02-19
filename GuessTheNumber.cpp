// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>
#include <ctime>


using namespace std;

int main() {
    int guess = 0;
    int number = 0;
    int tries = 0;
    srand(time(0));
    number = rand() % 100 + 1;
  
    do{
        cout << "Guess the secret number between of 1 to 100: ";
        cin >> guess;
        tries++;
        
        if(guess > number){
            cout << "The guess is high"<<endl;
        }
        else if(guess < number){
            cout << "The guess is low"<<endl;
        }
        else{
            cout << "Congrats! You found the number with "<<tries <<" tries. The number is "<<number<<endl;
        }
    }while(number != guess);

    return 0;
}
