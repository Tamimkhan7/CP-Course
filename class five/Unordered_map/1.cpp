#include <bits/stdc++.h>
using namespace std;
//unordeded_map randomly key akare thake,,jodi amar key gula sorted na lage tahole ami unordered_map use korte pari, sorted and unique lagle amake map use korte hobe
//map use kora better unordered_map thake, time complexity best unordered_map a
void print(unordered_map<int, int>mp)
{
    for(auto x:mp)cout<<x.first<<' '<<x.second<<'\n';
}
int main()
{
   unordered_map<int, int>mp;
    mp[1]=3;
    mp[2]=10;
    mp[3]=17;
    print(mp);
//baki map ar sob function unordered map a kaj korbe,, akta jaygay ara unique

}
