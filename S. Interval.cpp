#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std ;
int main (){
    double x;
    cin >> x ;
    if ( x >= 0.0 && x <= 25.0 ){
        cout << "Interval [0,25]" ;
    }
    else if ( x > 25.0 && x <= 50.0){
        cout <<"Interval (25,50]" ;
    }
    else if ( x > 50.0 && x <= 75.0) {
        cout << "Interval (50,75]" ;
    }
    else if (x > 75 && x <= 100) {
        cout << "Interval (75,100]" ;
    }
    else {
        cout << "Out of Intervals" ;
    }


        return 0 ;
}
