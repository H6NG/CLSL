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

    printf("%d\t %d\n", hello, nothello);

    printf("%d\n", x > y);




    return 0; 
}