#include <stdio.h> 
int main(){
int x;
int y;
printf("Прогноз погоди на місяць з допомогою оператора ? і двох введених з клавіатури чисел\n");
printf("X=");
scanf("%d",&x);
printf("Y=");
scanf("%d",&y);
x>y? printf("Цього місяця буде тепло, бо X>Y\n"):printf("Цього місяця буде зимно, бо X<Y");
}