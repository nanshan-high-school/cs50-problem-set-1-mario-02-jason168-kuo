#include <iostream>
using namespace std;
//函數原型宣告
void display( int num, string stars) ;  

int main() {
    int count ; //星星的階層
    cout << "請輸入星星數量:";
    cin >> count ;
    cout << "星星數量:" << count << endl; 
    //display( count ,"*");

    for (int i = 1 ; i <= count ; i++) {
        display( count-i ," ") ;
        display( i ,"*") ;
        display( 2 ," ") ;
        display( i ,"*") ;
        cout << endl;
    }   

}


void display( int num, string stars) {
    // cout << "display()  num=" << num  << " stars=" << stars ;
    for ( int i=0; i < num; i++ ) {
        cout << stars ;

    }

}  
