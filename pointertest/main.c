#include <stdio.h>

int main(int argc, char * argv[]) {
    int x = 1337;
    int * a = &x;
    printf("The address of x as a base 16 number: %p\n", a);
    printf("The address of x as a base 10 number: %ld\n", a);

}