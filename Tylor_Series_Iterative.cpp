#include <iostream>
#include <stdio.h>
using namespace std;

double e(int x,int n){
    double s=1;
    double num=1;
    double den=1;

    for(int i=1;i<=n;i++){
        num*=x;
        den*=i;
        s+=num/den;
    }
    return s;

}
int main(){
    printf("%lf\n",e(1,10));    
    return 0;
}