#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;//declare vector size
    vector<int>v(n);////declare vector
    for(int i=0; i<n; i++)
    {
        cin>>v[i];//input from user in vector
    }
    vector<int>v2{5,8,9,6,7};//vector ar value ai vabe oh declare kora jay
    vector<int>::iterator it;//declare interator
//iterator basicall pointer ar moto, pointer ar moto value gula point kore, but iterator basically index gula dore rakhe
    it = v.begin();
    it++;//iterator index update
    cout<<*it<<'\n';//print the iterator index ar value
}
