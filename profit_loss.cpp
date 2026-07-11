#include<iostream>
using namespace std;
int main(){
   int cp;
   cout<<"enter cp:";
   cin>>cp;
   int sp;
   cout<<"enter sp:";
   cin>>sp;
    int p=sp-cp;
   int l=cp-sp;
   if(sp>cp){
    cout<<"profit"<<endl;
     cout<<p<<endl;
   }else if(sp<cp){
   cout<<"loss"<<endl;
   cout<<l<<endl;
   }else{
      cout<<"no profit , no loss"<<endl;
   }
   return 0;
}
