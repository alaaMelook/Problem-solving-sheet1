#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std ;
int main (){
    int a ,b  ;
  //  double r ;
    char s ;
    cin >> a >>s >>b ;
    if (s =='+'){
        cout << a +b ;
    }else if (s == '-'){
        cout << a-b ;
    }else if (s == '*'){
        cout << a*b ;
    }else if (s == '/'){
        cout << a/b ;
    }

    return  0 ;
}
