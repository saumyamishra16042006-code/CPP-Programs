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
     switch(op){
      case'+':
      cout<<"result is :"<<x+y<<endl;
      break;
      case'-':
      cout<<"result is :"<<x-y<<endl;
      break;
      case'*':
      cout<<"result is :"<<x*y<<endl;
      break;
      case'/':
      cout<<"result is :"<<x/y<<endl;
      break;
      default:
      cout<<"invalid operator"<<endl;
     
     }
     
     return 0;

}