#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL,"Turkish");

/*    int i = 0;

    while (i<10){

        printf("%d.D�ng� �al��t�...\n",i+1);
        i++;
    }

*/

    int sayi,sonuc = 1;

    printf("L�tfen fakt�r�yelini hesaplamak istedi�iniz bir tamsay� giriniz...");
    scanf("%d",&sayi);

    while(sayi>=0) {
        if (sayi == 0){
                sonuc == 1; }
        else {
            sonuc = sayi * sonuc;
        }
        sayi--;
    }
    printf("Sonuc: %d",sonuc);
    return 0;
}
