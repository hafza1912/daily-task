#include<stdio.h>
int main(){
	int mark;
	scanf("%d",&mark);
	if(mark>=90){
		printf("A");
	}
	else if(mark>=70&&mark<=90){
		printf("B");
	}
	else if(mark>=50&&mark<=70){
		printf("C");
	}
	else{
		printf("Fail");
	}
	return 0;
}
