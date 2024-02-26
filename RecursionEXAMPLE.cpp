#include <stdio.h>
#include <iostream>

using namespace std;

int fun(int n){
    if(n>0){
        cout<<n<<endl;
        fun(n-1);
        fun(n-1);
    }
}
int main(){
    int x=fun(3);
    cout<<x<<endl;
    return 0;
}