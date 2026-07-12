#include<iostream>
using namespace std;
int main(){
   int n;
   cout<<"enter n:";
   cin>>n;
  int product=1;
  for(int i=1;n!=0;i++){
     int ld=n%10;
     n=n/10;
   product*=ld;
  }
  cout<<product<<endl;
   return 0;
}
