#include<iostream>
// #include<conio.h>
using namespace std;
int main(){
    system("CLS");
    int a , b , even , odd ;
    cout <<"Enter two values for knowing which one is odd or even ";
    cin >> a >> b ;
    if(a%2==0){
        cout<<"first value"<<  a << "is even";
    }
    else{
         cout<<"first value"<< a << "is odd";
    }
    cout <<endl;

     if(b%2==0){
        cout<<"first value"<< b << "is even";
    }
    else{
         cout<<"first value"<< b << "is odd";
    }
    return 0 ; 
}