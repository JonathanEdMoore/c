#include<stdio.h>
#include<stdlib.h>

struct Rectangle {
        int length;
        int width;
    };

    int add(int a, int b) {
        return a + b;
    }

    int main() {
        int *p1;
        char *p2;
        float *p3;
        double *p4;
        struct Rectangle *p5;

        int *p6;

        p6=(int *)malloc(5*sizeof(int));
        p6[0]=10;
        p6[1]=20;
        p6[2]=30;
        p6[3]=40;
        p6[4]=50;

        
        for(int i=0;i<5;i++){
            printf("Value at p6[%d]: %d\n",i,p6[i]);
        }

        free(p6);
        
        printf("Size of int pointer: %zu bytes\n", sizeof(p1));
        printf("Size of char pointer: %zu bytes\n", sizeof(p2));
        printf("Size of float pointer: %zu bytes\n", sizeof(p3));
        printf("Size of double pointer: %zu bytes\n", sizeof(p4));
        printf("Size of struct Rectangle pointer: %zu bytes\n", sizeof(p5));
        printf("Size of array pointer: %zu bytes\n", sizeof(p6));

        int x = 5, y = 10;
        int result = add(x, y);
        printf("Sum of %d and %d is: %d\n", x, y, result);

        // Freeing the pointer to avoid memory leaks
        free(p6);
        
        return 0;
    }