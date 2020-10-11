import re

# help(re)


patterns = ['term1', 'term2']
text = "This is my term1 and term2"
found = re.search(patterns[0], text)
# print(found())

# print()
# for p1 in patterns:
#     findPattern=re.search(p1,text)
#     print("For Pattern" +p1+"Findings are"+str(type(findPattern.group())))

split_term = '0'
sent = " this is huse mony $1000 ,$200"
# print(re.split(split_term, sent))

print(re.findall(split_term,sent))
