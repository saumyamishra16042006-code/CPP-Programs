#include<iostream>
using namespace std;
int main(){
   int n;
   cout<<"enter rows:";
   cin>>n;
  
   for(int i=1;i<=n;i++){
    char ch='A';
    for(int j=1;j<=i;j++){
        if(i%2!=0){
      cout<<j<<" ";
        }else{
            cout<<ch<<" ";
            ch++;
        }
   }
   cout<<endl;
   }
  return 0;
}