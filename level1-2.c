//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//
//int main(void) 
//{   
//	int money,price;
//	int sum=0;
//	printf("Please enter the price of the goods");
//	scanf_s("%d", &price);
//	printf("��Ҫ����Ľ��Ϊ%dԪ��Ͷ�����ֵӦΪ1��2��5Ԫ��\n", price);
//	while (sum < price)
//	{
//		
//		scanf_s("%d", &money);
//		if (money == 1)
//			sum += money;
//		else if (money == 2)
//			sum += money;
//		else if (money == 5)
//			sum += money;
//		else
//			printf("��Ͷ��Ľ����Ϲ涨����Ͷ����ֵΪ1��2��5Ԫ��Ӳ��:\n");
//
//
//	}
//	printf("���Ѿ�����ɹ���������������%dԪ", sum - price);
//
//	return 0;
//
//}

///*��do while�����ʵ��*/
//#include<stdio.h>
//int main()
//{
//    int price, a, c;
//    int b = 0;
//    printf("Please enter the price.\n");
//    scanf_s("%d", &price);
//    do {
//        printf("Pleaes enter a number between 1,2 and 5.\n");//Please insert cions.
//        scanf_s("%d", &a);
//        b = b + a;
//    } while (b < price);
//    c = b - price;
//    printf("����%d", c);//����cԪ
//    return 0;
//}



#include<stdio.h>
int main(void)
{
	int money, price;
	int sum = 0;
	printf("��������Ҫ�����Ʒ�ļ۸�");
	scanf_s("%d", &price);
	printf("��Ҫ����Ľ��Ϊ%dԪ��Ͷ�����ֵӦΪ1��2��5Ԫ��\n", price);
	while (sum < price)
	{

		scanf_s("%d", &money);
		if (money == 1 || money == 2 || money == 5)
			sum += money;
		else
			printf("��Ͷ��Ľ����Ϲ涨����Ͷ����ֵΪ1��2��5Ԫ��Ӳ��:\n");


	}
	printf("���Ѿ�����ɹ���������������%dԪ", sum - price);

	return 0;

}
