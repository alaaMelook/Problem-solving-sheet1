#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std ;
int main (){
    int a ,b;
    cin >> a ;
    b = a/1000 ;
    if(b%2==0){
        cout << "EVEN" ;
    }else {
        cout << "ODD" ;
    }

    return  0 ;
}
