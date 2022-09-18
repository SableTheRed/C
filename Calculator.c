#include <stdio.h>


int guess(x) {
    
    printf("guess a number between 1 and 100\n");
    int inpt;
    scanf("%d", &inpt)

    if (inpt>x)
        printf("Your guess is too high!\n");
        return 1;
    else-if (inpt < x)
        printf("Your guess is too low!\n");
        return 1;

    
    else
        printf("Correct! The number was %d\n", x);
        return 0;

}


int main() {
    int x;
    // x = random number (1-100)
    x = 16;
    int count = 0;
    int guessed;
    guessed = 1;
    printf("Welcome to the number guessing game!\n");
    while (guessed == 1){
        guessed = guess(x);
        count = (count + 1);
    }
    printf("This took you %d guesses", &count);
    return 0;
}