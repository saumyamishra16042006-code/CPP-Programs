#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"enter first number:";
    cin>>x;
    char op;
    cout<<"enter operator :";
    cin>>op;
    int y;
     cout<<"enter second number:";
     cin>>y;
     if(op=='+')cout<<"result is :"<<x+y<<"\n";               
     if(op=='-')cout<<"result is :"<<x-y<<"\n";
     if(op=='*')cout<<"result is :"<<x*y<<"\n";
     if(op=='/')cout<<"result is :"<<x/y<<"\n";
     
     return 0;

}