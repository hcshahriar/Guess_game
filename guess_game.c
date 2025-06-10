#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int randomNumber, guess, attempts = 0;
    
    srand(time(0));
   
    randomNumber = rand() % 100 + 1;
    
    printf("Welcome to the Number Guessing Game!\n");
    printf("I've selected a number between 1 and 100. Try to guess it!\n\n");
    
    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;
        
        if (guess > randomNumber) {
            printf("Too high! Try again.\n");
        } else if (guess < randomNumber) {
            printf("Too low! Try again.\n");
        } else {
            printf("\nCongratulations! You guessed the number in %d attempts!\n", attempts);
        }
    } while (guess != randomNumber);
    
    return 0;
}
