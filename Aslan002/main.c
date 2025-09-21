#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");


    unsigned int u = UINT_MAX;
    printf("Initial unsigned int value: %u\n", u);

    u = u + 1;
    printf("After adding 1 (wrap-around): %u\n", u);

    float bigFloat = 1.0020f;
    printf("\nBig float value: %.1f\n", bigFloat);
    printf("Big float + 1.0: %.1f\n", bigFloat + 1.0f);


    return 0;
}
