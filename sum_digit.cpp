// sum of the digits
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number: "<<endl;
    cin>>n;
    int sum=0;
    int lastDigit=0;
    while(n>0){
       lastDigit=n%10;
       sum+=lastDigit;
       n/=10;
    }
    cout<<sum;
}