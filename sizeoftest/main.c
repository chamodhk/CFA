#include <stdio.h>

int main(int argc, char * argv[]) {
    printf("size of int: %d\n", sizeof(int));
    printf("size of char: %d\n", sizeof(char));
    printf("size of long: %d\n", sizeof(long));
    printf("size of float: %d\n", sizeof(float));
    printf("size of doble: %d\n", sizeof(double));
    printf("size of short: %d\n", sizeof(short));
    printf("size of \" hello hello \" : %d\n", sizeof("hello hello"));

}