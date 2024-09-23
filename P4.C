#include<stdio.h>
#include<conio.h>

void main(){

	int i, j, n=5;

	clrscr();

	for(i=n; i>0; i--){
		for(j=i; j>0; j--){
			printf("*");
		}
		printf("\n");
	}

	getch();

}