for T in range(int(input())):
    st = 0
    S = input()
    for s in S:
        if s == '(': st += 1
        else: 
            st -= 1
            if st < 0: break
    print('NO' if st else 'YES')
