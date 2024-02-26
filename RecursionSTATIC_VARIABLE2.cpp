#include <stdio.h>
#include <iostream>

using namespace std;

int func(int n){
    static int i=1;
    if(n>=5){
        return n;
    }
    n=n+i;
    i++;
    return func(n);
}
int main(){
    int x=func(1);
    cout<<x<<endl;
    return 0;

 }

// int func(int n){
//     int x=1,k;
//     if(n==1){
//         return x;
//     }
//     for(k=1;k<n;k++){
//         x=x+func(k)*func(n-k);
//     }
//     return x;
// }
// int main (){
//     int x=func(5);
//     cout<<x<<endl;
//     return 0;
// }


