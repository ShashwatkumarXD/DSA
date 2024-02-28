//find the address of the element stored inside ARRAYS.  
#include <iostream>
#include <stdio.h>

int main(){
    int A[5];
    for(int i=0;i<5;i++){
        std::cout<<&A[i]<<std::endl;
        // printf("%u \n",&A[i]);
    }
    return 0;
}