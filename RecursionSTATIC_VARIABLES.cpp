#include <iostream>
#include <stdio.h>
using namespace std;

// int fun(int n){
//     if(n>0){
//         return fun(n-1)+n;
//     }
//     return 0;
// }
// int main(){
//     int x=5;
//     int a=fun(x);
//     cout<< a;

//     return 0;
// } 

// OUTPUT = 15.
// IF WE USE STATIC VARIABLE THEN 

int fun(int n){
    static int i=5;
    if(n>0){
        return fun(n-1)+i;
    }
    return 0;
}
int main(){
    int x=5;
    int a=fun(x);
    cout<<a;
    return 0;
}