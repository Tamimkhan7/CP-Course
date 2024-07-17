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

int32_t main()
{
    MTK;
    int n;
    int cs = 0;
    while (cin >> n and n > 0)
    {
        cs++;
        cout << "Scenario #" << cs << '\n';

        map<int, int> team_id;
        for (int i = 0; i < n; i++)
        {
            int member;
            cin >> member;
            while (member--)
            {
                int x;
                cin >> x;
                team_id[x] = i;
            }
        }
        queue<int> team_queue;
        map<int, queue<int>> team_members;
        string s;
        while (cin >> s and s != "STOP")
        {
            if (s == "ENQUEUE")
            {
                int x;
                cin >> x;
                int team = team_id[x];
                if (!team_members[team].empty())
                {
                    team_members[team].push(x);
                }
                else
                {
                    team_queue.push(team);
                    team_members[team].push(x);
                }
            }
            else
            {
                int front_member = team_queue.front();
                cout << team_members[front_member].front() << '\n';
                team_members[front_member].pop();
                if (team_members[front_member].empty())
                    team_queue.pop();
            }
        }
    }
    return 0;
}