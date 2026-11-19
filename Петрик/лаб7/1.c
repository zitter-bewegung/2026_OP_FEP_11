#include <stdio.h>
int myFunction(int n) {
	int i = 2;
	if (n==2){
		printf("Просте\n");
	}
	int a[n];
	do{
		if (n==2)continue;
		if(n%i==0){
			printf("Складене\n");
			break;
		}	
		else{
			printf("Просте\n");
			break;
		}
	}
	while(i<n);
	}
int main() {
	int n=0;
	printf("Введіть число:");
	scanf("%d",&n);
	myFunction(n);
	return 0;
}
