#include <stdio.h>
#include <string.h>
#include "hiragana.h"
#include <time.h>
#include <stdlib.h>
#include "rusca.h"
// kendime not: boşluk ile switch ifadelerini değiştir
int main() {
    unsigned int cevap = 0;
    puts("\n*************************************************************");
    puts("Spica Suzuki tarafindan gelistirilen Sanki 2.0'a hosgeldiniz!");
    puts("************************************************************* \n");
    int x;
    printf("Lütfen mod seçiniz: \n 1-Hiragana\t 2-Kiril \n");
    scanf("%d", &x);
    if (x == 1) {
        do {
            srand(time(0));
            int random = (rand() % 41) + 1;
            switch (random) {
                case 1 :
                    hiragana1();
                    if (cevap >=0){
                        cevap++;
                    }
                    break;
                case 2 :
                    hiragana2();
                    if (cevap >=0)
                    {cevap++;}
                    break;
                case 3 :
                    hiragana3();
                    if (cevap >=0)
                    {cevap++;}
                    break;
                case 4 :
                    hiragana4();
                    if (cevap >=0)
                    {cevap++;}
                    break;
                case 5 :
                    hiragana5();
                    if (cevap >=0)
                    {cevap++;}
                    break;
                case 6 :
                    hiragana6();
                    if (cevap >=0)
                    {cevap++;}
                    break;
                case 7 :
                    hiragana7();
                    if (cevap >=0)
                    {cevap++;}
                    break;
                case 8 :
                    hiragana8();
                    if (cevap >=0)
                    {cevap++;}
                    break;
                case 9 :
                    hiragana9();
                    if (cevap >=0)
                    {cevap++;}
                    break;
                case 10 :
                    hiragana10();
                    if (cevap >=0)
                    {cevap++;}
                    break;
                case 11 :
                    hiragana11();
                    if (cevap >=0)
                    {cevap++;}
                    break;
                case 12 :
                    hiragana12();
                    if (cevap >=0)
                    {cevap++;}
                    break;
                case 13 :
                    hiragana13();
                    if (cevap >=0)
                    {cevap++;}
                    break;
                case 14 :
                    hiragana14();
                    if (cevap >=0)
                    {cevap++;}
                    break;
                case 15 :
                    hiragana15();
                    if (cevap >=0)
                    {cevap++;}
                    break;
                case 16 :
                    hiragana16();
                    if (cevap >=0)
                    {cevap++;}
                    break;
                case 17 :
                    hiragana17();
                    if (cevap >=0)
                    {cevap++;}
                    break;
                case 18 :
                    hiragana18();
                    if (cevap >=0)
                    {cevap++;}
                    break;
                case 19 :
                    hiragana19();
                    if (cevap >=0)
                    {cevap++;}
                    break;
                case 20 :
                    hiragana20();
                    if (cevap >=0)
                    {cevap++;}
                    break;
                case 21 :
                    hiragana21();
                    if (cevap >=0)
                    {cevap++;}
                    break;
                case 22 :
                    hiragana22();
                    if (cevap >=0)
                    {cevap++;}
                    break;
                case 23 :
                    hiragana23();
                    if (cevap >=0)
                    {cevap++;}
                    break;
                case 24 :
                    hiragana24();
                    if (cevap >=0)
                    {cevap++;}
                    break;
                case 25 :
                    hiragana25();
                    if (cevap >=0)
                    {cevap++;}
                    break;
                case 26 :
                    hiragana26();
                    if (cevap >=0)
                    {cevap++;}
                    break;
                case 27 :
                    hiragana27();
                    if (cevap >=0)
                    {cevap++;}
                    break;
                case 28 :
                    hiragana28();
                    if (cevap >=0)
                    {cevap++;}
                    break;
                case 29 :
                    hiragana29();
                    if (cevap >=0)
                    {cevap++;}
                    break;
                case 30 :
                    hiragana30();
                    if (cevap >=0)
                    {cevap++;}
                    break;
                case 31 :
                    hiragana31();
                    if (cevap >=0)
                    {cevap++;}
                    break;
                case 32 :
                    hiragana32();
                    if (cevap >=0)
                    {cevap++;}
                    break;
                case 33 :
                    hiragana33();
                    if (cevap >=0)
                    {cevap++;}
                    break;
                case 34 :
                    hiragana34();
                    if (cevap >=0)
                    {cevap++;}
                    break;
                case 35 :
                    hiragana35();
                    if (cevap >=0)
                    {cevap++;}
                    break;
                case 36 :
                    hiragana36();
                    if (cevap >=0)
                    {cevap++;}
                    break;
                case 37 :
                    hiragana37();
                    if (cevap >=0)
                    {cevap++;}
                    break;
                case 38 :
                    hiragana38();
                    if (cevap >=0)
                    {cevap++;}
                    break;
                case 39 :
                    hiragana39();
                    if (cevap >=0)
                    {cevap++;}
                    break;
                case 40 :
                    hiragana40();
                    if (cevap >=0)
                    {cevap++;}
                    break;
                case 41 :
                    hiragana41();
                    if (cevap >=0)
                    {cevap++;}
                    break;}
            }
        while (cevap != 4294967294);
    }
    else if (x == 2) {
        do {
            srand(time(0));
            int random = (rand() % 33) + 1;
            switch (random) {
                case 1 :
                    rus1();
                    if (cevap >=0)
                    {cevap++;}
                    break;
                case 2 :
                    rus2();
                    if (cevap >=0)
                    {cevap++;}
                    break;
                case 3 :
                    rus3();
                    if (cevap >=0)
                    {cevap++;}
                    break;
                case 4 :
                    rus4();
                    if (cevap >=0)
                    {cevap++;}
                    break;
                case 5 :
                    rus5();
                    if (cevap >=0)
                    {cevap++;}
                    break;
                case 6 :
                    rus6();
                    if (cevap >=0)
                    {cevap++;}
                    break;
                case 7 :
                    rus7();
                    if (cevap >=0)
                    {cevap++;}
                    break;
                case 8 :
                    rus8();
                    if (cevap >=0)
                    {cevap++;}
                    break;
                case 9 :
                    rus9();
                    if (cevap >=0)
                    {cevap++;}
                    break;
                case 10 :
                    rus10();
                    if (cevap >=0)
                    {cevap++;}
                    break;
                case 11 :
                    rus11();
                    if (cevap >=0)
                    {cevap++;}
                    break;
                case 12 :
                    rus12();
                    if (cevap >=0)
                    {cevap++;}
                    break;
                case 13 :
                    rus13();
                    if (cevap >=0)
                    {cevap++;}
                    break;
                case 14 :
                    rus14();
                    if (cevap >=0)
                    {cevap++;}
                    break;
                case 15 :
                    rus15();
                    if (cevap >=0)
                    {cevap++;}
                    break;
                case 16 :
                    rus16();
                    if (cevap >=0)
                    {cevap++;}
                    break;
                case 17 :
                    rus17();
                    if (cevap >=0)
                    {cevap++;}
                    break;
                case 18 :
                    rus18();
                    if (cevap >=0)
                    {cevap++;}
                    break;
                case 19 :
                    rus19();
                    if (cevap >=0)
                    {cevap++;}
                    break;
                case 20 :
                    rus20();
                    if (cevap >=0)
                    {cevap++;}
                    break;
                case 21 :
                    rus21();
                    if (cevap >=0)
                    {cevap++;}
                    break;
                case 22 :
                    rus22();
                    if (cevap >=0)
                    {cevap++;}
                    break;
                case 23 :
                    rus23();
                    if (cevap >=0)
                    {cevap++;}
                    break;
                case 24 :
                    rus24();
                    if (cevap >=0)
                    {cevap++;}
                    break;
                case 25 :
                    rus25();
                    if (cevap >=0)
                    {cevap++;}
                    break;
                case 26 :
                    rus26();
                    if (cevap >=0)
                    {cevap++;}
                    break;
                case 27 :
                    rus27();
                    if (cevap >=0)
                    {cevap++;}
                    break;
                case 28 :
                    rus28();
                    if (cevap >=0)
                    {cevap++;}
                    break;
                case 29 :
                    rus29();
                    if (cevap >=0)
                    {cevap++;}
                    break;
                case 30 :
                    rus30();
                    if (cevap >=0)
                    {cevap++;}
                    break;
                case 31 :
                    rus31();
                    if (cevap >=0)
                    {cevap++;}
                    break;
                case 32 :
                    rus32();
                    if (cevap >=0)
                    {cevap++;}
                    break;
                case 33 :
                    rus33();
                    if (cevap >=0)
                    {cevap++;}
                    break;
            }
        }

        while (cevap != 4294967292);

    }
else {
    puts("çıkış");
    }
return 0;
}
