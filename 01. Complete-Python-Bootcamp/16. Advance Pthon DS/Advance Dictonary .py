d={'k1':1,"k2":2}

print(d)

a={x:x**2 for x in range(10)}
print(a)


b={k:v**2 for k,v in zip(['a','b'],range(10,20))}

print(b)

print(d.viewvalues())