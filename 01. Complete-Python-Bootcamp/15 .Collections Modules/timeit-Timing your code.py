import timeit

# '0-2-3-2-3-3...-99'

mystr="-".join(str(n) for n in range(100))

# print(mystr)

a=timeit.timeit("-".join(str(n) for n in range(10000)))
# print(a)

b="+".join(map(str,range(100)))
print(b)

 
timeit "+".join(map(str,range(100)))