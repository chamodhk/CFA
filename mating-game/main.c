#include <stdio.h>

int main(int arc, char * argv[]) {
    int contestants[] = {1, 2, 3};
    int *choice = contestants;
    contestants[0] = 2;
    contestants[1] = contestants[2];
    contestants[2] = *choice;
    printf("I'm going to pick contestant number %d", contestants[1]);
    return 0;
}