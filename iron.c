#include <stdio.h>

int main(void)
{
    int x = 4, y = 2, z, multi, div;
    z = x - y;
    multi = x * y;
    div = x / y;
    //print formatted
    printf("\"The truth is... \ni am iron man..\"\n");

    printf("\"The answer is %i\"\n", 100);
    printf("no the true answer is %i - %i which is %i", x, y, z);
    printf("\n곱하기 기호는 *인데 %i랑 %i를 곱하면 %i", x, y, multi);
    printf("\n 나누기 기호는 /인데 %i랑 %i를 나누면 2지 바로 %i", x, y, div);
    return (0);
}