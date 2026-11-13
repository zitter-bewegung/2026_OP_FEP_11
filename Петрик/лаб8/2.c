#include <stdio.h>
#include <stdlib.h>

int araddr(int ar[], int el){
int* pt=&ar[el];
ar[5]=45;
return *pt;
}

int ar12x12(int arr[][12],int r, int c){
int* ptr=&arr[r][c];
arr[5][7]=78;
if (r<0||r>12||c>12||c<0){
return 7;
}
return *ptr;
}

int main(){
int ar[10];
int arr[12][12];
printf ("%p\n",araddr(ar,5));

int r12x12=ar12x12(arr, 5,7);
if(r12x12 ==7){
printf("I have bad feelings about boundaries");
}
else{
printf("Result 12x12: %p\n", r12x12);
}
return 0;
}