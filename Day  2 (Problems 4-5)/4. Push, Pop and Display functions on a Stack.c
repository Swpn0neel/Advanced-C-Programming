#include <stdio.h>
#define MAX_SIZE 100
int stack[MAX_SIZE];
int top=-1;

void push(int element){
if(top==MAX_SIZE-1){printf("Stack Overflow!\n");return;}
stack[++top]=element;
printf("%d pushed to stack\n", element);
}

void pop(){
if(top==-1){printf("Stack Underflow!\n");return;}
int element=stack[top--];
printf("%d popped from stack.\n", element);
}

void display(){
if(top==-1){printf("Stack Underflow\n");return;}
printf("Elements in stack:");
for(int i=top; i>=0; i--){printf("%d ", stack[i]);}
printf("\n");
}

void main(){
int c;
printf("Enter your choice: 1 for pushing elements, 2 for poppping elements, 3 for displaying elements, and 0 to stop the program.\n");
scanf("%d", &c);
while(c!=0){
if(c==1){
int x;
printf("Enter the element you want to push: ");
scanf("%d",&x);
push(x);
}
else if(c==2){pop();}
else if(c==3){display();}
else{printf("Wrong Input\n");}
printf("Enter your choice again: ");
scanf("%d", &c);
}
}
