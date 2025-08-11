#include <stdio.h>
int main(){
	int marks;
	printf("enter student marks\n");
	scanf("%d",&marks);
	if(marks >= 90 && marks <= 100){
		printf("grade A+\n");
	}else if(marks >= 80 && marks < 90){
		printf("grade A\n");
	}else if(marks >= 70 && marks < 80){
		printf("grade B\n");
	}else if(marks >= 60 && marks < 70){
		printf("grade C\n");
	}else{
		printf("fail");
	}
	
}
