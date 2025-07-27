#include <stdio.h>
#include <stdbool.h> //boolean

int main() { 

    const int io = 2; 

    printf("%d\n", io); 

    int x = 10; 
    int y = 9;

    while (x!=0) {
        x--; 
        printf("%d\n", x);
    }

    bool hello = false; 
    bool nothello = true; // Make sure to include <stdbool.h>

    printf("%d\n%d\n", hello, nothello);

    printf("%d\n", x > y);


    int z = 10; 
    int r = 10; 

    if(z>r){
        printf("z is bigger than r\n"); 
    } 
    else if(z==r){
        printf("z is equal to r\n");
    }
    else {
        printf("z is smaller than r\n"); 
    }

    int i = 1;

    //only one variable to test and don't forget to use break; 
    // it's a great use if you don't want to do if else if else if all the time;

    switch (i) {
        case 1: 
            printf("today is %i\n", i);
            break;
        case 2: 
            printf("today is %i\n", i);
            break;
        case 3: 
            printf("today is %i\n", i);
            break;
        case 4: 
            printf("today is %i\n", i);
            break;
        case 5: 
            printf("today is %i\n", i);
            break;
        case 6: 
            printf("today is %i\n", i);
            break;
        case 7: 
            printf("today is %i\n", i);
            break;
        case 8: 
            printf("today is %i\n", i);
            break;
        case 9: 
            printf("today is %i\n", i);
            break;
        case 10: 
            printf("today is %i\n", i);
            break;
    }
    int george = 0; 

    // conditions inside the must be true in order for the function to do what is supposed to do 

    while (george < 30) {
        printf("%i\n", george); 
        george++; 
    }


    int koi = 1; 

    //only things compared to while, is that it does for once, the action, at least.

    do {
        printf("%i\n", koi);
        koi--; 
    }
    while (koi!=0); 

    return 0; 
}