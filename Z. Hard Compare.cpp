#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std ;
int main (){
    long long a,b,c,d ;
  long long r , l ;
    cin >> a >> b >>c >> d ;
 //  r = b* log(a);
 //  l = d*log(c );
   if (b* log(a) > d*log(c )){
       cout << "YES" ;
   }else{
       cout <<"NO" ;
   }

    return 0 ;
}
