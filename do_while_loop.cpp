#include<iostream>
using namespace std;
int main(){
   int i=11;// will print 11 because it prints first then checks conditions
  do{
        cout<<i<<" ";
        i++;
       
    } while(i<=10);
    return 0;
}