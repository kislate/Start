﻿//#include <stdio.h>
//int main()|
//{
//    int day = 0;
//    scanf_s("%d", &day);
//    switch (day)     //语句开始
//    {
//        case 1:       //第一个分支
//            printf("星期一\n");
//            break;
//
//        case 2:          //第二个分支
//            printf("星期⼆\n");
//            break;
//
//        case 3:          //第三个分支
//            printf("星期三\n");
//            break;
//
//        case 4:          //第四个分支
//            printf("星期四\n");
//            break;
//
//        case 5:         //第五个分支
//            printf("星期五\n");
//            break;     //结束语句
//
//        case 6:          //第六个分支
//            printf("星期六\n");
//            break;       //结束语句
//
//        case 7:          //第七个分支
//            printf("星期天\n");
//            break;    //如果输入的是7那么程序就会重case进入再重break结束。
//
//
//        default:   
//            printf("输入错误\n");
//            break;
//    }
//    return 0;
//}



//#include<stdio.h>
//int main(void)
//{
//    char name;
//    int cha, price, num;
//    printf("请分别输入你要放的货物种类、通道、货物的价钱和数量");
//    scanf_s("%c" "%d" "%d" "%d", &name, (unsigned)40, &cha, &price, &num);
//    printf("%d: ", cha);
//    int i = 1;
//    while (i <= num)
//    {
//        printf("%c", name);
//        i++;
//    }
//    printf(" %d", price);
//    return 0;
//}

//#include<stdio.h>
//int main(void)
//{
//	int money, price;
//	int sum = 0;
//	printf("请输入你要买的商品的价格");
//	scanf_s("%d", &price);
//	printf("你要付款的金额为%d元（投入的面值应为1、2或5元）\n", price);
//	while (sum < price)
//	{
//
//		scanf_s("%d", &money);
//		if (money == 1 || money == 2 || money == 5)
//			sum += money;
//		else
//			printf("你投入的金额不符合规定，请投入面值为1、2或5元的硬币:\n");
//
//
//	}
//	printf("您已经购买成功，这是您的找零%d元", sum - price);
//
//	return 0;
//
//}




//#include<stdio.h>
//int main(void)
//{
//    char name,name2;
//    int cha, price, num1, money, cha2;
//    int num2;
//    printf("请分别输入你要放的货物种类、通道、货物的价钱和数量:\n");
//    scanf_s("%c" "%d" "%d" "%d", &name, (unsigned)40, &cha, &price, &num1);
//    printf("请输入你要买的货物种类、通道数和购买数量：\n");
//    scanf_s(" %c" "%d" "%d", &name2, (unsigned)40, &cha2, &num2);
//    int rq_price = price * num2;
//    printf("%d", rq_price);
//    int sum = 0;
//    printf("你要付款的金额为%ld元（投入的面值应为1、2或5元）\n", rq_price);
//    while (sum < rq_price)
//    {
//
//        scanf_s("%d", &money);
//        if (money == 1 || money == 2 || money == 5)
//            sum += money;
//        else
//            printf("你投入的金额不符合规定，请投入面值为1、2或5元的硬币:\n");
//
//    }
//    	
//    	printf("您已经购买成功，这是您的找零%d元", sum-rq_price);
//    
//    	return 0;
//}



//#include<stdio.h>
//int main(void)
//{
//    char name, name2;
//    int cha, price, num1, money, cha2,num2,sum;
//    int rq_price;
//    printf("请分别输入你要放的货物种类、通道、货物的价钱和数量:\n");
//    scanf_s("%c" "%d" "%d" "%d", &name, (unsigned)40, &cha, &price, &num1);
//    printf("请输入你要买的货物种类、通道数和购买数量：\n");
//    top:scanf_s(" %c" "%d" "%d", &name2, (unsigned)40, &cha2, &num2);
//    if (num2 <= num1)
//    {
//        rq_price = price * num2;
//        printf("%d", rq_price);
//        sum = 0;
//        printf("你要付款的金额为%ld元（投入的面值应为1、2或5元）\n", rq_price);
//        while (sum < rq_price)
//        {
//
//            scanf_s("%d", &money);
//            if (money == 1 || money == 2 || money == 5)
//                sum += money;
//            else
//                printf("你投入的金额不符合规定，请投入面值为1、2或5元的硬币:\n");
//
//        }
//        printf("您已经购买成功，这是您的找零%d元\n", sum - rq_price);
//        num1 = num1 - num2;
//    }
//    else
//        printf("你要买的货物不足%d个,请再次输入您的需求：\n",num2);
//        goto top;
//
//    return 0;
//}


//#include<stdio.h>
//int main(void)
//{
//    char name, name2;
//    int cha, price, num1, money, cha2, num2, sum;
//    int rq_price;
//    printf("请分别输入你要放的货物种类、通道、货物的价钱和数量:\n");
//    scanf_s("%c" "%d" "%d" "%d", &name, (unsigned)40, &cha, &price, &num1);
//    while (num1 > 0) {
//        printf("请输入你要买的货物种类、通道数和购买数量：\n");
//    top:scanf_s(" %c" "%d" "%d", &name2, (unsigned)40, &cha2, &num2);
//        if (num2 <= num1)
//        {
//            rq_price = price * num2;
//            printf("%d", rq_price);
//            sum = 0;
//            printf("你要付款的金额为%ld元（投入的面值应为1、2或5元）\n", rq_price);
//            while (sum < rq_price)
//            {
//
//                scanf_s("%d", &money);
//                if (money == 1 || money == 2 || money == 5)
//                    sum += money;
//                else
//                    printf("你投入的金额不符合规定，请投入面值为1、2或5元的硬币:\n");
//
//            }
//            printf("您已经购买成功，这是您的找零%d元\n", sum - rq_price);
//            num1 = num1 - num2;
//        }
//        else 
//        {   printf("你要买的货物不足%d个,请再次输入您的需求：\n", num2);
//            goto top;
//        }
//    }
//    printf("此通道中的货物已经不足，无法再进行购买");
//    return 0;
//}


#include<stdio.h>
int main(void)
{
    char name, name2;
    int cha, price, num1, money, cha2, num2, sum;
    int rq_price;
    printf("请分别输入你要放的货物种类、通道、货物的价钱和数量:\n");
    scanf_s("%c" "%d" "%d" "%d", &name, (unsigned)40, &cha, &price, &num1);
    while (num1 > 0) {
        printf("请输入你要买的货物种类、通道数和购买数量：\n");
    top:scanf_s(" %c" "%d" "%d", &name2, (unsigned)40, &cha2, &num2);
        if (name2 == name && cha2 == cha)
        {
            if (num2 <= num1)
            {
                rq_price = price * num2;
                sum = 0;
                printf("你要付款的金额为%ld元（投入的面值应为1、2或5元）\n", rq_price);
                while (sum < rq_price)
                {

                    scanf_s("%d", &money);
                    if (money == 1 || money == 2 || money == 5)
                        sum += money;
                    else
                        printf("你投入的金额不符合规定，请投入面值为1、2或5元的硬币:\n");

                }
                printf("您已经购买成功，这是您的找零%d元\n", sum - rq_price);
                num1 = num1 - num2;
                printf("如果需要继续购买输入‘1’反之输入‘2’\n");
                int a;
                scanf_s(" %d", &a);
                if (a == 1)
                    printf("好的,");

                else
                    goto down;
                

            }
            else
            {
                printf("你要买的货物不足%d个,请再次输入您的需求：\n", num2);
                goto top;
            }
        }
        else
            printf("没有找到你需要的物品\n");
    }
    printf("此通道中的货物已经不足，无法再进行购买");
down:printf("好的，谢谢你的惠顾！");
    return 0;
}