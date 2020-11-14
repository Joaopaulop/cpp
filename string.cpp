#include <iostream>
using namespace std;

int main(){
    int x = 0;

    string titulo = "Mr. ";
    string name("Joao");
    string end(10,'!');

    cout << name.size() << endl;
    cout << name.back() << endl;
    cout << name[2] << endl;
    cout << end << endl;

    //concatenar string

    cout << titulo + name << endl;
    
    return 0;
}