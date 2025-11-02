#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int max=0,min=9;
	while (n!=0){
		int last=n%10;
		if(last>max){
			max=last;
		}
		if(last<min){
			min=last
		}
		n/=10;
	}
	printf("%d\n",max);
	printf("%d\n",min);
	return 0;
}
