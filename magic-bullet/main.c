#include <stdio.h>

int main (int argc, char * argv[]) {
    char masked_radar[] = "Alive";;
    char *jimmy = masked_radar;
    printf("Masked radar is %s, Jimmy is %s\n",
    masked_radar, jimmy);
    return 0;
}