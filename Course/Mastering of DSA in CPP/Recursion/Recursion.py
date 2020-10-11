def fun1(n):
    if (n>0):
        print("pre{}".format(n))
        fun1(n-1)
        print(n)
        
fun1(10)


