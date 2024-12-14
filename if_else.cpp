/*#include<iostream>
using namespace std;
int main(){
   int a;
   cout<<"A is positive"<< endl;
   cin>>a;

   if(a>0) {
    cout<<"A is positive"<< endl;
   }
   else if(a>0) {
      cout<<"A is 0"<<endl;
   }
    return 0;
}
*/
#include<iostream>
using namespace std;

int main(){
  int n;
  cin >> n;

  int i = 1;
  int sum = 0;

  while(i<<n) {
     sum = sum + i;
     i = i + 1;
  }
  cout<< "value of sum is "<<sum<<endl;
}
