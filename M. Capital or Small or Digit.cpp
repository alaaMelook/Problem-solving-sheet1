#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std ;
int main (){
  char x ;
  cin >> x ;
  if (x >='0' && x <= '9'){
      cout << "IS DIGIT" ;
  }else if (x >= 'a' && x <= 'z'){
      cout << "ALPHA" <<"\n" ;
      cout <<"IS SMALL" <<"\n" ;
  }else if (x >='A' && x <= 'Z'){
      cout << "ALPHA" <<"\n" ;
      cout <<"IS CAPITAL" <<"\n" ;
  }
    return  0 ;
}
