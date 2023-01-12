#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
{
    char cumle[100];
     
    printf("Bir cumle giriniz (max 100 karakter): ");
    gets(cumle);
    int sayac=0;
     
    for (int i = 0;i < strlen(cumle); i++) 
    {
        if(cumle[i] == 'a' || cumle[i] ==' A')
        {
            sayac++;
        }
    }   
    printf("\n\nGirilen cumlede %d adet a hafi vardir", sayac);
}
	return 0;
}
