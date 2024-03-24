# https://olimpiada.ic.unicamp.br/pratique/p1/2007/f1/perdida/resultado/ - does not consider repetitions
# IBM coding assessment: equivalent (return -1 if not found); vector may contain repetitions

def find_lost(v):
    aux = [0]*(len(v) + 1)
    for i in range(len(v)):
        aux[v[i]-1] = 1
    for i in range(len(aux)):
        if aux[i] == 0:
            return i+1
    # return -1 (IBM)


N = int(input())  # not used - just to comply with OBI inputs

line = input().split(' ')
arr = [int(x) for x in line]

# OBI does not read with separated lines (enter)
# for i in range(N-1):
#    arr[i] = int(input())

print(find_lost(arr))
