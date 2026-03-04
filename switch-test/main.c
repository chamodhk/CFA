#include <stdio.h>

int main() {
    int train = 70;
    int winnings = 0;
    switch(train) {
        case 37:
            winnings = winnings + 50;
            break;
        case 70:
        case 65:
            puts("Jackspot!");
            winnings = winnings + 80;
            break;
        case 12:
            winnings = winnings + 20;
            break;
        default:
            winnings = 0;
    }

    printf("Train value is %d Winnigs are %d\n",
        train, winnings);

    return 0;
}