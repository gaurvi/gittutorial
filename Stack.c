#include<stdio.h>
#define MAXSIZE 5
struct stack{
int top;
int elements[MAXSIZE];
};
typedef struct stack Stack;
Stack myStack;
int pop(void);
void push(int);
void display(void);
int main(int argc,char *argv[]){
    myStack.top = -1;
    int choice,value;


while(1)
    printf("/n 1.push");
printf("/n 2.pop");
printf("/n 3.display");
printf("/n 4.exit");
printf("enter your choice");
scanf("%d",&choice);
switch(choice){
case1:
   {
    printf("enter value");
    scanf("%d",&value);
    push(value);
    break;}
case 2:
    if(myStack.top>-1)
    {
    printf("enter value to be poped");
    int pop();
    return 0;
    }

    else
            return -1;

case 3:{
    printf("display the value");
    break;
}
case 4:{
    printf("EXIT");
    return 0;}

}
}







