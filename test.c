#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include<pthread.h>

//123
int main(void)
{
	int money=2,number=0,lossMoney=0,makeMoney=0,needMoney,winMoney=0;
	int a;
	scanf("%d",&needMoney);
	for(a=1;a<17;a++)
	{
		number=money/2;
		winMoney=number*5;
		if(winMoney<10000)
		{
			makeMoney=winMoney-money-lossMoney;
		}
		else 
		{
			makeMoney=winMoney-(winMoney*0.2)-money-lossMoney;
		}
		lossMoney=money+lossMoney;
		if((makeMoney<needMoney)&&(needMoney-makeMoney)>3)
		{
			money+=money;
		}
		else
		{
			money=(lossMoney+needMoney)/1.5;
		}
		printf("%d：金额:%d,注数:%d,奖金金额:%d,中奖则赚:%d,未中奖则亏损:%d\n",a,money,number,winMoney,makeMoney,lossMoney);
	}
	return 0;
}
