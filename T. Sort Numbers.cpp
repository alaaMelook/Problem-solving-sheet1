#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std ;
int main (){
    int a,b,c ,l,m,s;
    cin >> a >> b >> c ;
    if (a >= b && a >=c && b >= c ) {
        l = a;
        m = b;
        s = c;
    }
    else if (a >= b && a >=c && c >= b ){
        l =a ;
        m =c ;
        s =b ;
    }
    else if (b >= c && b >= a && c>= a){
        l=b ;
        m=c ;
        s =a ;
    }
    else if (b >= c && b >= a && a>= c){
        l=b ;
        m=a ;
        s =c ;
    }
    else if (c >= a && c >= b && a >= b){
        l = c ;
        m = a ;
        s = b ;
    }
    else if (c >= a && c >= b && b >= a){
        l = c ;
        m = b ;
        s = a ;
    }
    cout << s << "\n" << m <<"\n" << l <<"\n" ;
    cout <<"" <<"\n";
    cout << a << "\n" << b <<"\n" << c <<"\n" ;


        return 0 ;
}
