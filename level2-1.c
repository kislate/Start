
/*δ������⣺��ͬͨ����ͬ����ȴ��ͬ��Ǯ��ô����*/
#include<stdio.h>
#include<string.h>
#include<stdbool.h>
enum { PUT, CHOOSE, PAY };/*�ƺ�ûɶ�ã�Ŀǰ������о�ûɶ�ã�*/
int main()
{
    char goods[6];
    int rq_money = 0;
    int price[6] = { 0 }, sum[6] = { 0 };/*���ֻ����Ǯ,ͨ���ڵĻ�������*/
    int state = PUT;/*������ĳ�ʼ״̬�Ƿ�����Ʒ��������Ҫ����ѡ���*/
    int max = 50;/*tmd��ԭ����ĿҪ������*/
    switch (state)
    {
    case PUT:/*��Ϊ������Ʒ*/
    {
        while (1)/*�ظ�������Ʒ*/
        {
            int num, cha, pr;/*����������ͨ�����ͼ�Ǯ*/
            char gds;/*��Ʒ��*/
        top:printf("��ֱ�������Ҫ�ŵ���Ʒ���ƣ������ͨ���������Ǯ��������\n");
            scanf_s(" %c" "%d" "%d" "%d", &gds, 3, &cha, &pr, &num);
            if (sum[cha] + num > max) {
                printf("�˻��ܵ���Ʒֻ���ٷ���%d�������������ô�����Ʒ�������¿�ʼ\n", (max - sum[cha]));
                goto top;
            }
            if (cha < 1 || cha>5)
            {
                printf("�������ͨ����Ӧ����1-5֮�䣬�����¿�ʼ��\n");
                goto top;
            }
            if (sum[cha] != 0 && goods[cha] != gds)/*md��Ϊʲô���������Ǳ�������ͷ������Ҫ�����Դ��ˣ���*/
            {
                printf("������Ļ������ԭ�еĻ��ﲻһ���������¿�ʼ��\n");
                goto top;
            }
            if (sum[cha] != 0 && price[cha] != pr)
            {
                printf("��������ļ�Ǯ��һ�����������Ǯ��С�ϵ�\n");
                goto top;
            }
            //if (gds == goods[0] || gds == goods[1] || gds == goods[2] || gds == goods[3] || gds == goods[4])
            //{
            //    if pr!=
            //}
            price[cha] = pr;
            goods[cha] = gds;
            sum[cha] += num;



            char c[20];
            printf("�����Ҫ�����ڷţ����䡮END���Խ��빺��ģʽ�����Ҫ�����ڷţ����롮CONTINUE'���·������'\n");
        top2:scanf_s(" %s", c, 20);/*��%s�������˰���%c.......*/
            while (getchar() != '\n');/*û�еĻ�ǰ���ð��һ�Ѷ�����������������*/
            if (strcmp(c, "END") == 0)
            {
                int i;
                for (i = 1;i < 6;i++)
                    printf("��%d��ͨ������Ļ�����%c,һ����%d������ǮΪ%dԪ\n", i, goods[i], sum[i], price[i]);
                break;
            }
            else if (strcmp(c, "CONTINUE") == 0) continue;
            else {
                printf("���������ʲô������������һ��'END or CONTINUE'\n");
                goto top2;
            }
        }
    case CHOOSE:/*ѡ����Ļ���*/ {
        printf("��������ѡ�����ǵ���Ʒ�ɣ�");
        while (1) {
            char gds;
            int  cha, num;
        top3:printf("��ֱ�������Ҫ�������Ʒ����ͨ���ź͹������\n");
            scanf_s(" %c" "%d" "%d", &gds, 3, &cha, &num);
            if (cha < 1 || cha>5)
            {
                printf("û�д�ͨ�������Ҵ��ˣ�������ѡ��\n");
                goto top3;
            }

            if (num > sum[cha]) {
                printf("ʣ����Ʒ����%d����������ѡ��\n", num);
                goto top3;
            }
            if (gds == goods[cha]) {
                sum[cha] -= num;
                rq_money += price[cha] * num;
            }
            else {
                printf("û���ҵ�����Ҫ����Ʒ��������Ҫ����Ʒ��ͨ���Ƿ�ƥ��\n");
                goto top3;
            }
            if (sum[1] + sum[2] + sum[3] + sum[4] + sum[5] == 0) {
                printf("���Ѿ���������Ʒѡ���ˣ�û����ѡ�ˣ������㱾��Ҫ����Ǯ%dԪ\n", rq_money);
                break;
            }
            printf("������Ѿ�ѡ����Ʒ��Ҫ�ύ����������END����֮����CONTINUE\n");
            char c[20];
            while (getchar() != '\n');
        top4:scanf_s(" %s", c, 20);
            if (strcmp(c, "END") == 0) {
                printf("���ܹ���Ҫ����ǮΪ%d\n", rq_money);
                break;
            }
            else if (strcmp(c, "CONTINUE") == 0) continue;
            else {
                printf("���������ʲô������������һ��\n");
                goto top4;
            }

        }
    }
    case PAY: {
        int SUM;
        SUM = 0;
        printf("��Ͷ������Ӳ�ң�������1��2��5Ԫ��ֵ��Ӳ�ң���\n");
        while (SUM < rq_money)
        {
            int money;
            scanf_s("%d", &money);
            if (money == 1 || money == 2 || money == 5)
                SUM += money;
            else
                printf("��Ͷ��Ľ����Ϲ涨����Ͷ����ֵΪ1��2��5Ԫ��Ӳ��:\n");

        }
        printf("���Ѿ�����ɹ���������������%dԪ\n", SUM-rq_money);
        rq_money = 0;
        if (sum[1] + sum[2] + sum[3] + sum[4] + sum[5] == 0) {
            printf("���еĻ��������ˣ��ȴ��´β�����\n");
            goto down;
        }
        printf("�����Ҫ�����������롮1����֮���롮2��\n");
        int a;
        scanf_s(" %d", &a);
        if (a == 1) {
            printf("�õ�\n");
            goto top3;
        }
        else printf("лл���Ļݹ�!!!\n");//������ֹ�������ˡ�
    down:printf("лл����\n");
    }
    }//case e1������
    }//switch������

}