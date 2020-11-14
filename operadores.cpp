#include <iostream>
using namespace std;

int main(){
    
    int x;
    int y;

    cout << "Enter a number: ";
    cin >> x;

    cout << "Enter another number: ";
    cin >> y;

    cout << x + y << endl;
    cout << x - y << endl;
    cout << x * y << endl;
    cout << x / y << endl;
    cout << x % y << endl;
    cout << x + y * x << endl;
    cout << (x + y) * x << endl;
    
    return 0;
}