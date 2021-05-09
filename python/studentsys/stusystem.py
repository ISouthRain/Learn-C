def main():
    while True:
        menm()
        choice=int(input('请选择'))
        if choice in [0,1,2,3,4,5,6,7]:
            if choice==0:
                answer=input('')
def menm():
    print('============学生信息管理系统==================')
    print('1.录入')
    print('2.找')
    print('3.删除')
a=input('sfka')
b=str(a)
print(type(b))
print(type(a))
