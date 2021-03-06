#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	float f = 5.5;
//	//101.1    二进制
//	//(-1)^0*1.011*2^2
//	//S=0 M=1.011 E=2
//	//E+127=2+1267=129   129的二进制是 10000001
//	//011 M的小数位：补全23位后是：01100000000000000000000
//	//组合在一起是：
//	//0 10000001 01100000000000000000000
//	//01000000101100000000000000000000
//	//40b00000  16进制
//	return 0;
//}


int main()
{
	int n = 9;
	//00000000 00000000 00000000 00001001  补码（正数的原码=反码=补码）
	float *pFloat = (float*)&n;
	//0 00000000 0000000000000000000001001
	//(-1)^0*0.0000000000000000000001001*2^(1-127)=(-1)^0*0.0000000000000000000001001*2^126      这个数非常小，接近于0，所以打印出0.000000
	printf("n的值为：%d\n", n);//打印9   以整型存进去，以整型取出，不会变化
	printf("pFloat的值为：%f\n", *pFloat);//打印0.000000

	*pFloat =9.0;
	//1001.0 二进制
	//1.001*2^3
	//(-1)^0*1.001*2^3
	//E=3 E+127=E+127=130  130的二进制位是：10000010
	//0 10000010 00100000000000000000000  
	printf("n的值为：%d\n", n);//打印1091567616
	//01000001 00010000 00000000 00000000   这是补码也是原码（以整型%d打印，内存里面存的是补码，又因为符号位是0 ，所以是正数，正数的原码=反码=补码）
	//01000001 00010000 00000000 00000000的十进制是1091567616
	printf("pFloat的值为：%f\n", *pFloat);//9.0   以浮点型存进去，以浮点型取出，不会变化

	return 0;
}
