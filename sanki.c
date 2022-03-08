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

srand(time(0));
int random = (rand() % 3) + 1;



 if (random == 1){
soru1();
}

else if (random == 2){
    soru2();}

else{soru3();}

    
 

return 0;
}