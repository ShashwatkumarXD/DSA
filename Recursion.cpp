#include <iostream>
#include <stdio.h>
using namespace std;
void func1(int n){
    if(n>0){
        func1(n-1);
        cout<<n<<endl;
    }
}
int main(){
    int x=4;
    func1(x);
}