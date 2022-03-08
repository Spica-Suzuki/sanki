#include <stdio.h>
#include <string.h>
#include <time.h>

void soru1() {

 char *cevap = "apple";
 char girdi[26];
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

 char *cevap = "banana";
 char girdi[26];
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

 char *cevap = "orange";
 char girdi[26];
    printf("Portakalın ingilizcesi nedir?: ");
    scanf("%s", girdi);
    char ctrl = strcmp(girdi, cevap);

    printf("Verilen yanıt %s.\n", girdi);
        if (ctrl == 0 ){
        printf("Doğru cevap \n");
    }
    else { printf("Yanlış cevap, doğru cevap %s olacaktı \n", cevap); }
    
}
