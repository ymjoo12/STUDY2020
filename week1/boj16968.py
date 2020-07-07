S = input()
m = 1
for i in range(len(S)):
    if i == 0 or S[i] != S[i-1]:
        if S[i] == 'c': m *= 26
        else: m *= 10
    else:
        if S[i] == 'c': m *= 25
        else: m *= 9
print(m)

