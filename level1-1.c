#include<stdio.h>
int main(void)
{
    char name;
    int cha, price, num;
    printf("请分别输入你要放的货物种类、通道、货物的价钱和数量:\n");
    scanf_s("%c" "%d" "%d" "%d", &name, (unsigned)40, &cha, &price, &num);
    printf("%d: ", cha);
    int i = 1;
    while (i <= num)
    {
        printf("%c", name);
        i++;
    }
    printf(" %d", price);
    return 0;
}
