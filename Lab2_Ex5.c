#include <stdio.h>

int main(void) {
    int score = 50;         // start at 50
    printf("Start score = %d\n", score);

    score += 20;            // add 20 (score = score + 20) -> 70
    printf("After += 20  -> %d\n", score);

    score -= 10;            // subtract 10 (score = score - 10) -> 60
    printf("After -= 10  -> %d\n", score);

    score *= 3;             // multiply by 3 (score = score * 3) -> 180
    printf("After *= 3   -> %d\n", score);

    score /= 5;             // divide by 5 (integer division) -> 36
    printf("After /= 5   -> %d\n", score);

    // Required output: print the final value of score
    printf("\nFinal score = %d\n", score);

    return 0;
}
