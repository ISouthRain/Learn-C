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