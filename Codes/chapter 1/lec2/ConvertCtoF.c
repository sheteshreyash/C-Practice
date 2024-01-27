// to convert celcius to ferneheit

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int celc;
    printf("Enter Value in Degree Celcius : ");
    scanf("%d", &celc);
    int fer = (celc * 1.8 ) + 32;

    printf("value in degree fehrenheit is : %d", fer);
    return 0;
}
