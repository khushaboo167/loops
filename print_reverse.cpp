// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter the number: "<<endl;
//     cin>>n;
//     int lastDigit=0;
//     int reverse=0;
//     while(n>0){
//         reverse=reverse*10;
//         lastDigit=n%10;
//         reverse=reverse+lastDigit;
//         n=n/10;
//     }
//     cout<<reverse;

// }



// print the sum of the series: 1-2+3-4+5-6... up to n;
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number: "<<endl;
    cin>>n;
    int sum=0;
    for(int i=1;i<=n;i++){
        if(i%2!=0){
            sum=sum+i;
        }
        else{
            sum=sum-i;
        }
    }
        cout<<sum;
}

// if n is odd for ex: 7
// sum=-n/2+n

// if n is even
// sum=-n/2