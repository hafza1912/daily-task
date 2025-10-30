#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int a;
	a=n%10;
	n=n/10;
	printf("%d\n",a);
	printf("%d",n);
}
