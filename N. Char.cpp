#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std ;
int main (){
  char x,y ;
  cin >> x ;
  if (x >='a' && x <= 'z'){
      y=x-32;
  }else if (x >= 'A' && x <='Z' ){
      y=x+32 ;
  }
  cout << y ;
    return  0 ;
}
