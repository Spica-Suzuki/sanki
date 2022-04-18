#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include "rusca.h"
#include "hiragana.h"

int main() {
    puts("\n*************************************************************");
    puts("Spica Suzuki tarafindan gelistirilen Sanki 1.4'e hosgeldiniz!");
    puts("************************************************************* \n");
    int x;
    printf("Lütfen mod seçiniz:  \n 1-Hiragana\t 2-Kiril \n");
    scanf("%d", &x);
    if (x = 1) {
        hiragana();
        }        
    
    else if (x = 2) {
        rus();
        }
           
        
    else {
        puts("çıkış");
    }
    return 0;
}
