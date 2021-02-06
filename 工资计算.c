#include <stdio.h>
int main()
{
		int zcts,zmts,a,b,c,d;
		printf("请输入正常工作天数（非周末）:");
		scanf("%d",&zcts);
		printf("请输入周末上班天数：");
		scanf("%d",&zmts);
		a=2200;//基本工资
		b=zcts*18.97*2.5;//正常工作加班费
		c=zmts*25.29*10.5;//周末加班费
		d=a+b+c;//总工资
		printf("总工资为：%d",d);
		return 0;
}
