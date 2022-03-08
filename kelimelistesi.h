#include <stdio.h>
#include <string.h>
#include <time.h>

void soru1() {

 char cevap[20] = "apple";
 char girdi[20];
    printf("Elmanın ingilizcesi nedir?: ");
    scanf("%s", girdi);
    char ctrl = strcmp(girdi, cevap);

    printf("Verilen yanıt %s. \n", girdi);
        if (ctrl == 0 ){
        printf("Doğru cevap \n");
    }
    else { printf("Yanlış cevap \n"); }
    
}

void soru2() {

 char cevap[20] = "banana";
 char girdi[20];
    printf("Muzun ingilizcesi nedir?: ");
    scanf("%s", girdi);
    char ctrl = strcmp(girdi, cevap);

    printf("Verilen yanıt %s.\n", girdi);
        if (ctrl == 0 ){
        printf("Doğru cevap \n");
    }
    else { printf("Yanlış cevap, doğru cevap %s olacaktı \n", cevap); }
    
}


void soru3() {

 char cevap[20] = "orange";
 char girdi[20];
    printf("Portakalın ingilizcesi nedir?: ");
    scanf("%s", girdi);
    char ctrl = strcmp(girdi, cevap);

    printf("Verilen yanıt %s.\n", girdi);
        if (ctrl == 0 ){
        printf("Doğru cevap \n");
    }
    else { printf("Yanlış cevap, doğru cevap %s olacaktı \n", cevap); }
    
}