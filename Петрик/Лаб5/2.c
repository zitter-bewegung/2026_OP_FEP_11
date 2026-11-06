#include <stdio.h> 
#include <math.h>
int main(){
int a;
int b;
int c;
scanf("%d", &a);
scanf("%d", &b);
scanf("%d", &c);
if (a>b+c || b>a+c || c>b+a){
printf("Трикутник не існує\n");
}
else{
if (b>a&&b>c){
a=b;
b=a;
}
if (c>a&&c>b){
a=b;
b=a;
}
if (pow(a,2)==pow(b,2)+pow(c,2)){
printf("трикутник прямокутний\n");
}
if (pow(a,2)>pow(b,2)+pow(c,2)){
printf("трикутник тупокутний\n");
}
if (pow(a,2)<pow(b,2)+pow(c,2)){
printf("трикутник гострокутний\n");
}

if (a==b&&b==c){
printf("Трикутник рівносторонній\n");
}
else if (a==b||b==c||a==c){
printf("Трикутник рівнобедрений\n");
}
else{
printf("Трикутник різносторонній\n");
}
}
return 0;
}