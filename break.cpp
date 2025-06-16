// write a program to check if number is compositte or not
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number: "<<endl;
    cin>>n;
    for(int i=2;i<n;i++){
        if(n%i==0){
           cout<<"composite number"<<endl;
        }
    //    break;
    else{
        cout<<"not composite number"<<endl;
    }
    break;
    }
    if(n==1){
        cout<<"not prime not composite<<endl";
    }
    if(n==2){
        cout<<"prime number"<<endl;
    }
}