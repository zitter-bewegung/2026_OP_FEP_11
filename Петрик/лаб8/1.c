#include <stdio.h>
#include <stdlib.h>

int ar(int a[])
{
    int i = 0;
    // Loop through 10 times
    for (; i < 10; i++) {
        a[i] = rand();

        printf("%d \n", a[i]);
    }

    return 0;
}
int main(){
int a[10];
ar(a);
return 0;
}