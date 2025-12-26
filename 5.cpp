#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0));  // seed random number
    int secret = rand() % 10 + 1;  // random number 1–10
    int guess;

    printf("Guess the number (1-10): ");
    scanf("%d", &guess);

    if (guess == secret) {
        printf("🎉 Correct! The number was %d\n", secret);
    } else {
        printf("❌ Wrong! The number was %d\n", secret);
    }

    return 0;
}