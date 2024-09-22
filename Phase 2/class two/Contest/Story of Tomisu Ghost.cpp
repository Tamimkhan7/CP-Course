class Solution
{
public:
    long long heightReducedInTime(long long time, int work_time)
    {
#define all(x) (x).begin(), (x).end()
#define ll int long long
        ll l = 1, r = sqrt(2 * time / work_time) + 1, mid;
        while (l <= r)
        {
            mid = l + (r - l) / 2;
            ll req_time = work_time * mid * (mid + 1) / 2;
            if (req_time <= time)
            {
                left = mid + 1;
            }
            else
            {
                right = mid - 1;
            }
        }
        return right;
    }

    bool canReduceHeight(ll totalTime, int mountainHeight, const vector<int> &workerTimes)
    {
        long long total_highet = 0;
        for (int workerTime : workerTimes)
        {
            total_highet += heightReducedInTime(totalTime, workerTime);
            if (total_highet >= mountainHeight)
                return true;
        }
        return total_highet >= mountainHeight;
    }

    long long minNumberOfSeconds(int mountainHeight, vector<int> &workerTimes)
    {
        long long left = 1, right = 1e15, result = right;

        while (left <= right)
        {
            long long mid = left + (right - left) / 2;
            if (canReduceHeight(mid, mountainHeight, workerTimes))
            {
                result = mid;
                right = mid - 1;
            }
            else
            {
                left = mid + 1;
            }
        }

        return result;
    }
};
