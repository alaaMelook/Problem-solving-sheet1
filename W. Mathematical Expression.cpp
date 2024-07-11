#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std ;
int main (){
    int a, b ,c ,r ;
    char s,e ;
  //  bool flag ;
    cin >> a >> s >> b >> e >> c ;
    if (s =='+' ){
      r = a+b ;
    }else if (s =='-'){
        r = a-b ;
    }else if (s == '*'){
        r = a*b ;
    }
    if (r==c){
        cout << "Yes";
    }else {
        cout << r ;
    }


        return 0 ;
}
