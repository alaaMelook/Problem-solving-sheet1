#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std ;
int main (){
    double n ;
    int x ;
    cin >> n ;
    x=n ;    // 543
    if (x == n){
        cout << "int " <<x ;
    }else {
        cout <<"float " <<x <<" "<< n-x ;
    }


        return 0 ;
}
