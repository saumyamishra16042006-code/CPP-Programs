#include<iostream>
using namespace std;
int main(){
    
    for(int i=1;i<=20;i++){
        if(i%11==0){
            break;/* stops the loop as soon as the condition is met ,
             without caring if the loop is compete or not */
        }
        cout<<i<<" ";
       
    }
    return 0;
}