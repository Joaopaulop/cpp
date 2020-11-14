#include <iostream>
using namespace std;

int main(){
    double raio;
    const double pi = 3.1415;

    cout << "qual o valor do raio?";
    cin >> raio;

    double area = raio * raio * pi;

    cout << "area eh" << area;

    return 0;
}