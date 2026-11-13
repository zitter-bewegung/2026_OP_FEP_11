 #include <stdio.h>
int sum(int num){
int sum1=0;
if (num>100){
return 0;
}
sum1=num+sum(num+1);
return sum1;
}
int main(){
int num=0;
printf("enter your number");
scanf("%d", &num);
int sum1=sum(num);
printf("your value - %d",sum1);
return 0;
}