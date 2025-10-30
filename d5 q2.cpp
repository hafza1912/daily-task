#include<stdio.h>
int main(){
	int a,b,c,d,r,h;
	scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&r,&h);
	printf("Area of rectangle is%d",a*b);
	printf("Area of square is%d",a*a);
	printf("Area of triangle is%d",(b*h)/2);
	printf("Area of circle is%d",(22/7)*r*r);
}
