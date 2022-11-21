#include<bits/stdc++.h>
using namespace std;
int maxxiRotateSum(vector<int> arr, int size) {
    int sum = 0, rotateSum = 0;
    for(int i = 0; i < size; i++) {
        sum += arr[i];
        rotateSum += (i*arr[i]);
    }
    int maxxi = rotateSum;
    for(int i = 1; i < size; i++) {
        rotateSum = rotateSum + sum - (size*arr[size-i]);
        maxxi = max(maxxi, rotateSum);
    }
    return maxxi;
}
int main(){
    int size;        
    cin >> size;
    vector<int> array(size);
    for(auto &x: array)
    {
        cin >> x;
    }
    cout << maxxiRotateSum(array,size) << endl;
    return 0;
}