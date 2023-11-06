#include <bits/stdc++.h>
using namespace std;
void count_vowel(string s, string ss, int n, int ans)
{
    if(n==0)
    {
        for(int i=0; i<ss.size(); i++)
        {

            if(ss[i]== s[n])ans++;
        }
        cout<<ans<<endl;
        return;
    }
    for(int i=0; i<ss.size(); i++)
    {
        if(ss[i]==s[n])ans++;
    }
    count_vowel(s, ss, n-1, ans);
}
int main()
{
    string s;
    getline(cin, s);
    string ss = "aeiouAEIOU";
    int n = s.size();
     int ans =0;
    count_vowel(s, ss, n, ans);
}

