def search(D):
    global F
    if D == L: F = 1
    else:
        for i in 1,2:
            if D+i > L: break
            if S[D:D+i] in EL and not F: 
                search(D+i)

EL = [
    'ac', 'ag', 'al', 'am', 'ar', 'as', 'at', 'au', 'b', 'ba', 'be', 'bh', 'bi', 'bk', 'br', 'c',
    'ca', 'cd', 'ce', 'cf', 'cl', 'cm', 'cn', 'co', 'cr', 'cs', 'cu', 'db', 'ds', 'dy', 'er',
    'es', 'eu', 'f', 'fe', 'fl', 'fm', 'fr', 'ga', 'gd', 'ge', 'h', 'he', 'hf', 'hg', 'ho', 'hs',
    'i', 'in', 'ir', 'k', 'kr', 'la', 'li', 'lr', 'lu', 'lv', 'md', 'mg', 'mn', 'mo', 'mt', 'n',
    'na', 'nb', 'nd', 'ne', 'ni', 'no', 'np', 'o', 'os', 'p', 'pa', 'pb', 'pd', 'pm', 'po', 'pr',
    'pt', 'pu', 'ra', 'rb', 're', 'rf', 'rg', 'rh', 'rn', 'ru', 's', 'sb', 'sc', 'se', 'sg', 'si',
    'sm', 'sn', 'sr', 'ta', 'tb', 'tc', 'te', 'th', 'ti', 'tl', 'tm', 'u', 'v', 'w', 'xe', 'y', 
    'yb', 'zn', 'zr']
for T in range(int(input())):
    S = input()
    L = len(S)
    F = 0
    search(0)
    print('YES' if F else 'NO')

