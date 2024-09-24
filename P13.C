#include<stdio.h>
#include<conio.h>

void main(){

	int i, j, k, n, top, bottom;

	clrscr();

	printf("Enter the number of rows: ");
	scanf("%d", &n);

	top = n;
	bottom = n-1;

	printf("Top: %d \nBottom: %d \n", top, bottom);

	for(i=0; i<top; i++){
		for(k=0; k<top-i-1; k++){
			printf(" ");
		}
		for(j=0; j<=i; j++){
			if(i==0 || j==0 || j==i) {
				printf("* ");
			} else {
				printf("  ");
			}
		}
		printf("\n");
	}

	for(i=bottom; i>0; i--){
		for(k=0; k<bottom-i+1; k++){
			printf(" ");
		}
		for(j=i; j>0; j--){
			if(i==1 || j==i || j==1){
				printf("* ");
			} else {
				printf("  ");
			}
		}
		printf("\n");
	}

	getch();

}