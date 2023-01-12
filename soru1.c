#include <stdio.h>
#include <stdlib.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int c[100],i,s=0;
	char a[200],b;
	clrscr();
	printf("Cumleyi giriniz:");
	gets(a);
	printf("Harfi giriniz:");
	scanf("%s",&b);
	printf("\n");
	for(i=0;i<a[200];i++){
		if(a[i]==b){
			s++;
			c[s-1]=i+1;
		}
	}
	printf("Belirtilen harften %d tane vardýr.",s);
	for(i=0;i<s;i++){
		printf("%d\t",c[i]);
	}

return 0;
}
