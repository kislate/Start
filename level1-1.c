#include<stdio.h>
int main(void)
{
    char name;
    int cha, price, num;
    printf("��ֱ�������Ҫ�ŵĻ������ࡢͨ��������ļ�Ǯ������");
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