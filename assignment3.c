#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int treasureX, treasureY;
    int guessX, guessY;
    int attempts = 0;

    srand(time(0));  
    treasureX = rand() % 5 + 1;   
    treasureY = rand() % 5 + 1;

    printf("\n===== TREASURE HUNT GAME =====\n");
    printf("Treasure is hidden in a 5 x 5 grid.\n");
    printf("Enter row and column (1 - 5) to search.\n\n");

    while (1) {
        attempts++;

        printf("Enter row (1 - 5): ");
        scanf("%d", &guessX);
        printf("Enter column (1 - 5): ");
        scanf("%d", &guessY);

        if (guessX < 1 || guessX > 5 || guessY < 1 || guessY > 5) {
            printf("Invalid input! Choose only between 1 and 5.\n\n");
            continue;
        }

        if (guessX == treasureX && guessY == treasureY) {
            printf("\n Congratulations! You found the treasure in %d attempts!\n", attempts);
            break;
        } else {
            printf("Not here! Try again.\n");

            
            if (guessX > treasureX) printf("Hint: Go UP\n");
            else if (guessX < treasureX) printf("Hint: Go DOWN  \n");

            if (guessY > treasureY) printf("Hint: Go LEFT\n");
            else if (guessY < treasureY) printf("Hint: Go RIGHT\n");

            printf("\n");
        }
    }

    printf("\nGame Over — Thanks for playing!\n");
    return 0;
}