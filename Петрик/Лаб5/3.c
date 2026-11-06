#include <stdio.h>
int main(){

int a;
int b;
int c;

scanf("%d", &a);
scanf("%d", &b);
scanf("%d", &c);

switch (a){
case 1:{
printf("Сто");
break;
}
case 2:{
printf("Двісті");
break;
}
case 3:{
printf("Триста");
break;
}
case 4:{
printf("Чотириста");
break;
}
case 5:{
printf("П'ятсот");
break;
}
case 6:{
printf("Шістсот");
break;
}
case 7:{
printf("Сімсот");
break;
}
case 8:{
printf("Вісімсот");
break;
}
case 9:{
printf("Дев'ятсот");
break;
}
default:{
printf(" ");
break;
}
}

switch (b){
case 1:{

switch (c){
case 0:{
printf ("Десять\n");
break;
}
case 1:{
printf("Одинадцять\n");
break;
}
case 2:{
printf("Дванадцять\n");
break;
}
case 3:{
printf("Тринадцять\n");
break;
}
case 4:{
printf("Чотирнадцять\n");
break;
}
case 5:{
printf("П'ятнадцять\n");
break;
}
case 6:{
printf("Шістнадцять\n");
break;
}
case 7:{
printf("Сімнадцять\n");
break;
}
case 8:{
printf("Вісімнадцять\n");
break;
}
case 9:{
printf("Дев'ятнадцять\n");
break;
}
default:{
printf(" ");
break;
}


break;
}
case 2:{
printf("Двадцять");
break;
}
case 3:{
printf("Тридцять");
break;
}
case 4:{
printf("Сорок");
break;
}
case 5:{
printf("П'ятдесят");
break;
}
case 6:{
printf("Шістдесят");
break;
}
case 7:{
printf("Сімдесят");
break;
}
case 8:{
printf("Вісімдесят");
break;
}
case 9:{
printf("Дев'яносто");
break;
}
default:{
printf(" ");
break;
}
}
}
switch (c){
case 1:{
printf("один\n");
break;
}
case 2:{
printf("Два\n");
break;
}
case 3:{
printf("Три\n");
break;
}
case 4:{
printf("Чотири\n");
break;
}
case 5:{
printf("П'ять\n");
break;
}
case 6:{
printf("Шість\n");
break;
}
case 7:{
printf("Сім\n");
break;
}
case 8:{
printf("Вісім\n");
break;
}
case 9:{
printf("Дев'ять\n");
break;
}
default:{
printf(" ");
break;
}
}
return 0;
} 
