#include <stdio.h>

int main(void) {
    int score = 50;         
    printf("Start score = %d\n", score);
    
    // += adds to the current value
    score += 20;                 
    printf("After += 20 -> %d\n", score);
    
    // -= subtracts from the current value
    score -= 10;                 
    printf("After -= 10 -> %d\n", score);
    
    // *= multiplies the current value
    score *= 3;                  
    printf("After *= 3  -> %d\n", score);
    
    // /= divides the current value 
    score /= 5;                  
    printf("After /= 5  -> %d\n", score);

    // Final value
    printf("Final score = %d\n", score); 

    return 0;
}
