#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int A[5],i;
	for(i=0;i<5;i=i+2)
		A[i]=1;
	for (i=1;i<5;i=i+2)
		A[i]=0;
	for(i=0;i<5;i++)
		printf("%d. indisin degeri %d'dir \n",i,A[i]);


	return 0;
}
