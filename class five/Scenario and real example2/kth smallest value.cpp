#include <bits/stdc++.h>
using namespace std;

// O(nlogk) (logk as the size of the heap is at most k)
int32_t main()
{
  int n, k;
  cin >> n >> k;
  vector<int> v(n + 1);
  for (int i = 1; i <= n; i++)
  {
    cin >> v[i];
  }
  priority_queue<int> pq;
  for (int i = 1; i <= n; i++)
  {
    pq.push(v[i]);
    if (pq.size() > k)
    { // If there are more than k elements in the heap, pop the largest one
      pq.pop();
    }
    if (i >= k)
    {
      cout << pq.top() << ' ';
    }
    else
    {
      cout << -1 << ' '; // not enough elements
    }
  }
  cout << '\n';
  return 0;
}