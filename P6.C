#include<stdio.h>
#include<conio.h>

void main(){

	int i, j, k, n=5;

	clrscr();

	for(i=n; i>0; i--){
		for(k=0; k<n-i; k++){
			printf(" ");
		}
		for(j=i; j>0; j--){
			printf("* ");
		}
		printf("\n");
	}

	getch();

}