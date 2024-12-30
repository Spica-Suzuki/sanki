#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include "renk.h"

void hiragana() {

    char cevap [][4] = {
    "a", "i", "u", "e", "o", "ka", "ki", "ku", "ke", "ko", "sa", "shi", "su", "se", "so", "ta", "chi", "tsu", "te", "to",
    "ha", "hi", "fu", "he", "ho", "ma", "mi", "mu", "me", "mo", "ya", "yu", "yo", "ra", "ri", "ru", "re", "ro", "wa", "wo", "n"
    };

    char soru [][4] = {
        "あ", "い", "う","え","お","か","き","く","け","こ","さ","し","す","せ","そ","た","ち","つ","て","と",
        "は","ひ","ふ", "へ","ほ","ま","み","む","め"," も","や","ゆ","よ","ら","り","る","れ","ろ","わ","を"," ん"
    };

    char girdi[6];

    printf("\n");
    for (;;) {
        const short x = 1;
        srand(time(0));
        int y = (rand() % 41);
        char ctrl;
            printf("Bu hangi harftir %s%s%s: ", MOR, soru[y],NORMAL);
            scanf("%s", girdi);

            if
            (strcmp(girdi, "exit") == 0) {

        TERMINATE();
            }



            ctrl = strcmp(girdi, cevap[y]);

            printf("Verilen yanıt %s%s%s.\t",MAVI, girdi, NORMAL);
            (ctrl == 0 ) ? printf("%sDoğru cevap \n%s", YESIL, NORMAL) : printf("%sYanlış%s cevap, doğru cevap %s%s%s olacaktı \n",KIRMIZI,NORMAL, YESIL, cevap[y], NORMAL);
    }

}