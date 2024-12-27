#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll int long long

Node *bst_transplant(Node *root, Node *curr_node, Node *new_node)
{
    // reason holo amar node ta currently empty
    if (curr_node == root)
        root = new_node;
    else if (curr_node == curr_node->parent->left)
        add_left_node(curr_node->parent, new_node);
    else
        add_right_node(curr_node->parent, new_node);
    return root; 
}

int32_t main()
{
    MTK;

    return 0;
}