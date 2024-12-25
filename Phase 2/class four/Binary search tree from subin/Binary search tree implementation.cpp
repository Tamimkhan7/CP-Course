#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mem(a, b) memset(a, b, sizeof(a))
#define show(x) cout << #x << ' ' << x << endl
#define all(x) (x).begin(), (x).end()
#define ll int long long
#define mod 1000000007

Node *bst_insert(Node *root, Node *node)
{
    Node *par_node, *curr_node;
    // when root is null, that's means my tree is empty that's time root is node is stay on the root node and then return the root node
    if (root == NUll)
    {
        root = node;
        return root;
    }

    par_node = NUll; // ami parents node jani na, tokhn amake ami parents node null dore nibo
    curr_node = root;
    while (curr_node != NUll)
    {
        par_node = curr_node;
        if (node->data < curr_node->data)
            curr_node = curr_node->left;
        else
            curr_node = curr_node->right;
    }
    if (node->data < par_node->data)
        add_left_child(par_node, node);
    else
        add_right_child(par_node, node);

    return root;
}

int32_t main()
{
    MTK;

    return 0;
}