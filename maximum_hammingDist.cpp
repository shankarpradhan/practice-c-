#include<bits/stdc++.h>
using namespace std;
int main()
{
    int size;
    cin >> size;
    vector<int> arr(size);
    for(auto &x: arr)
        cin >> x;
    int maxxi = 0;
    for(int i = 0; i < size; i++)
    {
        int count = 0;
        for(int j = i,k=0; j < (i+size); j++,k++) {
            if(arr[j%size]!=arr[k])
            {
                count++;
            }
        }
        maxxi = max(maxxi, count);
    }
    cout << maxxi << endl;
    return 0;
}