print 默认输出后 换行

float  浮点类型存储不精确性（即不知到你要小数点多少位）解决方案：
导入模块 decimal：
from decimal import Decimal
print(Decimal('1.1')+Decimal('2.2'))  #1.1+2.2=3.3

数据类型转换： 注意事项看图 #数据类型转换
str() 将其他类型转换为 字符类型
int() 将其他类型转换为 整形类型
float() 将其他类型转换为 浮点类型
age=10
name=Jack
print('我叫'+name+'今年'+age+'岁') #错误示范
print('我叫',name,'今年',age,'岁') #正确示范，但有空格
print('我叫'+name+'今年'+str(age)+'岁') #正确示范 将 age 的 int 类型转换为 str 类型才能使用

使用 input 函数时注意的事项 输入的值为 字符串类型：见图# 使用input函数时注意的事项
可以使用 数据类型转换 后再运算 见图# 使用input函数时注意的事项1 使用input函数时注意的事项2

算数运算符 遇到 一正一负 见图# 算数运算符  算数运算符1
视频 P22 7：30 开始
