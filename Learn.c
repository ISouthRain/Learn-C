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
		4.1.1 单精度实型
			float
			取值范围 -3.4*10e38~3.4*10e38
			有效数字 6～7

		4.1.2 双精度实型
			double
			取值范围 -1.7*10e308~1.7*10e308
			有效数字 15~16

		4.1.3 长双精度实型
			long double
            取值范围 -1.2*10e4930~1.2*10e4932

        4.2 实数型常量
            4.2.1 指数表示法
                ±尾数部分E(e)±指数部分
                指数形式的表示方法实际等价于:
                ±尾数部分*10±指数部分
                2.3e3等价于12.3*10次方3，0.12E+5等价于 0.12*10次方5
    
    5. 字符型数据
        字符型数据指的是由字母、符号和不用于算术操作的 数字组成，又称为非数值型数据。字符型数据分为
        字符型( char) 取值范围 -128～127
        带符号字符型(signed char) 取值范围 -128～127
        无符号字符( unsigned char) 取值范围 0～255

        5.1 字符型常量
            字符型常量包括由一对单引号括起来的一个字符构成 的一般字符常量和由反斜杠(\)开头的特定的字符序列构成的转义字符。

            5.1.1 一般字符常量
            字符型常量是由一对单引号括起来的一个字符。这个 字符是ASCII字符集中的字符，字符常量的值为该字符的 ASCII值。例如:
            'A'、'x'、'D'、 '?'、'3'、'X'
            5.1.2 转义字符
            转义字符是指由反斜杠(\)开头的特定的字符序列。 C语言允许使用这种特殊形式的字符常量，因为在程序设计 过程中，有一些字符如回车符、退格符、制表符等控制符号 ，不能在屏幕上显示，也不能从键盘上输入，只有用转义字 符来表示。
            
            转义字符	        意义	                            ASCII码值（十进制）
            \a	            响铃(BEL)	                                007
            \b	    退格(BS) ，将当前位置移到前一列	                        008
            \f	    换页(FF)，将当前位置移到下页开头	                    012
            \n	    换行(LF) ，将当前位置移到下一行开头	                    010
            \r	    回车(CR) ，将当前位置移到本行开头	                    013
            \t	            水平制表(HT) 	                            009
            \v	            垂直制表(VT)	                            011
            \'	            单引号	039
            \"	            双引号	034
            \\	            反斜杠	092

    6. 数值型数据间的混合运算
        6.1 自动类型转换
        自动类型转换是由系统自动完成的，又称为隐式转换 。
        不同类型的数值进行运算时，系统会自动将级别低的类型转换成级别高的类型，然后再进行运算，运算结果与其中级 别高的操作数的类型相同
        图====自动类型转换=====
        6.2 强制类型转换
        强制类型转换是利用强制类型转换运算符将安然将数 据类型转换成所需要的类型。强制类型转换符是由一对圆括 号将某个类型名括起来构成的。
        ==强制类型转换==
四 运算符及其表达式
    1 算术运算符及算术表达式
    算术运算符包括基本算术运算符和自增、自减运算符。基本算术运 算符是对数值型也包括字符型数据进行加、减、剩、除的四则运算。
    ==算术运算符==

        1.1 算术运算符
        算术运算符的具体运用原则 :
        +(正)、-(负)运算符是属于同一级别的单目运算符，结 合方向是自右向左。
        +(加)、-(减)运算符是属于同一级别的双目运算符，结 合方向是自左向右。例如a+b-c+d
        *，/，%是同一级别的双目运算符，结合方向是自左向右。 例如:a+b*c，运算顺序是先计算b与c的乘积，然后再与a求和， 即a+(b*c)。
        
        算术运算符注意以下几点: /(除法运算符)的除数不能为0，即不能用一个数去除以0。
        *(乘号运算符)在式子中不能省略，也不能写成是代数式子中的 乘号“×”或“·”。例如:求长方体的体积公式为abc，在编程时要写成
        :a*b*c。
        如果两个整型数相除，得到整型结果。如果两个实数相除或其中有 一个是实数，那么得到结果为实型。例如:
        5/3=1，2/4=0，5/-3=1，5./3=1.666667，5.0/3.0=1.666667
        %求余运算符(或称求模运算)，只适合于整型数据和字符型数据 。求余运算的结果符号与被除数相同，其值等于两数相除后的余数。
        5%3 /* 值为2 */ -7%-3 /* 值为-1 */
        ++、--(自增、自减运算符)属于同一级别的单目运算符，结合方 向是自右向左。自增、自减运算符只能与变量结合使用，放在变量的前 面或者是后面。有以下4种形式:
        ++a:a的值先增加1后，再参与其他运算。 a++:a的值先参与其他运算，再使a的值增加1。 --a:a的值先减小1后，再参与其他运算。 a--:a的值先参与其他运算，再使a的值减小1。 例如:m=3;m1=m++; 等价于m=3; m++; m1=m;

        对于自增、自减运算符，做以下几点说明:
        自增或自减函数只能用于变量，不能用于常量或表达式。例如: (a+b)++这样的表示方法是错误的。
        在一个表达式中对一个变量自增或自减多次，可能造成困惑。 a=3;k=(++a)+(++a);这种程序很容易出错，在编程的过程中要避免使用 这样的程序，而且也没有必要使用如此难懂的程序，完全可以使用另一 种方法来表示，增加程序的可读性。
        ++、--运算符的结合方向是自右向左，如:-i++等价于-(i++)。
        ++、--运算符的优先级大于乘、除、求余的优先级。
        ++、--运算符运算的操作对象只能为整型变量、字符型变量和指针 变量，而不能是其他类型的变量。
        ++、--运算符运算常用于循环变量中，是循环变量自动加1或减1; 也可用于指针变量，是指针指向前一个或后一个地址。

        2.1 赋值运算符
            ==赋值运算符==
        
        3.1 关系运算符
            ==关系运算符==
            关系运算符是用来比较两个运算量大小的运算符，实 际上就是一种“比较运算”，运算的结果只能是“1”或“0”。当 两者的比较关系成立的时候，结果为“1”;当两者的比较关 系不成立的时候，结果为“0”，因此关系运算符的结果类型 为整型。
            对关系运算符进行以下几点说明:
            关系运算符的优先级别比算术运算符的级别低，但比赋值运 算符的级别高。
            关系运算符用于比较的两个运算量的类型为整型、字符型等，也可以连接两个表达式，比较的结果是一个逻辑量，即“真”或“假”， 在C语言中没有逻辑型数值，分别用整数1和0表示。
            关系运算符的结合方向是从左向右，因此当一个表达式中出 现优先级相等的关系运算符时，从左向右开始运算。
            在关系运算符用“= =”表示等于，用“!=”表示不等于，这与数 学中的表示方法完全不同，因此在编程中要特别注意，以免写错关系运 算符而导致错误的结果。

        3.2 关系表达式
            用关系运算符将两个表达式连接起来构成的式子称为 关系表达式。一般的书写形式如下:
            表达式 关系运算符 表达式
            例如：‘A’>(c=’a’)
            该关系表达式中的表达式为赋值表达式，将字符’a’赋 值给变量c，即‘A’>’a’， ‘A’的ASCII值为65，’a’的ASCII值为 97，即65>97，关系不成立，关系运算的结果为0。

        4.1 逻辑运算符
            逻辑运算符是对两个含有关系运算符的表达式或逻辑 值进行的运算符号，运算的结果为逻辑值。
            ==逻辑运算符==
            对逻辑运算符作以出几点说明:
                (1)“&&”和“||”是双目运算，需要两个操作数，如 a&&b，a||b。而“!”是单目运算符，只需要一个操作数， 如!a。
                (2)逻辑非的优先级高于逻辑与的优先级，而逻辑与 的优先级又高于逻辑非的优先级。
                ==三个逻辑运算符的优先级==