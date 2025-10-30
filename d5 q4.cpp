#include<stdio.h>
int main(){
	int p;
	int r;
	int t;
	scanf("%d\n",&p);
	scanf("%d\n",&r);
	scanf("%d",&t);
	float simple_interest;
	simple_interest=(p*r*t)/100;
	printf("%f",simple_interest);
	return 0;
}
