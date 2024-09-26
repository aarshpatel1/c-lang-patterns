#include<stdio.h>
#include<conio.h>

void main(){

	int i, j, k, n, c;

	clrscr();

	printf("Enter the number of rows: ");
	scanf("%d", &n);

	for(i=0; i<n; i++){
		for(k=n; k>i; k--){
			printf("  ");
		}
		c=1;
		for(j=0; j<=i; j++){
			// printf("* ");
			printf("%4d", c);
			c = c * (i - j) / (j + 1);
		}
		printf("\n");
	}

	getch();
}