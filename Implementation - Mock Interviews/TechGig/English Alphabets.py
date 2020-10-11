

def main():

    # Write code here
    #  test_case=int(input())
    test_case = int('1')
    for i in range(test_case):
        #  string_tc=input()
        string_tc = 'abcdefgh'
        total_v = 0
        total_c = 0
        for j in range(len(string_tc)):
            alp = string_tc[j].lower()
            if alp == 'a' or alp == 'e' or alp == 'o' or alp == 'i' or alp == 'u':
                total_v += 1
            else:
                total_c += 1
        print(total_v, total_c,total_c*total_v)


main()



# Test Case Input
# 2
# abcdefgh
# zxcvbnm

# Expected Output
# 2 6 12
# 0 7 0
