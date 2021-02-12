一 保留字

    用户不能再将这些字作为变量名、常量名、 函数名、数组名等
    数据类型关键字(12个):char、double、enum、 float、int、long、short、signed、struct、union、unsigned 、void。
    控制语句关键字(12个):break、case、continue、 default、do、else、for、goto、if、return、switch、while。
    存储类型关键字(4个):auto、extern、register、 static
    其他关键字(4个):const、sizeof、typedef、volatile
    语言中除了上述的保留字外，还使用一些具有特定含 义的标识符，称为特定字。如include、define、ifdef、ifndef 、endif、line。这些特定标识符主要用在C语言的编译预处 理命令中。

二 符号常量
    符号常量是指用一个标识符代表一个常量
    #define 替换文本 被替换的常量
    例如：
    #define Money 50 
    即 Money=50
    应在开头使用

三 数据类型
    1.整型数据

        1.1 短整型
            short [int] 
            取值范围 -32768～32767

        1.2 带符号短整型
            signed short [int]
            取值范围 -32768～2767

        1.3 无符号短整型
            unsigned short [int]
            取值范围 0～65535

        1.4 整型
            int
            取值范围 -2147483648～2147483647

        1.5 带符号整型
            signed [int]
            取值范围 -2147483648～2147483647

        1.6 带符号整型
            unsigned [int]
            取值范围 0～4294967295

        1.7 长整型
            long [int]
            取值范围 -2147483648～2147483647

		1.8 带符号长整型
			signed long [int]
			取值范围 -2147483648～2147483647

		1.9 无符号长整型
			unsigned long [int]
			取值范围 0～4294967295
	
	2. 整型常量
		
		2.1 十进制整数常量:
			以数字0~9构成，最高位也是就左边第一位不 能为0

		2.2 八进制整型常量:
			以数字0开头，其后再写上要表示的 八进制数。八进制数各位由0~7这八个数字之一组成

		2.3 十六进制整型常量:
			以0X或0x，其后再写上要表示的 十六进制数。十六进制各位由数字0~9或字母a~f或A~F构成 。如0x17，0XCF,-0X1f等。

	3. 整型变量
		整型变量是指其值为整型数据的变量。整型数据有三 种即整型(int)、短整型(short int)和长整型(long int)。 为了方便书写，我们将short int和long int后面的int省略 ，分别用short和long来表示短整型和长整型。	
		3.1 int a;/*定义一个整型变量a*/
		3.2 short d=16;/*定义一个短整型变量d*/
		3.3 long s;/*定义一个长整型变量s*/
		3.4 [signed] int a;/*定义一个带符整型变量a*/
		3.5 unsigned [int] num; /*定义一个无符号整型变量num*/
	
	4. 实数型数据:
		实型数据表示的实际上就是带小数的数值，又称为浮点型数据.
		4.1 单精度实型
			float 
