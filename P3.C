#include<stdio.h>
#include<conio.h>

void main(){

	int i, j, k, n=5;

	clrscr();

	for(i=0; i<n; i++){
		for(k=n; k>i; k--){
			printf(" ");
		}
		for(j=0; j<=i; j++){
			printf("* ");
		}
		printf("\n");
	}

	getch();

}