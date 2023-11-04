// Program Name:Size of varibles
// Purpose: Prints a Floating-point number // Your name:Lin Yujia
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>
int main(int argc, char** argv) {
printf("Storage size for int in bytes: %d \n", sizeof(int));
printf("Storage size for float in bytes: %d \n",
sizeof(float));
printf("Storage size for long in bytes: %d \n",
sizeof(long));
printf("Storage size for short in bytes: %d \n",
sizeof(short));
printf("Storage size for double in bytes: %d \n",
sizeof(double));
printf("Storage size for char in bytes: %d \n \n \n",
sizeof(char));
printf("Maximum value of float: %g\n", (float) FLT_MAX);
printf("Minimum value of float: %g\n", (float) FLT_MIN);
printf("Maximum value of int: %d\n", INT_MAX);
printf("Minimum value of int: %d\n", INT_MIN);
printf("Maximum value of long: %ld\n", (long) LONG_MAX);
printf("Minimum value of long: %ld\n", (long) LONG_MIN);
printf("Maximum value of short: %d\n", SHRT_MAX);
printf("Minimum value of short: %d\n", SHRT_MIN);
printf("Minimum value of double: %g\n", (double) DBL_MAX);
printf("Minimum value of double: %g\n", (double) DBL_MIN);
printf("Maximum value of unsigned char: %d\n", UCHAR_MAX);
printf("Maximum value of unsigned int: %u\n", (unsigned int)
UINT_MAX);
printf("Maximum value of unsigned long: %lu\n", (unsigned
long) ULONG_MAX);
printf("Maximum value of unsigned short: %d\n", (unsigned
short) USHRT_MAX);
getchar();
return 0;
}