#include <iostream>
using namespace std;

int main(){

    int mes;
    cout << "entre um mes: ";
    cin >> mes;

    int numeroDias;

    switch(mes){
        case 2:
            numeroDias = 28;
            break;
        case 3: case 1: case 5: case 7: case 8: case 10: case 12:
            numeroDias = 31;
            break;
    }

    cout << numeroDias << "dias" << endl;

    return 0;
}