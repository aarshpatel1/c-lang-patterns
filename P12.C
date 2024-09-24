#include<stdio.h>
#include<conio.h>

void main(){

	int i, j, k, n=7;

	clrscr();

	for(i=n; i>0; i--){
		for(k=0; k<n-i; k++){
			printf(" ");
		}
		for(j=i; j>0; j--){
			if(i==n || i==1 || j==i || j==1){
				printf("* ");
			} else {
				printf("  ");
			}
		}
		printf("\n");
	}

	getch();

}