#include <stdio.h>
int main(){
int i=0;
int s=0;
do{

s=s+i;
i++;
if (i==12||i==33) continue;
}
while(i<100);
printf("%d",s);
}