L = []
N = int(input())
for n in range(N):
    D = input().split()
    D = [-int(D[1]),int(D[2]),-int(D[3]),D[0]]
    L.append(D)
L.sort()
for n in range(N):
    print(L[n][3])