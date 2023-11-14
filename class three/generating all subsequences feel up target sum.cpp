#include <bits/stdc++.h>
using namespace std;
int n, a[20];
int target_sum, count_number_of_times;
void count_subsequence(int index, int current_sum)
{

    if(index==n)
    {
        if(current_sum==target_sum)count_number_of_times++;
        return;
    }
    count_subsequence(index+1, current_sum+a[index]);
    cout<<current_sum<<" ";
    count_subsequence(index+1, current_sum);
}
int main()
{
    cin>>n;
    for(int i=0; i<n; i++)cin>>a[i];
    cin>>target_sum;
    count_number_of_times=0;
    count_subsequence(0,0);
    cout<<count_number_of_times<<endl;

}
