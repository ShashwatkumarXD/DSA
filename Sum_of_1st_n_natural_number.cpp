//METHOD 1) Sum of first n natural number using recursion 

#include <stdio.h>
#include <iostream>

using namespace std;

int sum(int n){
    if(n==0){
        return 0;
    }
    else
        return sum(n-1)+n;
}
int main(){
    int x=sum(5);
    cout<<x<< endl;

    return 0;
}

// METHOD 2) But there are also more ways.

// int sum( int n ){
//     return n*(n+1)/2;
// }
// int main (){
//     int x=sum(5);
//     cout<<x<<endl;

//     return 0;
// }



