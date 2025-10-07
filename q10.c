#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void play_guess_game(void) {
    int target = rand() % 100 + 1;  // Random number between 1 and 100
    int guess, attempt = 0;
    const int max_attempt = 7;

    while (attempt < max_attempt) {
        printf("Enter your guess (1-100): ");
        scanf("%d", &guess);
        attempt++;

        if (guess == target) {
            printf("Correct! You guessed it in %d tries.\n", attempt);
            return;  // Exit the function after a correct guess
        }
        else if (guess < target) {
            printf("Too low. You have %d attempts left.\n", max_attempt - attempt);
        }
        else {
            printf("Too high. You have %d attempts left.\n", max_attempt - attempt);
        }
    }

    printf("Out of attempts! The correct number was %d.\n", target);
}

int main() {
    srand(time(NULL));  // Seed the random number generator

    play_guess_game();  // Correct function call

    return 0;
}
