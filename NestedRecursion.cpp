// A fuction will pass parameter as recursive call. means unless the result of the parameter function call has not obtained the outer function call cannot be made.

#include <stdio.h>
#include <iostream>

using namespace std;

int fun(int n){
    if(n>100){
        return n-1;
}
else{
    return fun(fun(n+11));// USED NESTED_RECURSION HERE. 
}
}
int main(){
    int x=fun(95);
    cout<<x<<endl;
    return 0;
}