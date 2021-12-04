#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define size 10

char *arr;
int top=-1;

int isFull(){
    if(top==size-1)
        return 1;
    else
        return 0;
}

int isEmpty(){
    if(top==-1)
        return 1;
    else
        return 0;
}

void push(char n){
    if(isFull())
    printf("\nStack is full!\n");
    else{
        top=top+1;
        arr[top]=n;
    }
}
char pop(){
    if(isEmpty()){
    printf("\nStack is empty!\n");
    return -1;
    }
    else{
        char val=arr[top];
        top--;
        return val;
    }
}
int operator(char ch){
    if(ch=='+'||ch=='-'||ch=='*'||ch=='/')
    return 1;
    else
    return 0;
}
int presidence(char ch){
    if(ch=='/'||ch=='*')
    return 2;
    else if (ch=='+'||ch=='-')
    return 1;
    else
    return 0;
}
char* InfixtoPostfix(char *infix){
    int i=0,j=0;
    int len=strlen(infix);
    char *postfix=(char*)malloc(len*sizeof(char));
    while(infix[i]!='\0')
    {
        if(operator(infix[i])==0){
            postfix[j]=infix[i];
            j++;
            i++;
        }
        else{
            if(presidence(infix[i])>presidence(arr[top])){
                push(infix[i]);
                i++;
            }
            else{
                postfix[j]=pop();
                j++;
            }
        }
    }
    while (!isEmpty())
    {
        postfix[j]=pop();
        j++;
    }
    postfix[j]='\0';
    return postfix;
}

int main()
{
    char infix[100];
    printf("Enter the expression: ");
    scanf("%s",infix);
    
    arr=(char*)malloc(size*sizeof(char));
    printf("postfix is %s", InfixtoPostfix(infix));
    free(arr);

    return 0;
}