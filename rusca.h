#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

void rus() {
    
    char cevap [33][8] = {
    "a", "b", "v", "g", "d", "ye", "yo", "j", "z", "i", "y", "k", "l", "m", "n", "o", "p", "r", "s",
    "t", "u", "f", "h", "ts", "ç", "ş", "şç", "sert", "ı", "yumuşak", "e", "yu", "ya" 
};

    char girdi[8];
    for (;;) {
        const short y = 1;

        srand(time(0));
        int x = (rand() % 33);
        char ctrl;
        switch (x) {
            case 0 :

            printf("Bu hangi harftir A-a: ");
            scanf("%s", girdi);

            ctrl = strcmp(girdi, cevap[x]);

            printf("Verilen yanıt %s.\t", girdi);
            (ctrl == 0 ) ? printf("Doğru cevap \n") : printf("Yanlış cevap, doğru cevap %s olacaktı \n ", cevap[x]); 
            break;

            case 1 :

            printf("Bu hangi harftir Б-б: ");
            scanf("%s", girdi);

            ctrl = strcmp(girdi, cevap[x]);

            printf("Verilen yanıt %s.\t", girdi);
            (ctrl == 0 ) ? printf("Doğru cevap \n") : printf("Yanlış cevap, doğru cevap %s olacaktı \n ", cevap[x]); 
            break;
                
            case 2 :

            printf("Bu hangi harftir В-в: ");
            scanf("%s", girdi);

            ctrl = strcmp(girdi, cevap[x]);

            printf("Verilen yanıt %s.\t", girdi);
            (ctrl == 0 ) ? printf("Doğru cevap \n") : printf("Yanlış cevap, doğru cevap %s olacaktı \n ", cevap[x]); 
            break;
            
            case 3 :

            printf("Bu hangi harftir Г-г: ");
            scanf("%s", girdi);

            ctrl = strcmp(girdi, cevap[x]);

            printf("Verilen yanıt %s.\t", girdi);
            (ctrl == 0 ) ? printf("Doğru cevap \n") : printf("Yanlış cevap, doğru cevap %s olacaktı \n ", cevap[x]); 
            break;
                    
            case 4 :

            printf("Bu hangi harftir Д-д: ");
            scanf("%s", girdi);

            ctrl = strcmp(girdi, cevap[x]);

            printf("Verilen yanıt %s.\t", girdi);
            (ctrl == 0 ) ? printf("Doğru cevap \n") : printf("Yanlış cevap, doğru cevap %s olacaktı \n ", cevap[x]); 
            break;
                            
            case 5 :

            printf("Bu hangi harftir Е-е: ");
            scanf("%s", girdi);

            ctrl = strcmp(girdi, cevap[x]);

            printf("Verilen yanıt %s.\t", girdi);
            (ctrl == 0 ) ? printf("Doğru cevap \n") : printf("Yanlış cevap, doğru cevap %s olacaktı \n ", cevap[x]); 
            break;
                            
            case 6 :

            printf("Bu hangi harftir Ё-ё: ");
            scanf("%s", girdi);

            ctrl = strcmp(girdi, cevap[x]);

            printf("Verilen yanıt %s.\t", girdi);
            (ctrl == 0 ) ? printf("Doğru cevap \n") : printf("Yanlış cevap, doğru cevap %s olacaktı \n ", cevap[x]); 
            break;
                
                            
            case 7 :

            printf("Bu hangi harftir Ж-ж: ");
            scanf("%s", girdi);

            ctrl = strcmp(girdi, cevap[x]);

            printf("Verilen yanıt %s.\t", girdi);
            (ctrl == 0 ) ? printf("Doğru cevap \n") : printf("Yanlış cevap, doğru cevap %s olacaktı \n ", cevap[x]); 
            break;
                
                            
            case 8 :

            printf("Bu hangi harftir З-з: ");
            scanf("%s", girdi);

            ctrl = strcmp(girdi, cevap[x]);

            printf("Verilen yanıt %s.\t", girdi);
            (ctrl == 0 ) ? printf("Doğru cevap \n") : printf("Yanlış cevap, doğru cevap %s olacaktı \n ", cevap[x]); 
            break;
                
                            
            case 9 :

            printf("Bu hangi harftir И-и: ");
            scanf("%s", girdi);

            ctrl = strcmp(girdi, cevap[x]);

            printf("Verilen yanıt %s.\t", girdi);
            (ctrl == 0 ) ? printf("Doğru cevap \n") : printf("Yanlış cevap, doğru cevap %s olacaktı \n ", cevap[x]); 
            break;
                
                            
            case 10 :

            printf("Bu hangi harftir Й-й: ");
            scanf("%s", girdi);

            ctrl = strcmp(girdi, cevap[x]);

            printf("Verilen yanıt %s.\t", girdi);
            (ctrl == 0 ) ? printf("Doğru cevap \n") : printf("Yanlış cevap, doğru cevap %s olacaktı \n ", cevap[x]); 
            break;
                
                            
            case 11 :

            printf("Bu hangi harftir К-к: ");
            scanf("%s", girdi);

            ctrl = strcmp(girdi, cevap[x]);

            printf("Verilen yanıt %s.\t", girdi);
            (ctrl == 0 ) ? printf("Doğru cevap \n") : printf("Yanlış cevap, doğru cevap %s olacaktı \n ", cevap[x]); 
            break;
                
                            
            case 12 :

            printf("Bu hangi harftir Л-л: ");
            scanf("%s", girdi);

            ctrl = strcmp(girdi, cevap[x]);

            printf("Verilen yanıt %s.\t", girdi);
            (ctrl == 0 ) ? printf("Doğru cevap \n") : printf("Yanlış cevap, doğru cevap %s olacaktı \n ", cevap[x]); 
            break;
                
                            
            case 13 :

            printf("Bu hangi harftir М-м: ");
            scanf("%s", girdi);

            ctrl = strcmp(girdi, cevap[x]);

            printf("Verilen yanıt %s.\t", girdi);
            (ctrl == 0 ) ? printf("Doğru cevap \n") : printf("Yanlış cevap, doğru cevap %s olacaktı \n", cevap[x]); 
            break;
                       
            case 14 :

            printf("Bu hangi harftir Н-н: ");
            scanf("%s", girdi);

            ctrl = strcmp(girdi, cevap[x]);

            printf("Verilen yanıt %s.\t", girdi);
            (ctrl == 0 ) ? printf("Doğru cevap \n") : printf("Yanlış cevap, doğru cevap %s olacaktı \n ", cevap[x]); 
            break;
                            
            case 15 :

            printf("Bu hangi harftir O-o: ");
            scanf("%s", girdi);

            ctrl = strcmp(girdi, cevap[x]);

            printf("Verilen yanıt %s.\t", girdi);
            (ctrl == 0 ) ? printf("Doğru cevap \n") : printf("Yanlış cevap, doğru cevap %s olacaktı \n ", cevap[x]); 
            break;
                            
            case 16 :

            printf("Bu hangi harftir П-п: ");
            scanf("%s", girdi);

            ctrl = strcmp(girdi, cevap[x]);

            printf("Verilen yanıt %s.\t", girdi);
            (ctrl == 0 ) ? printf("Doğru cevap \n") : printf("Yanlış cevap, doğru cevap %s olacaktı \n ", cevap[x]); 
            break;
                           
            case 17 :

            printf("Bu hangi harftir P-p: ");
            scanf("%s", girdi);

            ctrl = strcmp(girdi, cevap[x]);

            printf("Verilen yanıt %s.\t", girdi);
            (ctrl == 0 ) ? printf("Doğru cevap \n") : printf("Yanlış cevap, doğru cevap %s olacaktı \n ", cevap[x]); 
            break;
                
                            
            case 18 :

            printf("Bu hangi harftir C-c: ");
            scanf("%s", girdi);

            ctrl = strcmp(girdi, cevap[x]);

            printf("Verilen yanıt %s.\t", girdi);
            (ctrl == 0 ) ? printf("Doğru cevap \n") : printf("Yanlış cevap, doğru cevap %s olacaktı \n ", cevap[x]); 
            break;
                
                            
            case 19 :

            printf("Bu hangi harftir Т-т: ");
            scanf("%s", girdi);

            ctrl = strcmp(girdi, cevap[x]);

            printf("Verilen yanıt %s.\t", girdi);
            (ctrl == 0 ) ? printf("Doğru cevap \n") : printf("Yanlış cevap, doğru cevap %s olacaktı \n ", cevap[x]); 
            break;
                
                            
            case 20 :

            printf("Bu hangi harftir У-у: ");
            scanf("%s", girdi);

            ctrl = strcmp(girdi, cevap[x]);

            printf("Verilen yanıt %s.\t", girdi);
            (ctrl == 0 ) ? printf("Doğru cevap \n") : printf("Yanlış cevap, doğru cevap %s olacaktı \n ", cevap[x]); 
            break;
                
                            
            case 21 :

            printf("Bu hangi harftir Ф-ф: ");
            scanf("%s", girdi);

            ctrl = strcmp(girdi, cevap[x]);

            printf("Verilen yanıt %s.\t", girdi);
            (ctrl == 0 ) ? printf("Doğru cevap \n") : printf("Yanlış cevap, doğru cevap %s olacaktı \n ", cevap[x]); 
            break;
                
                            
            case 22 :

            printf("Bu hangi harftir X-x: ");
            scanf("%s", girdi);

            ctrl = strcmp(girdi, cevap[x]);

            printf("Verilen yanıt %s.\t", girdi);
            (ctrl == 0 ) ? printf("Doğru cevap \n") : printf("Yanlış cevap, doğru cevap %s olacaktı \n ", cevap[x]); 
            break;
                
                            
            case 23 :

            printf("Bu hangi harftir Ц-ц: ");
            scanf("%s", girdi);

            ctrl = strcmp(girdi, cevap[x]);

            printf("Verilen yanıt %s.\t", girdi);
            (ctrl == 0 ) ? printf("Doğru cevap \n") : printf("Yanlış cevap, doğru cevap %s olacaktı \n ", cevap[x]); 
            break;
                
                            
            case 24 :

            printf("Bu hangi harftir Ч-ч: ");
            scanf("%s", girdi);

            ctrl = strcmp(girdi, cevap[x]);

            printf("Verilen yanıt %s.\t", girdi);
            (ctrl == 0 ) ? printf("Doğru cevap \n") : printf("Yanlış cevap, doğru cevap %s olacaktı \n ", cevap[x]); 
            break;
                
                            
            case 25 :

            printf("Bu hangi harftir Ш-ш: ");
            scanf("%s", girdi);

            ctrl = strcmp(girdi, cevap[x]);

            printf("Verilen yanıt %s.\t", girdi);
            (ctrl == 0 ) ? printf("Doğru cevap \n") : printf("Yanlış cevap, doğru cevap %s olacaktı \n ", cevap[x]); 
            break;
                
                            
            case 26 :

            printf("Bu hangi harftir Щ-щ: ");
            scanf("%s", girdi);

            ctrl = strcmp(girdi, cevap[x]);

            printf("Verilen yanıt %s.\t", girdi);
            (ctrl == 0 ) ? printf("Doğru cevap \n") : printf("Yanlış cevap, doğru cevap %s olacaktı \n ", cevap[x]); 
            break;
                
                            
            case 27 :

            printf("Bu hangi harftir ъ: ");
            scanf("%s", girdi);

            ctrl = strcmp(girdi, cevap[x]);

            printf("Verilen yanıt %s.\t", girdi);
            (ctrl == 0 ) ? printf("Doğru cevap \n") : printf("Yanlış cevap, doğru cevap %s olacaktı \n ", cevap[x]); 
            break;
                
                            
            case 28 :

            printf("Bu hangi harftir ы: ");
            scanf("%s", girdi);

            ctrl = strcmp(girdi, cevap[x]);

            printf("Verilen yanıt %s.\t", girdi);
            (ctrl == 0 ) ? printf("Doğru cevap \n") : printf("Yanlış cevap, doğru cevap %s olacaktı \n ", cevap[x]); 
            break;
                
                            
            case 29 :

            printf("Bu hangi harftir ь: ");
            scanf("%s", girdi);

            ctrl = strcmp(girdi, cevap[x]);

            printf("Verilen yanıt %s.\t", girdi);
            (ctrl == 0 ) ? printf("Doğru cevap \n") : printf("Yanlış cevap, doğru cevap %s olacaktı \n ", cevap[x]); 
            break;
                
                            
            case 30 :

            printf("Bu hangi harftir Э-э: ");
            scanf("%s", girdi);

            ctrl = strcmp(girdi, cevap[x]);

            printf("Verilen yanıt %s.\t", girdi);
            (ctrl == 0 ) ? printf("Doğru cevap \n") : printf("Yanlış cevap, doğru cevap %s olacaktı \n ", cevap[x]); 
            break;
                
                            
            case 31 :

            printf("Bu hangi harftir Ю-ю: ");
            scanf("%s", girdi);

            ctrl = strcmp(girdi, cevap[x]);

            printf("Verilen yanıt %s.\t", girdi);
            (ctrl == 0 ) ? printf("Doğru cevap \n") : printf("Yanlış cevap, doğru cevap %s olacaktı \n ", cevap[x]); 
            break;
                
                            
            case 32 :

            printf("Bu hangi harftir Я-я: ");
            scanf("%s", girdi);

            ctrl = strcmp(girdi, cevap[x]);

            printf("Verilen yanıt %s.\t", girdi);
            (ctrl == 0 ) ? printf("Doğru cevap \n") : printf("Yanlış cevap, doğru cevap %s olacaktı \n ", cevap[x]); 
            break;
                
                
        }
    }
}
