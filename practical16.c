#include <stdio.h>

int main() {
    int matchsticks = 21, user, computer;

    printf("Welcome to the Matchstick Game!\n");
    printf("Rules: You can pick 1, 2, 3, or 4 matchsticks.\n");
    printf("The one forced to pick the last matchstick loses.\n\n");

    while (matchsticks > 1) {
        printf("\nMatchsticks left: %d\n", matchsticks);
        printf("Pick 1, 2, 3, or 4: ");
        scanf("%d", &user);

        if (user < 1 || user > 4) {
            printf("Invalid choice! Pick between 1 and 4.\n");
            continue;
        }

        matchsticks -= user;
        if (matchsticks == 1) {
            printf("Only 1 matchstick left. You are forced to take it.\n");
            printf("You lose! Computer wins.\n");
            break;
        }

        computer = 5 - user; // Strategy to always win
        printf("Computer picks: %d\n", computer);

        matchsticks -= computer;
        if (matchsticks == 1) {
            printf("Only 1 matchstick left. Computer leaves it for you.\n");
            printf("You lose! Computer wins.\n");
            break;
        }
    }

    return 0;
}
