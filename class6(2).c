#include <stdio.h>
int main(){
	int marks;
	printf("enter student marks\n");
	scanf("%d",&marks);
	if(marks >= 90){
		printf("grade A+");
	}else if(marks >= 80){
		printf("grade A");
	}else if(marks >= 70){
		printf("grade B");
	}else if(marks >= 60){
		printf("grade C");
	}else{
		printf("fail");
	}
	
}
