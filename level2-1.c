
/*未解决问题：不同通道相同货物却不同价钱怎么处理？*/
#include<stdio.h>
#include<string.h>
#include<stdbool.h>
enum { PUT, CHOOSE, PAY };/*似乎没啥用（目前在我这感觉没啥用）*/
int main()
{
    char goods[6];
    int rq_money = 0;
    int price[6] = { 0 }, sum[6] = { 0 };/*五种货物，价钱,通道内的货物数量*/
    int state = PUT;/*货物机的初始状态是放入物品（或许需要开机选项？）*/
    int max = 50;/*tmd，原来题目要求有了*/
    switch (state)
    {
    case PUT:/*此为放入物品*/
    {
        while (1)/*重复放入商品*/
        {
            int num, cha, pr;/*放入数量，通道，和价钱*/
            char gds;/*货品名*/
        top:printf("请分别输入你要放的物品名称，放入的通道，及其价钱和数量：\n");
            scanf_s(" %c" "%d" "%d" "%d", &gds, 3, &cha, &pr, &num);
            if (sum[cha] + num > max) {
                printf("此货架的物品只能再放下%d个，不足放下这么多的物品，请重新开始\n", (max - sum[cha]));
                goto top;
            }
            if (cha < 1 || cha>5)
            {
                printf("您输入的通道数应该在1-5之间，请重新开始：\n");
                goto top;
            }
            if (sum[cha] != 0 && goods[cha] != gds)/*md，为什么你这行老是报错，啊，头好痒，要好像长脑袋了？！*/
            {
                printf("您输入的货物和其原有的货物不一样，请重新开始：\n");
                goto top;
            }
            if (sum[cha] != 0 && price[cha] != pr)
            {
                printf("几次输入的价钱不一样，你是想坑钱吗，小老弟\n");
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
            printf("如果你要结束摆放，请输‘END’以进入购买模式；如果要继续摆放，输入‘CONTINUE'重新放入货物'\n");
        top2:scanf_s(" %s", c, 20);/*用%s啊！用了半天%c.......*/
            while (getchar() != '\n');/*没有的话前面会冒出一堆东西，缓存区存在有*/
            if (strcmp(c, "END") == 0)
            {
                int i;
                for (i = 1;i < 6;i++)
                    printf("第%d个通道放入的货物是%c,一共有%d个，价钱为%d元\n", i, goods[i], sum[i], price[i]);
                break;
            }
            else if (strcmp(c, "CONTINUE") == 0) continue;
            else {
                printf("您输入的是什么鬼，请重新输入一遍'END or CONTINUE'\n");
                goto top2;
            }
        }
    case CHOOSE:/*选择购买的货物*/ {
        printf("下面来挑选你心仪的商品吧！");
        while (1) {
            char gds;
            int  cha, num;
        top3:printf("请分别输入你要购买的商品名，通道号和购买个数\n");
            scanf_s(" %c" "%d" "%d", &gds, 3, &cha, &num);
            if (cha < 1 || cha>5)
            {
                printf("没有此通道，你找错了，请重新选择\n");
                goto top3;
            }

            if (num > sum[cha]) {
                printf("剩余物品不足%d个，请重新选择\n", num);
                goto top3;
            }
            if (gds == goods[cha]) {
                sum[cha] -= num;
                rq_money += price[cha] * num;
            }
            else {
                printf("没有找到你需要的物品，请检查您要的物品和通道是否匹配\n");
                goto top3;
            }
            if (sum[1] + sum[2] + sum[3] + sum[4] + sum[5] == 0) {
                printf("你已经把所有物品选完了，没得再选了，这是你本次要付的钱%d元\n", rq_money);
                break;
            }
            printf("如果你已经选好商品，要提交订单请输入END，反之输入CONTINUE\n");
            char c[20];
            while (getchar() != '\n');
        top4:scanf_s(" %s", c, 20);
            if (strcmp(c, "END") == 0) {
                printf("您总共需要付的钱为%d\n", rq_money);
                break;
            }
            else if (strcmp(c, "CONTINUE") == 0) continue;
            else {
                printf("您输入的是什么鬼，请重新输入一遍\n");
                goto top4;
            }

        }
    }
    case PAY: {
        int SUM;
        SUM = 0;
        printf("请投入您的硬币（仅限于1，2，5元面值的硬币）：\n");
        while (SUM < rq_money)
        {
            int money;
            scanf_s("%d", &money);
            if (money == 1 || money == 2 || money == 5)
                SUM += money;
            else
                printf("你投入的金额不符合规定，请投入面值为1、2或5元的硬币:\n");

        }
        printf("您已经购买成功，这是您的找零%d元\n", SUM-rq_money);
        rq_money = 0;
        if (sum[1] + sum[2] + sum[3] + sum[4] + sum[5] == 0) {
            printf("所有的货物卖完了，等待下次补货。\n");
            goto down;
        }
        printf("如果需要继续购买输入‘1’反之输入‘2’\n");
        int a;
        scanf_s(" %d", &a);
        if (a == 1) {
            printf("好的\n");
            goto top3;
        }
        else printf("谢谢您的惠顾!!!\n");//程序终止，不玩了。
    down:printf("谢谢光临\n");
    }
    }//case e1的括号
    }//switch的括号

}