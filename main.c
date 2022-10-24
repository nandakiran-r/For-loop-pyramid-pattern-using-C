#include <stdio.h>
#include <stdlib.h>

int main(void){
	int i,num=0,j;
	printf("Enter a number ");
	scanf("%d", &num);
	for(i=1;i<=num;i++){
		for(j=1;j<=i;j++){
			printf("%d", j);
		}
		printf("\n");
	}

	return EXIT_SUCCESS;
}
