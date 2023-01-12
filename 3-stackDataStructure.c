//
// Created by HP on 12-Jan-23.
//
#include "stdio.h"
#include "stdlib.h"

#define MaxStack 10

struct stack{
    int data[MaxStack];
    int top;
};

typedef struct stack st;

void create_emptyStack(st *myStack){
    myStack->top=-1;
}

int isStackIsFull(st *myStack){
    if(myStack->top==MaxStack){
        printf("stack is full!\n");
        return -1;
    } else{
        return 1;
    }
}

int isStackIsEmpty(st *myStack){
    if(myStack->top==-1){
        printf("stack is empty!\n");
        return -1;
    } else{
        return 1;
    }
}

int pushStack(st *myStack,int key){
    if(isStackIsFull(myStack)){
        myStack->top++;
        myStack->data[myStack->top]=key;
    }
}

int popStack(st *myStack){
    if(isStackIsEmpty(myStack)){
        printf("stack data is : %d\n",myStack->data[myStack->top]);
        myStack->top--;
    }
}

void seekIndexAndData(st *myStack){
    if(isStackIsEmpty(myStack)){
        printf("ds have %d data and data are ",myStack->top);
        for (int i = myStack->top; i >-1; --i) {
            printf("%d:",myStack->data[i]);
        }
        printf("\n");
    } else{
        printf("data not found!\n");
    }
}

int main(){

    st *myStack= (st*)malloc(sizeof (st));

    create_emptyStack(myStack);

    pushStack(myStack,10);
    pushStack(myStack,11);
    pushStack(myStack,12);
    pushStack(myStack,13);
    pushStack(myStack,14);

    seekIndexAndData(myStack);

    popStack(myStack);
    popStack(myStack);
    popStack(myStack);
    popStack(myStack);
    popStack(myStack);




    return 0;
}