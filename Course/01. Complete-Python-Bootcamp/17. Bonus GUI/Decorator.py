def fun(hi):
    print("Hi Function is running")
    print(hi())
    return hi
def a():
    return("hi")
# p=fun(a)
# print(p)


# --------------------->

def new_decorator(fun):
    print("This is before ")
    fun()
    print("This is after function call")
    return wrap_func

def func_need_decorator():
    print("This Function needs decoration")

new_decorator(func_need_decorator)