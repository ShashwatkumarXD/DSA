//Using recursion printing Taylor Series 1+ x/1 + x^2/2! + x^3/3! + x^4/4!............

#include <stdio.h>
#include <iostream>

using namespace std;

double e(int x,int n){
    static double p=1, f=1;
    double r;
    if(n==0){
        return 1;
    }
    else{
        r=e(x,n-1);
        p=p*x;
        f=f*n;
        return r+p/f;
    }
}
int main(){
    double x=e(3,10);
    cout<<x<<endl;
    // printf("%lf \n",e(4,10));

    return 0;
    
}

