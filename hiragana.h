#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>


char girdi[4];

void hiragana1() {

     char *cevap = "a";

    printf("Bu hangi harftir あ: ");
    scanf("%s", girdi);
     
    char ctrl = strcmp(girdi, cevap);
    
    printf("Verilen yanıt %s.\t", girdi);
    (ctrl == 0 ) ? printf("Doğru cevap \n") : printf("Yanlış cevap, doğru cevap %s olacaktı \n ", cevap); 
 }

void hiragana2() {

     char *cevap = "i";
 
    printf("Bu hangi harftir い: ");
    scanf("%s", girdi);
     
    char ctrl = strcmp(girdi, cevap);
    
    printf("Verilen yanıt %s.\t", girdi);
    (ctrl == 0 ) ? printf("Doğru cevap \n") : printf("Yanlış cevap, doğru cevap %s olacaktı \n ", cevap); 
 }

void hiragana3() {
     char *cevap = "u";
    printf("Bu hangi harftir: う ");
    scanf("%s", girdi);
     
    char ctrl = strcmp(girdi, cevap);
    
    printf("Verilen yanıt %s.\t", girdi);
    (ctrl == 0 ) ? printf("Doğru cevap \n") : printf("Yanlış cevap, doğru cevap %s olacaktı \n ", cevap); 
 }

void hiragana4() {

     char *cevap = "e";
 
    printf("Bu hangi harftir え: ");
    scanf("%s", girdi);
     
    char ctrl = strcmp(girdi, cevap);
    
    printf("Verilen yanıt %s.\t", girdi);
    (ctrl == 0 ) ? printf("Doğru cevap \n") : printf("Yanlış cevap, doğru cevap %s olacaktı \n ", cevap); 
 }

void hiragana5() {

     char *cevap = "o";
 
    printf("Bu hangi harftir お: ");
    scanf("%s", girdi);
     
    char ctrl = strcmp(girdi, cevap);
    
    printf("Verilen yanıt %s.\t", girdi);
    (ctrl == 0 ) ? printf("Doğru cevap \n") : printf("Yanlış cevap, doğru cevap %s olacaktı \n ", cevap); 
 }

void hiragana6() {

     char *cevap = "ka";
 
    printf("Bu hangi harftir か: ");
    scanf("%s", girdi);
     
    char ctrl = strcmp(girdi, cevap);
    
    printf("Verilen yanıt %s.\t", girdi);
    (ctrl == 0 ) ? printf("Doğru cevap \n") : printf("Yanlış cevap, doğru cevap %s olacaktı \n ", cevap); 
 }

void hiragana7() {

     char *cevap = "ki";
 
    printf("Bu hangi harftir き: ");
    scanf("%s", girdi);
     
    char ctrl = strcmp(girdi, cevap);
    
    printf("Verilen yanıt %s.\t", girdi);
    (ctrl == 0 ) ? printf("Doğru cevap \n") : printf("Yanlış cevap, doğru cevap %s olacaktı \n ", cevap); 
 }

void hiragana8() {

     char *cevap = "ku";
 
    printf("Bu hangi harftir く: ");
    scanf("%s", girdi);
     
    char ctrl = strcmp(girdi, cevap);
    
    printf("Verilen yanıt %s.\t", girdi);
    (ctrl == 0 ) ? printf("Doğru cevap \n") : printf("Yanlış cevap, doğru cevap %s olacaktı \n ", cevap); 
 }

void hiragana9() {

     char *cevap = "ke";
 
    printf("Bu hangi harftir け: ");
    scanf("%s", girdi);
     
    char ctrl = strcmp(girdi, cevap);
    
    printf("Verilen yanıt %s.\t", girdi);
    (ctrl == 0 ) ? printf("Doğru cevap \n") : printf("Yanlış cevap, doğru cevap %s olacaktı \n ", cevap); 
 }

void hiragana10() {

     char *cevap = "ko";
 
    printf("Bu hangi harftir こ: ");
     scanf("%s", girdi);
     
    char ctrl = strcmp(girdi, cevap);
    
    printf("Verilen yanıt %s.\t", girdi);
    (ctrl == 0 ) ? printf("Doğru cevap \n") : printf("Yanlış cevap, doğru cevap %s olacaktı \n ", cevap); 
 }

void hiragana11() {

     char *cevap = "sa";
 
    printf("Bu hangi harftir さ: ");
    scanf("%s", girdi);
     
    char ctrl = strcmp(girdi, cevap);
    
    printf("Verilen yanıt %s.\t", girdi);
    (ctrl == 0 ) ? printf("Doğru cevap \n") : printf("Yanlış cevap, doğru cevap %s olacaktı \n ", cevap); 
 }

void hiragana12() {

     char *cevap = "shi";
 
    printf("Bu hangi harftir し: ");
    scanf("%s", girdi);
     
    char ctrl = strcmp(girdi, cevap);
    
    printf("Verilen yanıt %s.\t", girdi);
    (ctrl == 0 ) ? printf("Doğru cevap \n") : printf("Yanlış cevap, doğru cevap %s olacaktı \n ", cevap); 
 }

void hiragana13() {

     char *cevap = "su";
 
    printf("Bu hangi harftir す: ");
    scanf("%s", girdi);
     
    char ctrl = strcmp(girdi, cevap);
    
    printf("Verilen yanıt %s.\t", girdi);
    (ctrl == 0 ) ? printf("Doğru cevap \n") : printf("Yanlış cevap, doğru cevap %s olacaktı \n ", cevap); 
 }

void hiragana14() {

     char *cevap = "se";
 
    printf("Bu hangi harftir せ: ");
    scanf("%s", girdi);
     
    char ctrl = strcmp(girdi, cevap);
    
    printf("Verilen yanıt %s.\t", girdi);
    (ctrl == 0 ) ? printf("Doğru cevap \n") : printf("Yanlış cevap, doğru cevap %s olacaktı \n ", cevap); 
 }

void hiragana15() {

     char *cevap = "so";
 
    printf("Bu hangi harftir そ: ");
    scanf("%s", girdi);
     
    char ctrl = strcmp(girdi, cevap);
    
    printf("Verilen yanıt %s.\t", girdi);
    (ctrl == 0 ) ? printf("Doğru cevap \n") : printf("Yanlış cevap, doğru cevap %s olacaktı \n ", cevap); 
 }

void hiragana16() {

     char *cevap = "ta";
 
    printf("Bu hangi harftir た: ");
    scanf("%s", girdi);
     
    char ctrl = strcmp(girdi, cevap);
    
    printf("Verilen yanıt %s.\t", girdi);
    (ctrl == 0 ) ? printf("Doğru cevap \n") : printf("Yanlış cevap, doğru cevap %s olacaktı \n ", cevap); 
 }

void hiragana17() {

     char *cevap = "chi";
 
    printf("Bu hangi harftir ち: ");
    scanf("%s", girdi);
     
    char ctrl = strcmp(girdi, cevap);
    
    printf("Verilen yanıt %s.\t", girdi);
    (ctrl == 0 ) ? printf("Doğru cevap \n") : printf("Yanlış cevap, doğru cevap %s olacaktı \n ", cevap); 
 }

void hiragana18() {

     char *cevap = "tsu";
 
    printf("Bu hangi harftir つ: ");
    scanf("%s", girdi);
     
    char ctrl = strcmp(girdi, cevap);
    
    printf("Verilen yanıt %s.\t", girdi);
    (ctrl == 0 ) ? printf("Doğru cevap \n") : printf("Yanlış cevap, doğru cevap %s olacaktı \n ", cevap); 
 }

void hiragana19() {

     char *cevap = "te";
 
    printf("Bu hangi harftir て: ");
    scanf("%s", girdi);
     
    char ctrl = strcmp(girdi, cevap);
    
    printf("Verilen yanıt %s.\t", girdi);
    (ctrl == 0 ) ? printf("Doğru cevap \n") : printf("Yanlış cevap, doğru cevap %s olacaktı \n ", cevap); 
 }

void hiragana20() {

     char *cevap = "to";
 
    printf("Bu hangi harftir と: ");
    scanf("%s", girdi);
     
    char ctrl = strcmp(girdi, cevap);
    
    printf("Verilen yanıt %s.\t", girdi);
    (ctrl == 0 ) ? printf("Doğru cevap \n") : printf("Yanlış cevap, doğru cevap %s olacaktı \n ", cevap); 
 }

void hiragana21() {

     char *cevap = "ha";
 
    printf("Bu hangi harftir は: ");
    scanf("%s", girdi);
     
    char ctrl = strcmp(girdi, cevap);
    
    printf("Verilen yanıt %s.\t", girdi);
    (ctrl == 0 ) ? printf("Doğru cevap \n") : printf("Yanlış cevap, doğru cevap %s olacaktı \n ", cevap); 
 }

void hiragana22() {

     char *cevap = "hi";
 
    printf("Bu hangi harftir ひ: ");
    scanf("%s", girdi);
     
    char ctrl = strcmp(girdi, cevap);
    
    printf("Verilen yanıt %s.\t", girdi);
    (ctrl == 0 ) ? printf("Doğru cevap \n") : printf("Yanlış cevap, doğru cevap %s olacaktı \n ", cevap); 
 }

void hiragana23() {

     char *cevap = "fu";
 
    printf("Bu hangi harftir ふ: ");
    scanf("%s", girdi);
     
    char ctrl = strcmp(girdi, cevap);
    
    printf("Verilen yanıt %s.\t", girdi);
    (ctrl == 0 ) ? printf("Doğru cevap \n") : printf("Yanlış cevap, doğru cevap %s olacaktı \n ", cevap); 
 }

void hiragana24() {

     char *cevap = "he";
 
    printf("Bu hangi harftir へ: ");
    scanf("%s", girdi);
     
    char ctrl = strcmp(girdi, cevap);
    
    printf("Verilen yanıt %s.\t", girdi);
    (ctrl == 0 ) ? printf("Doğru cevap \n") : printf("Yanlış cevap, doğru cevap %s olacaktı \n ", cevap); 
 }

void hiragana25() {

     char *cevap = "ho";
 
    printf("Bu hangi harftir ほ: ");
    scanf("%s", girdi);
     
    char ctrl = strcmp(girdi, cevap);
    
    printf("Verilen yanıt %s.\t", girdi);
    (ctrl == 0 ) ? printf("Doğru cevap \n") : printf("Yanlış cevap, doğru cevap %s olacaktı \n ", cevap); 
 }

void hiragana26() {

     char *cevap = "ma";
 
    printf("Bu hangi harftir ま: ");
    scanf("%s", girdi);
     
    char ctrl = strcmp(girdi, cevap);
    
    printf("Verilen yanıt %s.\t", girdi);
    (ctrl == 0 ) ? printf("Doğru cevap \n") : printf("Yanlış cevap, doğru cevap %s olacaktı \n ", cevap); 
 }

void hiragana27() {

     char *cevap = "mi";
 
    printf("Bu hangi harftir み: ");
    scanf("%s", girdi);
     
    char ctrl = strcmp(girdi, cevap);
    
    printf("Verilen yanıt %s.\t", girdi);
    (ctrl == 0 ) ? printf("Doğru cevap \n") : printf("Yanlış cevap, doğru cevap %s olacaktı \n ", cevap); 
 }

void hiragana28() {

     char *cevap = "mu";
 
    printf("Bu hangi harftir む: ");
    scanf("%s", girdi);
     
    char ctrl = strcmp(girdi, cevap);
    
    printf("Verilen yanıt %s.\t", girdi);
    (ctrl == 0 ) ? printf("Doğru cevap \n") : printf("Yanlış cevap, doğru cevap %s olacaktı \n ", cevap); 
 }

void hiragana29() {

     char *cevap = "me";
 
    printf("Bu hangi harftir め: ");
    scanf("%s", girdi);
     
    char ctrl = strcmp(girdi, cevap);
    
    printf("Verilen yanıt %s.\t", girdi);
    (ctrl == 0 ) ? printf("Doğru cevap \n") : printf("Yanlış cevap, doğru cevap %s olacaktı \n ", cevap); 
 }

void hiragana30() {

     char *cevap = "mo";
 
    printf("Bu hangi harftir も: ");
    scanf("%s", girdi);
     
    char ctrl = strcmp(girdi, cevap);
    
    printf("Verilen yanıt %s.\t", girdi);
    (ctrl == 0 ) ? printf("Doğru cevap \n") : printf("Yanlış cevap, doğru cevap %s olacaktı \n ", cevap); 
 }

void hiragana31() {

     char *cevap = "ya";
 
    printf("Bu hangi harftir や: ");
    scanf("%s", girdi);
     
    char ctrl = strcmp(girdi, cevap);
    
    printf("Verilen yanıt %s.\t", girdi);
    (ctrl == 0 ) ? printf("Doğru cevap \n") : printf("Yanlış cevap, doğru cevap %s olacaktı \n ", cevap); 
 }

void hiragana32() {

     char *cevap = "yu";
 
    printf("Bu hangi harftir ゆ: ");
    scanf("%s", girdi);
     
    char ctrl = strcmp(girdi, cevap);
    
    printf("Verilen yanıt %s.\t", girdi);
    (ctrl == 0 ) ? printf("Doğru cevap \n") : printf("Yanlış cevap, doğru cevap %s olacaktı \n ", cevap); 
 }

void hiragana33() {

     char *cevap = "yo";
 
    printf("Bu hangi harftir よ: ");
    scanf("%s", girdi);
     
    char ctrl = strcmp(girdi, cevap);
    
    printf("Verilen yanıt %s.\t", girdi);
    (ctrl == 0 ) ? printf("Doğru cevap \n") : printf("Yanlış cevap, doğru cevap %s olacaktı \n ", cevap); 
 }

void hiragana34() {

     char *cevap = "ra";
 
    printf("Bu hangi harftir ら: ");
    scanf("%s", girdi);
     
    char ctrl = strcmp(girdi, cevap);
    
    printf("Verilen yanıt %s.\t", girdi);
    (ctrl == 0 ) ? printf("Doğru cevap \n") : printf("Yanlış cevap, doğru cevap %s olacaktı \n ", cevap); 
 }

void hiragana35() {

     char *cevap = "ri";
 
    printf("Bu hangi harftir り: ");
    scanf("%s", girdi);
     
    char ctrl = strcmp(girdi, cevap);
    
    printf("Verilen yanıt %s.\t", girdi);
    (ctrl == 0 ) ? printf("Doğru cevap \n") : printf("Yanlış cevap, doğru cevap %s olacaktı \n ", cevap); 
 }

void hiragana36() {

     char *cevap = "ru";
 
    printf("Bu hangi harftir る: ");
    scanf("%s", girdi);
     
    char ctrl = strcmp(girdi, cevap);
    
    printf("Verilen yanıt %s.\t", girdi);
    (ctrl == 0 ) ? printf("Doğru cevap \n") : printf("Yanlış cevap, doğru cevap %s olacaktı \n ", cevap); 
 }

void hiragana37() {

     char *cevap = "re";
 
    printf("Bu hangi harftir れ: ");
    scanf("%s", girdi);
     
    char ctrl = strcmp(girdi, cevap);
    
    printf("Verilen yanıt %s.\t", girdi);
    (ctrl == 0 ) ? printf("Doğru cevap \n") : printf("Yanlış cevap, doğru cevap %s olacaktı \n ", cevap); 
 }

void hiragana38() {

     char *cevap = "ro";
 
    printf("Bu hangi harftir ろ: ");
    scanf("%s", girdi);
     
    char ctrl = strcmp(girdi, cevap);
    
    printf("Verilen yanıt %s.\t", girdi);
    (ctrl == 0 ) ? printf("Doğru cevap \n") : printf("Yanlış cevap, doğru cevap %s olacaktı \n ", cevap); 
 }

void hiragana39() {

     char *cevap = "wa";
 
    printf("Bu hangi harftir わ: ");
    scanf("%s", girdi);
     
    char ctrl = strcmp(girdi, cevap);
    
    printf("Verilen yanıt %s.\t", girdi);
    (ctrl == 0 ) ? printf("Doğru cevap \n") : printf("Yanlış cevap, doğru cevap %s olacaktı \n ", cevap); 
 }

void hiragana40() {

     char *cevap = "wo";
 
    printf("Bu hangi harftir を: ");
    scanf("%s", girdi);
     
    char ctrl = strcmp(girdi, cevap);
    
    printf("Verilen yanıt %s.\t", girdi);
    (ctrl == 0 ) ? printf("Doğru cevap \n") : printf("Yanlış cevap, doğru cevap %s olacaktı \n ", cevap); 
 }

void hiragana41() {

     char *cevap = "n";
 
    printf("Bu hangi harftir ん: ");
    scanf("%s", girdi);
     
    char ctrl = strcmp(girdi, cevap);
    
    printf("Verilen yanıt %s.\t", girdi);
    (ctrl == 0 ) ? printf("Doğru cevap \n") : printf("Yanlış cevap, doğru cevap %s olacaktı \n ", cevap); 
 }
