1 基本数据类型
	int 整型
	float 浮点型
	char 字符——一个字节 
	short 短整型
	long 长整型
	double 双精度浮点型

2 while
	while(条件){

	}//while 循环语句的执行方式是这样的:首先测试圆括号中的条件;如果条件为真，则执行循环体;然后再重新测试圆括号中的条件，如果为真，则再次执行循环体;当圆括号中的条件测试结果为假(fahr>upper)时， 循环结束，并继续执行跟在 while 循环语句之后的下一条语句。
3 printf
	printf("%数据参数 显示的文字");
	%d 按照十进制整型数打印
	%6d 按照十进制整型数打印，至少 6 个字符宽
	%f 按照浮点数打印
	%6f 按照浮点数打印，至少 6 个字符宽
	%.2f 按照浮点数打印，小数点后有两位小数
	%6.2f 按照浮点数打印，至少 6 个字符宽，小数点后有两位小数
	%o 表示八进制数
	%x 表示十六进制数
	%c 表示字符
	%s 表示字符串
	%% 表示百分号(%)本身

4 for
	for(a==0/*初始化部分*/;a<=100/*初始化部分*/;a++/*增加步长部 分*/){

	}//但凡有条件都不报错

5 #define 名字 替换文本
	#define wo 100
	//等于wo=100
	//替换文本可以是数据也可以是文字也可以是英文
	使用一定要在前面头文件后面开始定义
	#define 指令行的末尾没有分号(;)。

6 getchar 和 putchar //字符输入和字符输出函数
	int c;
	c = getchar();
	putchar(c);
	//这样就可以输入什么字符就可以输出什么字符
7 
