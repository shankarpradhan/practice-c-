#include <bits/stdc++.h>
using namespace std;

class Solution{
	public:
	void reverse(int arr[],int start, int end)
	{
	    while(start<end)
	    {
	        swap(arr[start++],arr[end--]);
	    }
	}
	void leftRotate(int arr[], int k, int n) 
	{ 
	    k%=n;
	    reverse(arr,0,k-1);
	    reverse(arr,k,n-1);
	    reverse(arr,0,n-1);
	} 
};
/*
k = number of left rotation
n = size of the array
*/
int main() 
{
   	int t;
    cin >> t;
    while (t--)
    {
    	int n;
	    cin >> n;
	    int k;
	    cin >> k;
	    int a[n];
	    for(int i = 0;i<n;i++){
	        cin >> a[i];
	    }
        Solution ob;
        ob.leftRotate(a,k,n);
        
        for (int i = 0; i < n; i++) 
        	cout << a[i] << " "; 
    }
    return 0;
}
