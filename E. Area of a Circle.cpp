#include <iostream>
#include <iomanip>
using namespace std ;
int main (){
    cout << fixed << setprecision(9) ;
    double pi ,r , area;
    cin >>r ;
    pi = 3.141592653 ;
    area = pi*r*r ;
    cout << area  ;
    return  0 ;
}
