#include <iostream>
using namespace std;

int main(){

    int x = 7;
    int & xRef = x;

    cout << x << "\t" << &x << endl;
    cout << xRef << "\t" << &xRef << endl;

    return 0;
}