a=[1,2,3,'a']
print(a)
a.append('v')
print(a)
print(a.count('v'))
x=[1,2,3]
x.append([4,5])
print(x)
x.extend([4,5,4,6])
print(x)

print(x.index(4))
x.pop(5)
print(x)

x.remove(4)
print(x)
x.sort()
print(x)
x.reverse()
print(x)