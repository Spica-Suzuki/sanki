#include <stdio.h>
#include <string.h>
#include "hiragana.h"
#include <time.h>
#include <stdlib.h>
#include "rusca.h"
int main() {
    puts("\n*************************************************************");
    puts("Spica Suzuki tarafindan gelistirilen Sanki 1.3'a hosgeldiniz!");
    puts("************************************************************* \n");
    int x;
    printf("Lütfen mod seçiniz:  \n 1-Hiragana\t 2-Kiril \n");
    scanf("%d", &x);
    if (x == 1) {
        for (;;) {
            srand(time(0));
            int random = (rand() % 41) + 1;
            if (random == 1) {
                hiragana1();
            }
            else if (random == 2) hiragana2();
            else if (random == 3) hiragana3();
            else if (random == 4) hiragana4();
            else if (random == 5) hiragana5();
            else if (random == 6) hiragana6();
            else if (random == 7) hiragana7();
            else if (random == 8) hiragana8();
            else if (random == 9) hiragana9();
            else if (random == 10) hiragana10();
            else if (random == 11) hiragana11();
            else if (random == 12) hiragana12();
            else if (random == 13) hiragana13();
            else if (random == 14) hiragana14();
            else if (random == 15) hiragana15();
            else if (random == 16) hiragana16();
            else if (random == 17) hiragana17();
            else if (random == 18) hiragana18();
            else if (random == 19) hiragana19();
            else if (random == 20) hiragana20();
            else if (random == 21) hiragana21();
            else if (random == 22) hiragana22();
            else if (random == 23) hiragana23();
            else if (random == 24) hiragana24();
            else if (random == 25) hiragana25();
            else if (random == 26) hiragana26();
            else if (random == 27) hiragana27();
            else if (random == 28) hiragana28();
            else if (random == 29) hiragana29();
            else if (random == 30) hiragana30();
            else if (random == 31) hiragana31();
            else if (random == 32) hiragana32();
            else if (random == 33) hiragana33();
            else if (random == 34) hiragana34();
            else if (random == 35) hiragana35();
            else if (random == 36) hiragana36();
            else if (random == 37) hiragana37();
            else if (random == 38) hiragana38();
            else if (random == 39) hiragana39();
            else if (random == 40) hiragana40();
            else if (random == 41) hiragana41();
        }          
    } else if (x == 2) {
        for (;;) {
            srand(time(0));
            int random = (rand() % 33) + 1;
            if (random == 1) {
                rus1();
            }
            else if (random == 2) rus2();
            else if (random == 3) rus3();
            else if (random == 4) rus4();
            else if (random == 5) rus5();
            else if (random == 6) rus6();
            else if (random == 7) rus7();
            else if (random == 8) rus8();
            else if (random == 9) rus9();
            else if (random == 10) rus10();
            else if (random == 11) rus11();
            else if (random == 12) rus12();
            else if (random == 13) rus13();
            else if (random == 14) rus14();
            else if (random == 15) rus15();
            else if (random == 16) rus16();
            else if (random == 17) rus17();
            else if (random == 18) rus18();
            else if (random == 19) rus19();
            else if (random == 20) rus20();
            else if (random == 21) rus21();
            else if (random == 22) rus22();
            else if (random == 23) rus23();
            else if (random == 24) rus24();
            else if (random == 25) rus25();
            else if (random == 26) rus26();
            else if (random == 27) rus27();
            else if (random == 28) rus28();
            else if (random == 29) rus29();
            else if (random == 30) rus30();
            else if (random == 31) rus31();
            else if (random == 32) rus32();
            else if (random == 33) rus33();
        }
    } else {
        puts("çıkış");
    }
    return 0;
}
