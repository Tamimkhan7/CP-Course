#include<bits/stdc++.h>
using namespace std;
//vector always starting 0 indexing
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    vector<int> v;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    for (int i = 0; i < n; i++)
    {
        cout<<v[i]<<' ';
    }
    cout<<'\n';

    cout<<v.front()<<'\n';//print the first element
    cout<<v.back()<<'\n';//print the last element

    cout<<v.at(1)<<'\n';//print the at size of the number element

    v.resize(n+5, 7);//resize means n ar por baki value gula 7 dara initilize hoye jabe

    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<' ';
    }
    cout<<'\n';

    v.assign(5,3);//assing menas vector age ja cilo sob empty hobe jabe akhn vector new kore value assign hobe koto element taoh bole deoya ace
}
