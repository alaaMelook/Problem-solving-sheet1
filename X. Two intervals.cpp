#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std ;
int main (){
    long l1, r1 ,l2 ,r2 ;
    bool flag ;
    int x ,y ;
    cin >> l1 >> r1 >> l2 >> r2 ;
    if ((l2 > r1 && r2 > r1 ) || (l2 < l1 && r2 < l1)){
        cout << -1 ;
    }else {
        x=max(l1,l2);
        y=min(r1,r2);
        cout << x <<" " << y;
    }


        return 0 ;
}
