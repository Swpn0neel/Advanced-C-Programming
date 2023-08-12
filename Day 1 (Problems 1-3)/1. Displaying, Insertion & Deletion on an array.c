#include <stdio.h>
void display(int a[], int n){
    printf("The elements of your array are: ");
    for(int i=0; i<n; i++){
        printf("%d ", a[i]);
    }
    printf("\n");
}
void insert(int a[], int n){
    int x, y;
    printf("What's the element you want to insert? ");
    scanf("%d", &x);
    printf("Where to insert? Enter the position: ");
    scanf("%d", &y);
    for(int i=n; i>=y-1; i--) {a[i]= a[i-1];}
    a[y-1]= x;
    printf("Inserted %d at position %d.\nHere's the new array: ", x, y);
    for(int i=0; i<=n; i++) {printf("%d ", a[i]);}
    printf("\n");
}
void delete(int a[], int n){
    int x;
    printf("Enter the element you want to delete from the lsit: ");
    scanf("%d", &x);
    int k=0;
    for(int i=0; i<n; i++){
        if(x==a[i]){}
        else{
            a[k]= a[i];
            k++;
        }
    }
    printf("Deleted %d from the list. The new list is: ", x);
    for(int i=0; i<k; i++) {printf("%d ", a[i]);}
    printf("\n");
}
void main(){
    int n, c;
    printf("Enter the length of the array: ");
    scanf("%d", &n);
    int a[n+1];
    printf("Enter the elements of the array:\n");
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    printf("What is your choice?\n1 to display the array.\n2 to insert an element in the array.\n3 to delete an element of the array.\nEnter your choice: ");
    scanf("%d", &c);
    if(c==1){display(a,n);}
    else if(c==2){insert(a,n);}
    else if(c==3){delete(a,n);}
    else{printf("Wrong Choice!");}
}
