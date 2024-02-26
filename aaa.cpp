#include <stdio.h>
#include <iostream>

using namespace std;

double e(double x,double n){
    static double s=1;
    if(n==0){
        return s;
    s=1+x*s/n*s;
    return e(x,n-1);
    }
}
int main(){
    double z=e(1,10);
    cout<<z<<endl;
}