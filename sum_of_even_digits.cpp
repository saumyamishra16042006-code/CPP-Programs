#include<iostream>
using namespace std;
int main(){
   int n;
   cout<<"enter n:";
   cin>>n;
  int sum=0;
  
  for(int i=1;n!=0;i++){
     int ld=n%10;
     n=n/10;
     if(ld%2==0){
    sum+=ld;
     }
  }
  cout<<sum<<endl;
   
    
   return 0;
}
