#include<stdio.h>
int main(){
	int month;
	scanf("%d",&month);
	if (month==1||month==2||month==12){
		printf("Winter");
	}
	else if(month>=3&&month<=6){
		printf("Summer");
    }
    else if(month>=6&&month<=9){
		printf("Spring");
    }
    else{
    	printf("Autumn")
	}
	return 0;
}


