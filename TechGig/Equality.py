# 3
# aaabbBBAAA12345)(*&^
# aa11BB!!!!!!
# aWsEdR1!2@3#
# Output
# Equality For Everyone
# No Equality
# Equality For Everyone


def main():
    # Write code here
    # tc=int(input())
    tc = int('1')
    for i in range(tc):
        # word=input()
        word = 'aaabbBBAAA12345)(*&^'
        for j in range(len(word)):
            total_j = 1
            # print(word[j:])
            for k in word[j:]:
                if word[j] == k:
                    print(word[j], k)
                    total_j += 1
            print(j)


main()
