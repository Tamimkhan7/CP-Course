#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mem(a, b) memset(a, b, sizeof(a))
#define trace(x) cout << #x << ' ' << x << endl
#define all(x) (x).begin(), (x).end()
#define ll int long long
#define mod 1000000007
vector<string> path;
void update_path(string file)
{
    if (file.size() > 0)
    {
        if (file == "..")
        {
            if (path.size() > 0)
                path.pop_back();
        }
        else
            path.push_back(file);
    }
}
int32_t main()
{
    MTK;
    int n;
    cin >> n;

    while (n--)
    {
        string cmd;
        cin >> cmd;
        if (cmd == "pwd")
        {
            for (auto x : path)
                cout << "/" << x;
            cout << "/" << '\n';
        }
        else
        {
            string s;
            cin >> s;
            if (s[0] == '/')
                path.clear(); // if the path start wth /.
            string file = "";
            for (int i = 0; i < s.size(); i++)
            {
                if (s[i] == '/')
                {
                    update_path(file);
                    file = "";
                }
                else
                    file += s[i];
            }
            update_path(file);
        }
    }

    return 0;
}