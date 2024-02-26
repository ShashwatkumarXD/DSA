#include <stdio.h>
#include <iostream>

using namespace std;

int fact(int n){
    if(n==0){
        return 1;
    }
    else{
        return fact(n-1)*n;
    }
}

//using loop

// int fact(int n){
//     int f=1;
//     for(int i=1;i<=n;i++)
//     f=f*i;
//     return f;
// }
int main(){
    int x=fact(5);
    cout<<x<<endl;
    return 0;
}