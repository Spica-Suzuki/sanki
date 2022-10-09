#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

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
            printf("Bu hangi harftir %s: ", soru[y]);
            scanf("%s", girdi);

            ctrl = strcmp(girdi, cevap[y]);

            printf("Verilen yanıt %s.\t", girdi);
            (ctrl == 0 ) ? printf("Doğru cevap \n") : printf("Yanlış cevap, doğru cevap %s olacaktı \n ", cevap[y]); 
    }
}
