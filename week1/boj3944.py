for T in range(int(input())):
    B, D = input().split()
    B = int(B)
    D = sum(map(int,list(D)))
    print(D%(B-1))