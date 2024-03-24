# number of words written on a given line on a page
# problem: two first lines contain a certain number of words
#          copy the words from these two first lines into the third line
#          copy the words from the second and third line and copy them into the 4th line
#          continue till the last line of the page
"""
1.A
2.B
3. AB
4. BAB
5.ABBAB

Number of words in 1st and 2nd lines at least ONE
(Fibonacci - n2 > n1; n1 and n2 >= 0)
"""

a = 1
b = 2
n = 5  # number of lines
if a > b or a <= 0 or b <= 0:
    print('invalid input')
else:
    arr = [0]*n
    arr[0] = a
    arr[1] = b
    for i in range(2, n):
        arr[i] = arr[i-1] + arr[i-2]
    print(arr)

    """
    #solution 2
    else:
        ans = a+b
        for i in range(c-3):
            a=b
            b=ans
            ans=a+b
        print(ans)
    """
