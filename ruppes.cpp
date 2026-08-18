// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std ;
int main() {
    int unit ;
    
    cout <<"rupee:";
    cin >> unit;
    if ( 0<= unit && unit <=100 ){
        cout << "5 rupee"<<endl;
    
    }
    else if(100<unit && unit<=200){
        cout << "7 rupee"<<endl;
    }


    return 0;
}