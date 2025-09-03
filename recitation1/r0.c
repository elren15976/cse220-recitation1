#include <stdio.h>
#include <stdint.h>

int add(int x, int y){
    return x + y;
}

int subtract(int a, int b);
int multiply(int a, int b);
int divide(int a, int b);

// Add a main function if you are trying to run make ro
int main(){
    char gap[] = "GAP";
    char str[] = "Hello there, how art thou?";
    uint8_t num[3] = {65, 90, 78};
    printf("Hello World\n");
    printf("%d\n", num[0]);
    printf("%d\n", num[1]);
    printf("%d\n", num[2]);
    printf("\n%s\n", gap);
    for(int i = 3; i < 300; i++){
        printf("%c", num[i]);
    }
    printf("\n%s\n", gap);
    printf("\n");
    printf("%s\n", str);
    return 0;
}