
#include<stdio.h>
int main(void)
{
	int money, price;
	int sum = 0;
	printf("请输入你要买的商品的价格");
	scanf_s("%d", &price);
	printf("你要付款的金额为%d元（投入的面值应为1、2或5元）\n", price);
	while (sum < price)
	{

		scanf_s("%d", &money);
		if (money == 1 || money == 2 || money == 5)
			sum += money;
		else
			printf("你投入的金额不符合规定，请投入面值为1、2或5元的硬币:\n");


	}
	printf("您已经购买成功，这是您的找零%d元", sum - price);

	return 0;

}
