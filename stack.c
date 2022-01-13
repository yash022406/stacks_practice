#include<stdio.h>
#include<stdlib.h>
struct stack{
    int top;
    int size;
    int * arr;
};
void push(struct stack * ptr){
    
    int data;
    printf("Enter the data: ");
    scanf("%d",&data);
    ptr->arr[ptr->top]=data;
}
int main(){
    struct stack * s= (struct stack *)malloc(sizeof(struct stack));
    s->size=10;
    s->top=-1;
    s->arr=(int*)malloc(s->size*sizeof(int));
    // menu program
    int n;
    while(n!=3){
        printf("1.Push Data\n2.Display\n3.Exit\n");
        scanf("%d",&n);
        if(n==1){
            push(s);
        }
    }
}