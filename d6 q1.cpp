#include<stdio.h>
int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	if(a>b){
		printf("%d is max",a);
		printf("%d is min",b);
	}
	else{
		printf("%d is max",b);
		printf("%d is min",a);
	}
}
