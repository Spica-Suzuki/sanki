#include <stdio.h>
#include <string.h>
#include "kelimelistesi.h"
#include <time.h>
#include <stdlib.h>


int main() {

printf("*************************************************************\n");
printf("Spica Suzuki tarafindan gelistirilen Sanki 1.0'a hosgeldiniz!\n");
printf("*************************************************************\n");
printf("\n");
int cevap = 0;
do {
srand(time(0));
int random = (rand() % 3) + 1;



 if (random == 1){
soru1();
if (cevap >=0)
{cevap++;}}


else if (random == 2){
    soru2();
if (cevap >=0)
{cevap++;}}


else{soru3();
if (cevap >=0)
{cevap++;}}
}while (cevap != 3);

    
 

return 0;
}
