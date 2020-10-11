''' Read input from STDIN. Print your output to STDOUT '''
# Use input() to read input from STDIN and use print to write your output to STDOUT


def main():
    # Write code here
    number_of_test_case = int(input())
    # number_of_test_case = int('1')
    for i in range(number_of_test_case):
        number_of_member_in_team = int(input())
        g_member_strength = input().split(' ')
        opponent_strength = input().split(' ')
        # number_of_member_in_team = int('11')
        # g_member_strength = '28427 19877 30709 18527 17409 14758 20873 18458 28587 17751 21672'.split(
        #     ' ')
        # opponent_strength = '21865 26619 20213 26217 407 30558 15430 17994 31674 2019 10539'.split(
        #     ' ')

        total_win = 0
        a = []
        b = []
        for j in range(number_of_member_in_team):
            a.append(int(g_member_strength[j]))
            b.append(int(opponent_strength[j]))
        a.sort()
        b.sort()
        g_member_strength = a
        opponent_strength = b

        for i in range(number_of_member_in_team):
            if int(g_member_strength[0]) > int(opponent_strength[0]):
                total_win += 1
                g_member_strength.pop(0)
                opponent_strength.pop(0)
            else:
                g_member_strength.pop(0)
                opponent_strength.pop(len(opponent_strength)-1)

        print(total_win)


main()
