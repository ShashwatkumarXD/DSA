//using <stdlib.h Libraries and using heap memory and accessing elements of array from heap memory 

#include <stdio.h>
#include <iostream>
#include <stdlib.h>
using namespace std;
int main(){
    int A[5]={2,4,6,8,1};
    int *p;
    p=new int[5];
    // p=(int *)malloc(5*sizeof(int));  //use C language
    p[0]=1;
    p[1]=2;
    p[2]=3;
    p[3]=4;
    p[4]=5;

    for(int i=0;i<5;i++){
        cout<<A[i]<<endl;

        // cout<<p[i]<<endl;
    }
    cout<<'\n';
    for(int i=0;i<5;i++){
        cout<<p[i]<<endl;
    }
    return 0;

}