#include <stdio.h>
void bsort(int arr[], int n) {
    for (int i=0; i<n-1; i++) {
        for (int j=0; j<n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
void main(){
    int x, y;
    printf("Enter the lengths of the first array: ");
    scanf("%d", &x);
    int a[x];
    printf("Enter the elements:\n");
    for(int i=0; i<x; i++) {scanf("%d", &a[i]);}
    printf("Enter the lengths of the second array: ");
    scanf("%d", &y);
    int b[y];
    printf("Enter the elements:\n");
    for(int i=0; i<y; i++) {scanf("%d", &b[i]);}
    printf("Sorting the given two arrays...\n");
    bsort(a,x); bsort(b,y);
    int c[x+y];
    printf("Merging the two arrays...\n");
    for(int i=0; i<x; i++) {c[i]=a[i];}
    for(int i=0; i<y; i++) {c[x+i]=b[i];}
    printf("Merged and Sorted array is: ");
    bsort(c,x+y);
    for(int i=0; i<(x+y); i++) {printf("%d ",c[i]);}
    printf("\n");
}