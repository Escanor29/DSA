#include <bits/stdc++.h>
using namespace std;

int findAllSubarraysWithGivenSum(vector<int> &arr, int k)
{
    // int n=arr.size();
    // int cnt=0, sum=0;
    // for(int i=0;i<n;i++){
    //     sum=0;
    //     for(int j=i;j<n;j++){
    //         sum+=arr[j];
    //         if(sum==k)
    //             cnt++;
    //     }
    // }

    int n = arr.size();
    int cnt = 0, sum = 0;
    int i = 0, j = 0;
    while (i <= j && j < n)
    {
        if (sum == k)
        {
            cnt++;
            sum = sum - arr[i++] + arr[j];
        }
        else if (sum > k)
            sum -= arr[i++];
        else
        {
            sum += arr[j++];
        }
        cout << sum << " ";
    }
    cout << endl;

    return cnt;
}

int main()
{
    vector<int> v;
    int n, k;
    cin >> n >> k;
    int element;
    for (int i = 0; i < n; i++)
    {
        cin >> element;
        v.push_back(element);
    }

    int result = findAllSubarraysWithGivenSum(v, k);
    cout << result;

    return 0;
}