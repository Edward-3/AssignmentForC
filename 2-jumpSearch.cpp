//
// Created by HP on 11-Jan-23.
//
#include "stdio.h"
#include "math.h"

int min(int first,int second){
    if(first<second){
        return first;
    }else{
        return second;
    }
}

int jumpSearch(int data[],int size,int key){
    int step= 5;
    int  middleStep= step-step/2;
    int previous=0;
    while(data[min(step,size)-1]<key){
        previous=step;
        middleStep+=step;
        step+=step;

        if(previous>=size){
            return -1;
        }
    }
    if(data[min(middleStep,step)-1]==key){
        middleStep-=1;
        return middleStep;
    }

    if(data[min(middleStep,step)-1]>key){
        for (int i = middleStep; i >previous -1; --i) {
            if(data[i]==key){
                return i;
            }
        }
    } else{
        for (int i = middleStep; i <step ; ++i) {
            if(data[i]==key){
                return i;
            }
        }
    }

    if(data[min(step,size)-1]==key){
        previous=step-1;
        return previous;
    }
    for (int i = previous; i < step; ++i) {
        if(data[i]==key){
            return i;
        }
    }
}

int main(){

    int data[]={1,2,3,4,5,6,7,8,9,100,101,102};

    int size=sizeof (data)/sizeof(data[0]);

    int toFind=1;

    int indexNumber=jumpSearch(data,size,toFind);

    if(data[indexNumber]==toFind){
        printf("we found data : %d at index %d",data[indexNumber],indexNumber);
    } else{
        printf("Not found\n");
    }

    return 0;
}