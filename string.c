#include <stdio.h>
#include <string.h>

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

    printf("%zu\n", sizeof(greetings)/sizeof(greetings[0])); // don't forget %zu for sizeof() 

    char messagebefore[] = "hello"; 
    char messageafter[] = "John"; 

    printf("%s %s\n", messagebefore, messageafter); 

    printf("his name is %s\nand he\'s alright\n", messageafter);


    //strlen needs the header <string.h> and %lu and includes a \0 (null)
    /*strlen less efficient because it has to loop through each character until it finds '\0'.*/

    printf("%lu\n", strlen(greetings));


    char before[20] = "Hello World"; 
    char after[20] = " john"; 

    strcat(before, after);
    printf("%s\n", before);

    return 0; 
}