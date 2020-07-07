for T in range(int(input())):
    N, M = input().split()
    d0 = d1 = 0
    for i in range(len(N)):
        if N[i] != M[i]: 
            if N[i] == '0': d0 += 1
            else: d1 += 1
    print(max(d0,d1))