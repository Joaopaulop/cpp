#include <iostream>
using namespace std;

int main(){

    int number;

    cout << "enter a number: ";
    cin >> number;

    if ( number % 2 == 0){
        cout << "Numero par." << endl;
    } else {
        cout << "Numero impar." << endl;
    }

    return 0;
}