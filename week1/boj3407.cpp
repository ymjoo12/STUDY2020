#include <iostream>
#include <cstring>
#include <string>
using namespace std;

char EL[114][3] = {
    "ac", "ag", "al", "am", "ar", "as", "at", "au", "b", "ba", "be", "bh", "bi", "bk", "br", "c",
    "ca", "cd", "ce", "cf", "cl", "cm", "cn", "co", "cr", "cs", "cu", "db", "ds", "dy", "er",
    "es", "eu", "f", "fe", "fl", "fm", "fr", "ga", "gd", "ge", "h", "he", "hf", "hg", "ho", "hs",
    "i", "in", "ir", "k", "kr", "la", "li", "lr", "lu", "lv", "md", "mg", "mn", "mo", "mt", "n",
    "na", "nb", "nd", "ne", "ni", "no", "np", "o", "os", "p", "pa", "pb", "pd", "pm", "po", "pr",
    "pt", "pu", "ra", "rb", "re", "rf", "rg", "rh", "rn", "ru", "s", "sb", "sc", "se", "sg", "si",
    "sm", "sn", "sr", "ta", "tb", "tc", "te", "th", "ti", "tl", "tm", "u", "v", "w", "xe", "y", 
    "yb", "zn", "zr"};
string S;
int T, L;
bool F;

bool BS(char* now)
{
    int m, s = 0, e = 113;
    while (s <= e) {
        m = (s+e)/2;
        if (strcmp(now,EL[m]) > 0) s = m+1;
        else if (strcmp(now,EL[m]) < 0) e = m-1;
        else return 1;
    }
    return 0;
}

void search(int l)
{
    if (l == L) F = 1;
    else {
        for (int i = 1; i <= 2; i++) {
            if (l+i <= L && !F) {
                char now[3];
                int al = S.copy(now,i,l);
                now[al] = '\0';
                if (BS(now))
                    search(l+i);
            }
        }
    }
}

int main()
{
    cin >> T;
    for (int t = 0; t < T; t++) {
        cin >> S;
        L = S.size();
        F = 0;
        search(0);
        if (F) cout << "YES" << '\n';
        else cout << "NO" << '\n';
    }    
    return 0;
}