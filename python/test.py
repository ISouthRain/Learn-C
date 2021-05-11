while True:
    x=[]
    try:
        x = x.append(int(input("请输入一个数字: ")))
        fp=open("1.txt",'a+')
        fp.write(str(x[:::]))
        fp.close()
        break
    except ValueError:
        print("您输入的不是数字，请再次尝试输入！")