//display this AP-1,3,5,7,9... upto n term
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter number: ";
//     cin>>n;
//     for(int i=1;i<=2*n-1;i+=2){
//             cout<<i<<endl;
//     }
// }




//display this AP-1,3,5,7,9... upto n term
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter number: ";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//             cout<<i<<endl;
//             i=i+2;
//     }
// }




//display this AP-4,7,10,13... upto n term
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     int a=4;
//     cout<<"enter number: ";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//             cout<<a<<endl;
//             a=a+3;
//     }
// }



//display this GP-1,2,4,8,16... upto n term
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter number: ";
//     cin>>n;
//     int a=1;
//     for(int i=1;i<=n;i++){
//             cout<<a<<endl;
//             a=a*2;
//     }
// }




//display this AP-100,97,94,... upto n term
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number: ";
    cin>>n;
    int a=100;
    for(int i=n;i>=1;i--){
            cout<<a<<endl;
            a=a-3;
    }
}


