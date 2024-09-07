#include<iostream>
using namespace std;
int main ()
{
    int sum=0, diff=0;
    for(int  i =1 ; i<=10; i++){
        if(i%2==0){
            sum+=i;
            
        }
        else {
                diff+=i;
            }
    }
    cout<<sum<<endl;
    cout<<diff<<endl;
}