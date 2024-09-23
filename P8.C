#include<stdio.h>
#include<conio.h>

void main(){

	int i, j, k, n, top, bottom;

	clrscr();

	printf("Enter the number of rows: ");
	scanf("%d", &n);

	if(n%2==0){
		top=n/2;
		bottom=n/2;
	} else {
		top = n/2 + 1;
		bottom = n - top;
	}

	printf("Top: %d \nBottom: %d\n", top, bottom);

	for(i=0; i<top; i++){
		for(k=top; k>i+1; k--){
			printf(" ");
		}
		for(j=0; j<=i; j++){
			printf("* ");
		}
		printf("\n");
	}

	for(i=bottom; i>0; i--){
		for(k=0; k<bottom-i+1; k++){
			printf(" ");
		}
		for(j=i; j>0; j--){
			printf("* ");
		}
		printf("\n");
	}

	getch();

}