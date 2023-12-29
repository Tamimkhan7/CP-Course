#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    // think to burte forces

    //     // array - 2 3 4 5
    //     //  amader i niye jabe first element
    //     /* //first step
    //     for (int i = 0; i < n; i++)
    //     {
    //         // then j te asbe i theke nth element projnto
    //         for (int j = i; j < n; j++)
    //         {
    //             long long int sum = 0;
    //             // k korbe i element theke j projnto all element ar sum kore dibe
    //             // next bar j ar element increment kore dibe, ai vabe total element count korbe and last a max value ta diye dibe

    //             for (int k = i; k <= j; k++)
    //             {
    //                 sum += arr[k];
    //             }
    //             maxi = max(maxi, sum);
    //         }
    //     }
    //     cout << maxi << endl;
    //     // this problem time complexity average O(n^3>), amader program a deoya ace time complexity n average
    //     //  like ami jodi think kori amar array ta amn 2 3 4 5, amar total subarry asbe 2^n- 16 ta
    //     // total think ta burte forces a, first time we think in each problem try to burte forces, then try to optimized think

    //     // first optimal think

    //     // like amar array ta holo - 2 3 4 5, ami ki korbo first ar value ta first sum korbo then oi sum value sathe ami maxi kore dekhbo amar max akhn koto akhn oi maximum value tar sathe next value tar sum korbo ai vabe
    //     // ami maxi value ta count korte pari, toba ai kkhette time complexity hobe O(n^2)//then amader problem a time complexity cilo 1s average, ja amar statment onujani bes time lagtece, we try second stap

    //      for (int i = 0; i < n; i++)
    //      {
    //          long long sum = 0;
    //          for (int j = i; j < n; j++)
    //          {
    //              // akta j ar element asce then sum kortece then compare korteci sum boro na maxi boro, jeita boro oita max ar modde rekhe dici
    //              // then abar sum korteci tokhn dekhlam sum boro na maxi ar modde rakha value boro, jeita boro hobe oi ta maxi modde rekhe dibo, then so on continuesly

    //              sum += arr[j];
    //               for example-- 1 3 - 2 5 3 - 5 2 2
    //                       -1 2 2 5 8 8 8 8
    //                           8 8 8 9 9 9 9
    //                           9 9 9 9 9 9
    //                           9 9 9 9 9
    //                           9 9 9 9
    //                           9 9 9
    //                           9 9
    //                           9
    //     maxi = max(sum, maxi);
    // }
    // }

    // // cout
    // //     << maxi; // aita exactly ans but aita oh run time error asbe karon aita time lagtece average O(n^2) , ja 1sec ar ceye koyek gun besi, aitaoh kora jabe na
    // // // amra jani akta n loop ar time ney average 10^8, amar program ar time lagtece average 2*10^12, ja onek besi
    // // cout << endl;
    // //     */

    // last we will try taken optimal solution
    long long max_subarry_sum = -1e18;
    long long sum = -1e18;
    for (int i = 0; i < n; i++)
    {
        sum = max((long long)arr[i], arr[i] + sum); // current element ar sathe previous maxi+current element kore jeita max oita ber kori
        // cout << sum << " ";//all max ber kori , amar oi element ar sathe age max compare kore jei max pai oitai amar solution
        max_subarry_sum = max(max_subarry_sum, sum); // aita vector diye o kora jeto, ami solok max value gule insert kore max value ta print korte partam
    }
    cout << max_subarry_sum << endl;
}