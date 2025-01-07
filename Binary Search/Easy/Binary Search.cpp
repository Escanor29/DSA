// https://leetcode.com/problems/binary-search/

#include <iostream>
using namespace std;

int iterative_binary_search(int a[], int start, int end, int key)
{
    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (a[mid] == key)
            return mid;
        else if (a[mid] < key)
            start = mid + 1;
        else
            end = mid - 1;
    }
    return -1;
}

int recursive_binary_search(int a[], int start, int end, int key)
{
    if (start > end)
        return -1;

    int mid = start + (end - start) / 2;

    if (a[mid] == key)
        return mid;
    else if (a[mid] > key)
        return recursive_binary_search(a, start, mid - 1, key);
    return recursive_binary_search(a, mid + 1, end, key);
}

int binary_search(int n, int a[], int key)
{
    int start = 0;
    int end = n - 1;

    int iterativeBS = iterative_binary_search(a, start, end, key);

    // int recursiveBS = recursive_binary_search(a, start, end, key);

    return iterativeBS;
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
    cout << binary_search(n, a, k) << endl;

    return 0;
}