#include <bits/stdc++.h>
using namespace std;
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
typedef long long int ll;
#define all(x) x.begin(), x.end()
#define mod 1000000007
const int N = 30;
vector<int> v[N];
int n;
pair<int, int> get_position(int x)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < v[i].size(); j++)
        {
            if (v[i][j] == x)
                return make_pair(i, j);
        }
    }
}
void move_to_initial_vector(int vector_id, int position_in_vector)
{
    for (int i = position_in_vector + 1; i < v[vector_id].size(); i++)
    {
        int x = v[vector_id][i];
        v[x].push_back(x);
    }
    v[vector_id].resize(position_in_vector + 1);
}
void move_on_top_of_a_vector(int vector_id, int position_in_vector, int dest_vector_id)
{
    for (int i = position_in_vector; i < v[vector_id].size(); i++)
    {
        int x = v[vector_id][i];
        v[dest_vector_id].push_back(x);
    }
    v[vector_id].resize(position_in_vector);
}
int32_t main()
{
    MTK;
    cin >> n;
    for (int i = 0; i < n; i++)
        v[i].push_back(i);

    string s;
    while (cin >> s and s != "quit")
    {
        int a, b;
        string ty;
        cin >> a >> ty >> b;
        auto [vector_id_a, position_in_vector_a] = get_position(a);
        auto [vector_id_b, position_in_vector_b] = get_position(b);
        if (vector_id_a == vector_id_b)
            continue;
        if (s == "move")
        {
            if (ty == "onto")
            {
                move_to_initial_vector(vector_id_a, position_in_vector_a);
                move_to_initial_vector(vector_id_b, position_in_vector_b);
                move_on_top_of_a_vector(vector_id_a, position_in_vector_a, vector_id_b);
            }
            else
            {
                move_to_initial_vector(vector_id_a, position_in_vector_a);
                move_on_top_of_a_vector(vector_id_a, position_in_vector_a, vector_id_b);
            }
        }
        else
        {
            if (ty == "onto")
            {
                move_to_initial_vector(vector_id_b, position_in_vector_b);
                move_on_top_of_a_vector(vector_id_a, position_in_vector_a, vector_id_b);
            }
            else
            {
                move_on_top_of_a_vector(vector_id_a, position_in_vector_a, vector_id_b);
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << i << ":";
        for (int j = 0; j < v[i].size(); j++)
        {
            cout << " " << v[i][j];
        }
        cout << '\n';
    }
}