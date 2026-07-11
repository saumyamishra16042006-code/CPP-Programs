#include<iostream>
using namespace std;
int main(){
   int n;
   cout<<"enter n:";
   cin>>n;
  int rev=0;
  for(int i=1;n!=0;i++){
     int ld=n%10;
     n=n/10;
     rev=(rev*10)+ld;
  }
  cout<<rev<<endl;
   
    
   return 0;
}
