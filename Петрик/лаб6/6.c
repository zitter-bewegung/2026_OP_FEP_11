#include <stdio.h>
#include <string.h>
int main(){
int i =0;
int d=0;
int s=0;
int sp=0;
char str[80];
scanf("%[^\n]",str);
printf("%s\n",str);
for (i; i<strlen(str); ++i){
if (str[i] =='a' ||str[i] =='e'||str[i] =='i'||str[i] =='o'||str[i] =='u'||str[i] =='y'){
s++;
}
else if (str[i]==32){
++sp;
}
else{
d++;
}
}
printf("Голосних %d\n приголосних %d\n",s,d);
}