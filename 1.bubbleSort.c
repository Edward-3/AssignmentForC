//
// Created by HP on 10-Jan-23.
//
#include "stdio.h"

void bubbleSort(int data[],int stack){
    for (int i = 0; i < stack - 1; ++i) {
        for (int j = 0; j < stack - i - 1; ++j) {
            if(data[j]>data[j+1]){
                int temp=data[j];
                data[j]=data[j+1];
                data[j+1]=temp;
            }
        }
    }
}

int main(){

    int data[]={6,31,23,4,92,9,29,5,2,20};

    int stack=sizeof (data)/sizeof (data[0]);

    bubbleSort(data,stack);

    for (int i = 0; i < stack; ++i) {
        printf(" %d :",data[i]);
    }

    return 0;
}