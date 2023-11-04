// Program Name:Compute the volume
// Purpose:Compute the volume of the box //Name:Lin Yujia
#include <stdio.h>
int main()
{
    int height = 4;
    int width = 6;
    int length = 5;

    int volume = length * width * height;
    int weight = volume / 1.5;

    printf("The total volume:%d\n", volume);
    printf("Total Weight:%d\n", weight);

    getchar();
    return 0;
}