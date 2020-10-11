def f(x):
    d=0
    while x >= 1:
        (x,d) = (x/5,d+1)
        print(x,d)
    return(d)

# print(f(4000))-->6

def h(n):
    s = 0
    for i in range(2,n):
        if n%i == 0:
           s = s+i
    return(s)

# a=h(36)-h(34)
# print(a) -35


# For what value of n would g(637,n) return 4? If there are multiple possibilities, write any one.

def g(m,n):
    res = 0
    while m >= n:
        (res,m) = (res+1,m/n)
    return(res)

# print(g(637,4))



# Consider the following function f:
def mys(m):
  if m == 1:
    return(1)
  else:
    return(m+mys(m-1))

print(mys(3))