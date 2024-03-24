# math operator table BCD
# 1010 (+, 10 dec), 1011 (-, 11 dec), 1100 (*, 12 dec), 1101 (/, 13 dec)

binstr = "011000100000110100100000"

if len(binstr) % 4 != 0:
    print("invalid input")
else:
    digits_ops = ['0', '1', '2', '3', '4', '5',
                  '6', '7', '8', '9', '+', '-', '*', '/']
    for i in range(0, len(binstr), +4):
        # slicing
        tmp = binstr[i:i+4]
        # bin-dec
        dec = int(tmp, 2)
        s = digits_ops[dec]
        if s == '+' or s == '-' or s == '*' or s == '/':
            print()
            print(s)
        else:
            print(s, end="")  # prints "" after each symbol
    pass
