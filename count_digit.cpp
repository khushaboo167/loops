// wap to count digits of a given numbers
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number: "<<endl;
    cin>>n;
    int count=0;
    int a=n;
    while(n!=0){
        n/=10;
        count++;
    }
    if(a==0){
        cout<<1;
    }
    else{
    cout<<count;
    }
}