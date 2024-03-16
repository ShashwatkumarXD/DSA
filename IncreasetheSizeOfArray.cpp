#include <iostream>
using namespace std;
int main(){
    int *p,*q;
    p=new int[5];
    p[0]=1;p[1]=2;p[2]=3;p[3]=4;p[4]=5;
    q=new int [10];
    for(int i=0;i<5;i++){
        q[i]=p[i];
    }
    free(p);
    p=q;
    q=NULL;
    for(int i=0;i<5;i++){
        cout<<"ARRAY: "<<p[i]<<endl;
    }
    return 0;
}