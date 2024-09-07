#include<iostream>
using namespace std;
int main (){
    system("CLS");
    int n ;
cout << "enter number ";
cin>>n;

for(int i = 1;i<=n;i++){
    char ch = 'a';
    for(int j = 0;j<=n;j++){
        ch+=1;
        cout<<ch;
    }
    cout<<endl;
}
return 0 ;
}