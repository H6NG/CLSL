#include <stdio.h>

int square(int a) {
    return (a*a); 
}

int main() {
    printf("Hello World! \n"); 
    int a = 5;
    float pi = 3.2;
    char letter = 'a';
    printf("integer: %i, float: %.1f, char: %c\n", a, pi, letter);
    int scan_result; 
    int age; 

    printf("enter your age: ");
    scanf("%d", &age);
    printf("Your age is: %d\n", age);
    
    if(scan_result != 1) {
        printf("Invalid input. Please enter a valid age.\n");
        return 1;
    } else {
        if (age >= 9) {
            printf("you're older than 9 years old\n");
        } else {
            printf("you're younger than 9 years old \n"); 
        }
    }

    for(int i = 0; i < 10; i++){
        printf("i is: %i\n", i);
    }

    // Single Line comment 
    /*Mutliple lines*/
    
    printf("A: %d\n", square(age)); 
    printf("%d\n", square(age));

    int r = 6; 
    int o; 

    o = r; 
    char l = 'b'; 

    printf("your char is: %c, and your int is: %i\n", l, o);

    int hello = 0; 
    int Hello = 3; 
    float Pi = 3.14; 
    float fib = 1.618; 
    double result; 

    printf("%i\n", hello + Hello);
    printf("%.2f\n", fib + Pi); 

    // Use float if memory is your concern and double if precision is your concern
    int x = 4; 
    int y = 2; 

    int divide = x/y; 

    printf("%i\n", divide);

    return 0; 
}