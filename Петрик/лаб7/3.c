#include <stdio.h>
double N=9;
double A=17;
double f(double x){
return N*x+A;
}
int main(){
int x=0;
double a =-100, b=100;
double y=0.001;
double c=0;
if(f(a)*f(b)>=0){
printf("Розв'язку немає\n");
return 1;
}
while ((b-a)>=y){
c=(a+b)/2.0;
if(f(a)*f(c)<0){
b=c;
}
else{
a=c;
}
printf("Розв'язок рівняння%g*x+(%g)=0 є %g\n",N,A,c);
}
return 0;
}