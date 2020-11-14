#include <iostream>
using namespace std;

int main(){

    int number = -1;

    do{
        cout << "enter a number or -1 to finish: ";
        cin >> number;
    } while(number != -1);

    return 0;
}