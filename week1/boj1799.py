def search(yi):
    global cnt
    global mx
    for y in range(yi,N):
        for x in range(N):
            if not bl[y][x] or d1[x+y] or d2[x-y+N-1]: continue
            d1[x+y] = d2[x-y+N-1] = True
            cnt += 1
            search(y)
            d1[x+y] = d2[x-y+N-1] = False
            cnt -= 1
    if cnt > mx: mx = cnt

N_MAX = 11
d1 = [False for _ in range(N_MAX*2)]
d2 = d1[:]
bl = []
cnt = mx = 0
N = int(input())
for Y in range(N):
    bl.append(list(map(int,input().split())))
search(0)
print(mx)

