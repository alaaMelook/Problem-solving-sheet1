#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std ;
int main (){
    int a, b ;
    char s ;
  //  bool flag ;
    cin >> a >> s >> b ;
    if (s =='>' && a> b){
       cout << "Right" ;
    }else if (s =='<' && a<b){
        cout <<"Right";
    }else if (s == '=' && a==b){
        cout <<"Right";
    }else {
        cout <<"Wrong" ;
    }


        return 0 ;
}
