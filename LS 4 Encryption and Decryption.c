#include <stdio.h>

struct Words
{
    int a;
    int b;
};

int password[10000];

struct Words transfer(int i)
{
    struct Words m;
    m.a = i >> 8;
    m.b = i ^ (m.a << 8);
    return m;
}

int main()
{
    int n = 1;
    printf("Please type the password and end with any letter:\n");
    while (scanf("%d", &password[n]) != 0)
    {
        password[n] ^= 31337;
        n++;
    }
    getchar();
    for (int i = 0; i < n; i++)
    {
        struct Words word = transfer(password[i]);
        printf("%c%c", (char)word.a, (char)word.b);
    }
    getchar();
    getchar();
    return 0;
    
}
