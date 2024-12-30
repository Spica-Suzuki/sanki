#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include "renk.h"

void rus() {

    char cevap [][8] = {
    "a", "b", "v", "g", "d", "ye", "yo", "j", "z", "i", "y", "k", "l", "m", "n", "o", "p", "r", "s",
    "t", "u", "f", "h", "ts", "ç", "ş", "şç", "sert", "ı", "yumuşak", "e", "yu", "ya"
    };

    char soru [][8] = {
    "A-a","Б-б","В-в","Г-г","Д-д","Е-е","Ё-ё","Ж-ж","З-з","И-и","Й-й","К-к","Л-л","М-м","Н-н","O-o",
    "П-п","P-p","C-c","Т-т","У-у","Ф-ф","X-x","Ц-ц","Ч-ч","Ш-ш","Щ-щ","ъ","ы","ь","Э-э","Ю-ю","Я-я"
    };

    char girdi[8];
        for (;;) {
        const short x = 1;
        srand(time(0));
        int y = (rand() % 33);
        char ctrl;
            printf("Bu hangi harftir %s%s%s: ", MOR, soru[y],NORMAL);
            scanf("%s", girdi);


            if                                                    (strcmp(girdi, "exit") == 0) {                           TERMINATE();
            }
            ctrl = strcmp(girdi, cevap[y]);

            printf("Verilen yanıt %s%s%s.\t",MAVI, girdi, NORMAL);
            (ctrl == 0 ) ? printf("%sDoğru cevap \n%s", YESIL, NORMAL) : printf("%sYanlış%s cevap, doğru cevap %s%s%s olacaktı \n",KIRMIZI,NORMAL, YESIL, cevap[y], NORMAL);
    }
}