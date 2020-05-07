''' Read input from STDIN. Print your output to STDOUT '''
# Use input() to read input from STDIN and use print to write your output to STDOUT


def main():
    # Write code here
    total_ing_needeed_1 = int(input())
    qty_ing_1_pg = input().split(' ')
    total_ing_qty_in_lab = input().split(' ')

    # total_ing_needeed_1 = int(4)
    # qty_ing_1_pg = '2 5 6 3'.split(' ')
    # total_ing_qty_in_lab = '20 40 90 50'.split(' ')

    total_max_pg_made = []
    # print(total_ing_needeed_1,qty_ing_1_pg,total_ing_qty_in_lab)
    for i in range(total_ing_needeed_1):
        max_1=int(total_ing_qty_in_lab[i])//int(qty_ing_1_pg[i])
        total_max_pg_made.append(max_1)
        
    total_max_pg_made.sort()
    max=total_max_pg_made
    print(total_max_pg_made[0])
        


main()
