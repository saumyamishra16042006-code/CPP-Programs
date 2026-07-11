#include<iostream>
using namespace std;
int main(){
    
    for(int i=1;i<=100;i++){
        if(i%2==0)continue;//skips the numbers in the condition and prints rest
        cout<<i<<" ";
       
    }
    return 0;
}