#include <iostream>
#include <stdio.h>
using namespace std;

double func(int x ,int n){
    static double s;
    if(n==0){
        return s;
    }
    else if(s=1+x*s/n){
        return func(x,n-1);
            
    }
}
int main(){
    // int a=func(1,10);
        printf("%lf,\n",func(1,10));    
        return 0;
}