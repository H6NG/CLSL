#include <stdio.h>
#include <stdbool.h> 

int main () {

    int cars; 

    printf("How many cars are on the road:");
    scanf("%d", &cars);

    for(int i=0; i<8; i++) {
        printf("%d\n", i);
        if(i == 3){
            break;
        }
    }

    int x, y; 

    for (int x = 0; x<4; x++){
        for (int y = 0; y<4; y++){
            printf("%d  ", x * y); // natural spacing 
        }
        printf("\n");
    }

    int myArray[] = { 0, 2, 3, 4, 6, 10};

    printf("%d\n", myArray[2]);

    myArray[5] = 8;
    
    printf("%zu bytes in total", sizeof(myArray)); // int usually is 4 bytes 
    // therefore 4 * 6 = 24 

    printf("\n");
    int result = sizeof(myArray)/4; 

    printf("Real size of the array %d\n", result); 


    int myArrayTest[10]; // Declare an array of 10 integers inside

    
    for (int i = 0; i < 1; i++) {
        printf("%d\n", myArray[i]);
    }

    int matrix[2][3] = { {1,2,3}, {2,3,4} }; //matrix[row][column]

    printf("%d\n", matrix[0][2]);


    printf("-------\n");

    int matrixx[2][2] = { {0, 0}, {0, 0} }; // important, otherwise it contains garbage high and low numbers.
    matrixx[1][1] = 2; 

    printf("%d\n", matrixx[1][1] == 1); 

    for(int f=0; f<2; f++){
        for(int t=0; t<2; t++){
            printf("%d  ", matrixx[f][t]);
        }
        printf("\n");
    }


    //Three dimensional Array 

    int example[2][4][3] = { //blocks, row, column
        {
            {1,2,3}, {1,2,3}, {1,2,3}, {1,2,3}
        }, 
        {
             {1,2,3}, {1,2,3}, {1,2,3}, {1,2,3}
        }
    };

    //a set of for loop


    return 0; 
}