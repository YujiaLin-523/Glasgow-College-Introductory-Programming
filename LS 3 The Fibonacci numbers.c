//Program Name:The Fibonacci numbers
//Purpose:Generate the Fibonacci numbers //Name:Lin Yujia
#include <stdio.h>
int Fibonacci (int n,int size)
{
    int arr[size];
    arr[0]=0;
    arr[1]=1;
    int result;
    for (int i = 2; i <= size; i++)
    {
        arr[i] = arr[i-1]+arr[i-2];
    }
    result = arr [n];
    printf("When n=%d,the Fibonacci number is %d.\n",n,result);
}

int main()
{
    Fibonacci(10,100);
    Fibonacci(20,100);
    Fibonacci(50,100);

    getchar();
    return 0;
}
/*The result of n=50 is a minus number -298632863.That is because the "int" varibles can't store such a big number.*/