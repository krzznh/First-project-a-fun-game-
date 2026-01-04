#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int random_no;
    int guessed, no_of_guesses = 0;

    // Seed the random number generator
    srand(time(0));

    // Generate a random number between 1 and 100
    random_no = (rand() % 100) + 1;

    // Using do-while loop so that it runs at least once
    do {
        printf("Guess the number between 1 to 100:\n");
        scanf("%d", &guessed);

        // Hints
        if (guessed > random_no) {
            printf("Lower number please!\n");
        } 
        else if (guessed < random_no) {
            printf("Higher number please!\n");
        } 
        else {
            printf("Got it, Congrats!\n");
        }

        no_of_guesses++;

    } while (guessed != random_no);

    printf("You guessed the number in %d attempts\n", no_of_guesses);

    return 0;
}

/* 
Inspo by CodeWithHarry (not entirely).
Tried this as a first fun project.
Do let me know the feedback!

Insta: @krzznh
Mail: krzznh@gmail.com
*/
