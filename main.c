#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {

	int factor,i,nmb;
	factor = 1;
	printf("Your number:");
	scanf("%d",&nmb);
	
	for(i=1;i<=nmb;i++)
	{
		factor = factor * i;
	}
	printf("Factorial: %d",factor);








	return 0;
	
}
