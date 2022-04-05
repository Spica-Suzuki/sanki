#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

void hiragana() {
    
    char cevap [41][4] = {
    "a", "i", "u", "e", "o", "ka", "ki", "ku", "ke", "ko", "sa", "shi", "su", "se", "so", "ta", "chi", "tsu", "te", "to",
    "ha", "hi", "fu", "he", "ho", "ma", "mi", "mu", "me", "mo", "ya", "yu", "yo", "ra", "ri", "ru", "re", "ro", "wa", "wo", "n"
};
    
    char girdi[4];

    for (;;) {
        const short y = 1;
        srand(time(0));
        int x = (rand() % 41);
        char ctrl;
        switch (x) {
            case 0 :

            printf("Bu hangi harftir あ: ");
            scanf("%s", girdi);

            ctrl = strcmp(girdi, cevap[x]);

            printf("Verilen yanıt %s.\t", girdi);
            (ctrl == 0 ) ? printf("Doğru cevap \n") : printf("Yanlış cevap, doğru cevap %s olacaktı \n ", cevap[x]); 
            break;

            case 1 :

            printf("Bu hangi harftir い: ");
            scanf("%s", girdi);

            ctrl = strcmp(girdi, cevap[x]);

            printf("Verilen yanıt %s.\t", girdi);
            (ctrl == 0 ) ? printf("Doğru cevap \n") : printf("Yanlış cevap, doğru cevap %s olacaktı \n ", cevap[x]); 
            break;
                
            case 2 :

            printf("Bu hangi harftir う: ");
            scanf("%s", girdi);

            ctrl = strcmp(girdi, cevap[x]);

            printf("Verilen yanıt %s.\t", girdi);
            (ctrl == 0 ) ? printf("Doğru cevap \n") : printf("Yanlış cevap, doğru cevap %s olacaktı \n ", cevap[x]); 
            break;
            
            case 3 :

            printf("Bu hangi harftir え: ");
            scanf("%s", girdi);

            ctrl = strcmp(girdi, cevap[x]);

            printf("Verilen yanıt %s.\t", girdi);
            (ctrl == 0 ) ? printf("Doğru cevap \n") : printf("Yanlış cevap, doğru cevap %s olacaktı \n ", cevap[x]); 
            break;
                    
            case 4 :

            printf("Bu hangi harftir お: ");
            scanf("%s", girdi);

            ctrl = strcmp(girdi, cevap[x]);

            printf("Verilen yanıt %s.\t", girdi);
            (ctrl == 0 ) ? printf("Doğru cevap \n") : printf("Yanlış cevap, doğru cevap %s olacaktı \n ", cevap[x]); 
            break;
                            
            case 5 :

            printf("Bu hangi harftir か: ");
            scanf("%s", girdi);

            ctrl = strcmp(girdi, cevap[x]);

            printf("Verilen yanıt %s.\t", girdi);
            (ctrl == 0 ) ? printf("Doğru cevap \n") : printf("Yanlış cevap, doğru cevap %s olacaktı \n ", cevap[x]); 
            break;
                            
            case 6 :

            printf("Bu hangi harftir き: ");
            scanf("%s", girdi);

            ctrl = strcmp(girdi, cevap[x]);

            printf("Verilen yanıt %s.\t", girdi);
            (ctrl == 0 ) ? printf("Doğru cevap \n") : printf("Yanlış cevap, doğru cevap %s olacaktı \n ", cevap[x]); 
            break;
                
                            
            case 7 :

            printf("Bu hangi harftir く: ");
            scanf("%s", girdi);

            ctrl = strcmp(girdi, cevap[x]);

            printf("Verilen yanıt %s.\t", girdi);
            (ctrl == 0 ) ? printf("Doğru cevap \n") : printf("Yanlış cevap, doğru cevap %s olacaktı \n ", cevap[x]); 
            break;
                
                            
            case 8 :

            printf("Bu hangi harftir け: ");
            scanf("%s", girdi);

            ctrl = strcmp(girdi, cevap[x]);

            printf("Verilen yanıt %s.\t", girdi);
            (ctrl == 0 ) ? printf("Doğru cevap \n") : printf("Yanlış cevap, doğru cevap %s olacaktı \n ", cevap[x]); 
            break;
                
                            
            case 9 :

            printf("Bu hangi harftir こ: ");
            scanf("%s", girdi);

            ctrl = strcmp(girdi, cevap[x]);

            printf("Verilen yanıt %s.\t", girdi);
            (ctrl == 0 ) ? printf("Doğru cevap \n") : printf("Yanlış cevap, doğru cevap %s olacaktı \n ", cevap[x]); 
            break;
                
                            
            case 10 :

            printf("Bu hangi harftir さ: ");
            scanf("%s", girdi);

            ctrl = strcmp(girdi, cevap[x]);

            printf("Verilen yanıt %s.\t", girdi);
            (ctrl == 0 ) ? printf("Doğru cevap \n") : printf("Yanlış cevap, doğru cevap %s olacaktı \n ", cevap[x]); 
            break;
                
                            
            case 11 :

            printf("Bu hangi harftir し: ");
            scanf("%s", girdi);

            ctrl = strcmp(girdi, cevap[x]);

            printf("Verilen yanıt %s.\t", girdi);
            (ctrl == 0 ) ? printf("Doğru cevap \n") : printf("Yanlış cevap, doğru cevap %s olacaktı \n ", cevap[x]); 
            break;
                
                            
            case 12 :

            printf("Bu hangi harftir す: ");
            scanf("%s", girdi);

            ctrl = strcmp(girdi, cevap[x]);

            printf("Verilen yanıt %s.\t", girdi);
            (ctrl == 0 ) ? printf("Doğru cevap \n") : printf("Yanlış cevap, doğru cevap %s olacaktı \n ", cevap[x]); 
            break;
                
                            
            case 13 :

            printf("Bu hangi harftir せ: ");
            scanf("%s", girdi);

            ctrl = strcmp(girdi, cevap[x]);

            printf("Verilen yanıt %s.\t", girdi);
            (ctrl == 0 ) ? printf("Doğru cevap \n") : printf("Yanlış cevap, doğru cevap %s olacaktı \n ", cevap[x]); 
            break;
                       
            case 14 :

            printf("Bu hangi harftir そ: ");
            scanf("%s", girdi);

            ctrl = strcmp(girdi, cevap[x]);

            printf("Verilen yanıt %s.\t", girdi);
            (ctrl == 0 ) ? printf("Doğru cevap \n") : printf("Yanlış cevap, doğru cevap %s olacaktı \n ", cevap[x]); 
            break;
                            
            case 15 :

            printf("Bu hangi harftir た: ");
            scanf("%s", girdi);

            ctrl = strcmp(girdi, cevap[x]);

            printf("Verilen yanıt %s.\t", girdi);
            (ctrl == 0 ) ? printf("Doğru cevap \n") : printf("Yanlış cevap, doğru cevap %s olacaktı \n ", cevap[x]); 
            break;
                            
            case 16 :

            printf("Bu hangi harftir ち: ");
            scanf("%s", girdi);

            ctrl = strcmp(girdi, cevap[x]);

            printf("Verilen yanıt %s.\t", girdi);
            (ctrl == 0 ) ? printf("Doğru cevap \n") : printf("Yanlış cevap, doğru cevap %s olacaktı \n ", cevap[x]); 
            break;
                           
            case 17 :

            printf("Bu hangi harftir つ: ");
            scanf("%s", girdi);

            ctrl = strcmp(girdi, cevap[x]);

            printf("Verilen yanıt %s.\t", girdi);
            (ctrl == 0 ) ? printf("Doğru cevap \n") : printf("Yanlış cevap, doğru cevap %s olacaktı \n ", cevap[x]); 
            break;
                
                            
            case 18 :

            printf("Bu hangi harftir て: ");
            scanf("%s", girdi);

            ctrl = strcmp(girdi, cevap[x]);

            printf("Verilen yanıt %s.\t", girdi);
            (ctrl == 0 ) ? printf("Doğru cevap \n") : printf("Yanlış cevap, doğru cevap %s olacaktı \n ", cevap[x]); 
            break;
                
                            
            case 19 :

            printf("Bu hangi harftir と: ");
            scanf("%s", girdi);

            ctrl = strcmp(girdi, cevap[x]);

            printf("Verilen yanıt %s.\t", girdi);
            (ctrl == 0 ) ? printf("Doğru cevap \n") : printf("Yanlış cevap, doğru cevap %s olacaktı \n ", cevap[x]); 
            break;
                
                            
            case 20 :

            printf("Bu hangi harftir は: ");
            scanf("%s", girdi);

            ctrl = strcmp(girdi, cevap[x]);

            printf("Verilen yanıt %s.\t", girdi);
            (ctrl == 0 ) ? printf("Doğru cevap \n") : printf("Yanlış cevap, doğru cevap %s olacaktı \n ", cevap[x]); 
            break;
                
                            
            case 21 :

            printf("Bu hangi harftir ひ: ");
            scanf("%s", girdi);

            ctrl = strcmp(girdi, cevap[x]);

            printf("Verilen yanıt %s.\t", girdi);
            (ctrl == 0 ) ? printf("Doğru cevap \n") : printf("Yanlış cevap, doğru cevap %s olacaktı \n ", cevap[x]); 
            break;
                
                            
            case 22 :

            printf("Bu hangi harftir ふ: ");
            scanf("%s", girdi);

            ctrl = strcmp(girdi, cevap[x]);

            printf("Verilen yanıt %s.\t", girdi);
            (ctrl == 0 ) ? printf("Doğru cevap \n") : printf("Yanlış cevap, doğru cevap %s olacaktı \n ", cevap[x]); 
            break;
                
                            
            case 23 :

            printf("Bu hangi harftir へ: ");
            scanf("%s", girdi);

            ctrl = strcmp(girdi, cevap[x]);

            printf("Verilen yanıt %s.\t", girdi);
            (ctrl == 0 ) ? printf("Doğru cevap \n") : printf("Yanlış cevap, doğru cevap %s olacaktı \n ", cevap[x]); 
            break;
                
                            
            case 24 :

            printf("Bu hangi harftir ほ: ");
            scanf("%s", girdi);

            ctrl = strcmp(girdi, cevap[x]);

            printf("Verilen yanıt %s.\t", girdi);
            (ctrl == 0 ) ? printf("Doğru cevap \n") : printf("Yanlış cevap, doğru cevap %s olacaktı \n ", cevap[x]); 
            break;
                
                            
            case 25 :

            printf("Bu hangi harftir ま: ");
            scanf("%s", girdi);

            ctrl = strcmp(girdi, cevap[x]);

            printf("Verilen yanıt %s.\t", girdi);
            (ctrl == 0 ) ? printf("Doğru cevap \n") : printf("Yanlış cevap, doğru cevap %s olacaktı \n ", cevap[x]); 
            break;
                
                            
            case 26 :

            printf("Bu hangi harftir み: ");
            scanf("%s", girdi);

            ctrl = strcmp(girdi, cevap[x]);

            printf("Verilen yanıt %s.\t", girdi);
            (ctrl == 0 ) ? printf("Doğru cevap \n") : printf("Yanlış cevap, doğru cevap %s olacaktı \n ", cevap[x]); 
            break;
                
                            
            case 27 :

            printf("Bu hangi harftir む: ");
            scanf("%s", girdi);

            ctrl = strcmp(girdi, cevap[x]);

            printf("Verilen yanıt %s.\t", girdi);
            (ctrl == 0 ) ? printf("Doğru cevap \n") : printf("Yanlış cevap, doğru cevap %s olacaktı \n ", cevap[x]); 
            break;
                
                            
            case 28 :

            printf("Bu hangi harftir め: ");
            scanf("%s", girdi);

            ctrl = strcmp(girdi, cevap[x]);

            printf("Verilen yanıt %s.\t", girdi);
            (ctrl == 0 ) ? printf("Doğru cevap \n") : printf("Yanlış cevap, doğru cevap %s olacaktı \n ", cevap[x]); 
            break;
                
                            
            case 29 :

            printf("Bu hangi harftir も: ");
            scanf("%s", girdi);

            ctrl = strcmp(girdi, cevap[x]);

            printf("Verilen yanıt %s.\t", girdi);
            (ctrl == 0 ) ? printf("Doğru cevap \n") : printf("Yanlış cevap, doğru cevap %s olacaktı \n ", cevap[x]); 
            break;
                
                            
            case 30 :

            printf("Bu hangi harftir や: ");
            scanf("%s", girdi);

            ctrl = strcmp(girdi, cevap[x]);

            printf("Verilen yanıt %s.\t", girdi);
            (ctrl == 0 ) ? printf("Doğru cevap \n") : printf("Yanlış cevap, doğru cevap %s olacaktı \n ", cevap[x]); 
            break;
                
                            
            case 31 :

            printf("Bu hangi harftir ゆ: ");
            scanf("%s", girdi);

            ctrl = strcmp(girdi, cevap[x]);

            printf("Verilen yanıt %s.\t", girdi);
            (ctrl == 0 ) ? printf("Doğru cevap \n") : printf("Yanlış cevap, doğru cevap %s olacaktı \n ", cevap[x]); 
            break;
                
                            
            case 32 :

            printf("Bu hangi harftir よ: ");
            scanf("%s", girdi);

            ctrl = strcmp(girdi, cevap[x]);

            printf("Verilen yanıt %s.\t", girdi);
            (ctrl == 0 ) ? printf("Doğru cevap \n") : printf("Yanlış cevap, doğru cevap %s olacaktı \n ", cevap[x]); 
            break;
                
                            
            case 33 :

            printf("Bu hangi harftir ら: ");
            scanf("%s", girdi);

            ctrl = strcmp(girdi, cevap[x]);

            printf("Verilen yanıt %s.\t", girdi);
            (ctrl == 0 ) ? printf("Doğru cevap \n") : printf("Yanlış cevap, doğru cevap %s olacaktı \n ", cevap[x]); 
            break;   
                            
            case 34 :

            printf("Bu hangi harftir り: ");
            scanf("%s", girdi);

            ctrl = strcmp(girdi, cevap[x]);

            printf("Verilen yanıt %s.\t", girdi);
            (ctrl == 0 ) ? printf("Doğru cevap \n") : printf("Yanlış cevap, doğru cevap %s olacaktı \n ", cevap[x]); 
            break;
                
                            
            case 35 :

            printf("Bu hangi harftir る: ");
            scanf("%s", girdi);

            ctrl = strcmp(girdi, cevap[x]);

            printf("Verilen yanıt %s.\t", girdi);
            (ctrl == 0 ) ? printf("Doğru cevap \n") : printf("Yanlış cevap, doğru cevap %s olacaktı \n ", cevap[x]); 
            break;
                
                            
            case 36 :

            printf("Bu hangi harftir れ: ");
            scanf("%s", girdi);

            ctrl = strcmp(girdi, cevap[x]);

            printf("Verilen yanıt %s.\t", girdi);
            (ctrl == 0 ) ? printf("Doğru cevap \n") : printf("Yanlış cevap, doğru cevap %s olacaktı \n ", cevap[x]); 
            break;
                
                            
            case 37 :

            printf("Bu hangi harftir ろ: ");
            scanf("%s", girdi);

            ctrl = strcmp(girdi, cevap[x]);

            printf("Verilen yanıt %s.\t", girdi);
            (ctrl == 0 ) ? printf("Doğru cevap \n") : printf("Yanlış cevap, doğru cevap %s olacaktı \n ", cevap[x]); 
            break;
                
                            
            case 38 :

            printf("Bu hangi harftir わ: ");
            scanf("%s", girdi);

            ctrl = strcmp(girdi, cevap[x]);

            printf("Verilen yanıt %s.\t", girdi);
            (ctrl == 0 ) ? printf("Doğru cevap \n") : printf("Yanlış cevap, doğru cevap %s olacaktı \n ", cevap[x]); 
            break;
                
                            
            case 39 :

            printf("Bu hangi harftir を: ");
            scanf("%s", girdi);

            ctrl = strcmp(girdi, cevap[x]);

            printf("Verilen yanıt %s.\t", girdi);
            (ctrl == 0 ) ? printf("Doğru cevap \n") : printf("Yanlış cevap, doğru cevap %s olacaktı \n ", cevap[x]); 
            break;
                         
            case 40 :

            printf("Bu hangi harftir ん: ");
            scanf("%s", girdi);

            ctrl = strcmp(girdi, cevap[x]);

            printf("Verilen yanıt %s.\t", girdi);
            (ctrl == 0 ) ? printf("Doğru cevap \n") : printf("Yanlış cevap, doğru cevap %s olacaktı \n ", cevap[x]); 
            break;
                
        }
    }
}
