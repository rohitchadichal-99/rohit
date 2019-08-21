#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define LIMIT 3

int a[LIMIT];

int top=-1;
int lim=3;
bool full(){
    if(top==lim-1)
        return true;
    else 
        return false;
}

bool empty(){
    if(top==-1)
        return true;
    else 
        return false;
}

void push(int x){
    if(full())
        printf("The stack is full.");
    else
    {
        top+=1;
        a[top]=x;
    }
}

void pop(){
    if(empty())
        printf("The stack is Empty.");
    else 
    {
    
        top=top-1;
        
    }
}

 void print(){
    printf("The stack:");
    for(int i=0; i<=top; i++)
        printf("%d ", a[i]);
    printf("\n");
}

main(){
    push(420);
    push(2121);
    push(34763);
    pop();
    print();
}
