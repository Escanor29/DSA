// https://leetcode.com/problems/binary-search/

#include <iostream>
using namespace std;

int lower_bound(int n, int a[], int key)
{
    int start = 0;
    int end = n - 1;
    int lb = n;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (a[mid] >= key)
        {
            lb = mid;
            end = mid - 1;
        }
        else if (a[mid] < key)
            start = mid + 1;
    }
    return lb;
}

int upperBound(int n, int a[], int x)
{
    int start = 0;
    int end = n - 1;
    int ub = n;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (a[mid] > x)
        {
            ub = mid;
            end = mid - 1;
        }
        else if (a[mid] <= x)
            start = mid + 1;
    }
    return ub;
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int k;
    cin >> k;
    cout << lower_bound(n, a, k) << endl;

    return 0;
}