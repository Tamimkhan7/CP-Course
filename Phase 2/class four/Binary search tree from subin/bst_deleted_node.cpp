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
Node *bst_delete(Node *root, Node *node)
{
    Node *smallest_node;
    // that's means left child is null, there is no node on the left child
    if (node->left == Null)
        root = bst_transplant(root, node, node->right);
    else if (node->right == Null)
        root = bst_transplant(root, node, node->left);
    else
    {
        // that's means right and left child having there, that's the time we are go right path and find succssor node
        // succssor node means all right node is a smallest node is called succssor node
        smallest_node = bst_minimum(node->right);
        // aita means holo amar right a onek gula node ace tader left o node ace tar modde theke amar succssor node find korte hobe
        if (smallest_node->parent != node)
        {
            root = bst_transplant(root, smallest_node, smallest_node->right);
            add_right_child(smallest_node, node->right);
        }
        //  amar right a onek gula node but aitar right ar left a kono node nai
        root = bst_transplant(root, node, smallest_node);
        add_left_child(smallest_node, node->left);
    }
}

int32_t main()
{
    MTK;

    return 0;
}