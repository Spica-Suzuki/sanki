#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include "rusca.h"
#include "hiragana.h"
#include "renk.h"

#define PROGRAM_NAME "sanki"
#define AUTHORS proper_name ("Spica 'Ceren' Suzuki")

int main() {
    printf("%s······························································\n",YESIL);
    printf("%sSpica Suzuki tarafından geliştirilen Sanki 1.6'ya hoşgeldiniz!\n",MAVI);
    printf("%s······························································\n\n%s",YESIL, NORMAL);

    int x;
while(1){
    printf("Başlamak için lütfen bir mod seçiniz:  \n\n%s0-Sankiden çık\t 1-Hiragana\t 2-Kiril%s \n\nSeç: ",SARI, NORMAL);
    scanf(" %d", &x);

    if (x == 1) {

            hiragana();
        }

    else if (x == 2) {
        rus();
        }


 //   else if (x == 5) {

   //     TERMINATE();
    }
//      else{}

    return 0;
}