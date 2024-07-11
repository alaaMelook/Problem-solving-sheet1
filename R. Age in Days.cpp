#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std ;
int main (){
    int x,y, year ,m ,d;
    cin >> x  ;
    year= x/365 ;
    cout << year <<" years" <<"\n" ;
        y=x-(year*365) ;
        m = y/30 ;
    cout << m <<" months" <<"\n";
    d =y-(m*30);
    cout << d << " days" <<"\n";
    return  0 ;
}
