#include <stdio.h>

int main(){ 

    char welcome[] = "Hello World";
    printf("%s\n", welcome);

    char television[] = "you're watching the TV"; 
    printf("%s\n", television); 

    television[0] = 'a'; // char is always with '' not "" 

    printf("%c\n", television[0]); 


    char car[] = "Volvo";

    int countletter = sizeof(car) / sizeof(car[0]); //you want to know how many bytes per letter smartass
    
    for(int i = 0; i<countletter; i++){
        printf("%c ", car[i]);
        if(i==(countletter-1)){
            printf("\n"); 
            break;
        }
    }

    char greetings[] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd'};

    printf("%s\n", greetings); // it puts the letters together ç

    printf("%zu\n", sizeof(greetings)); // don't forget %zu for sizeof() 




    return 0; 
}