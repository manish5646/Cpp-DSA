#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

     cout<<"value of n is :" << n <<endl;

    //if a is positive
    if(n>0) {
        cout<<"A is positive" << endl;
    }
    else{
        cout<<"A is negative" << endl;
    }
   int a,b;
   cout<<"Enter the value of a" <<endl;
   cin>>a;
   cout<<"Enter the value of b" <<endl;
   cin>>b;

   if(a>b) {
        cout<<"A is greater" <<endl;  
   }
   if(b>a){
       cout<< "A is greater" <<endl;
   }
}



