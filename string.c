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

    printf("%i\n", strcmp(before,after));

    strcat(before, after); //combining strcat()
    printf("%s\n", before);

    strcpy(before,after); // therefore before is now equal to after 
    
    printf("%i\n", strcmp(before, after));

    int nums;
    printf("what number do you think about: "); 
    scanf("%i", &nums); //don't forget that &

    printf("%i\n", nums); 


    int x; 
    char y; 

    printf("Choose an integer x-value and choose a char y-value: ");
    scanf("%i %c", &x, &y);

    printf("you\'re value of x is %i, and you\'re value of y is %c\n", x, y);

    int myAge = 20; 
    printf("%i\n", myAge); 
    printf("%p\n", &myAge); // %p for pointer adress

    int* pointer = &myAge;//declare a int pointer.

    printf("%p\n", pointer);

    printf("%i\n", *pointer);

    int myInt; 

    printf("%zu\n", sizeof(myInt));

    return 0; 
}