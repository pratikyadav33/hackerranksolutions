
#include <bits/stdc++.h> 
using namespace std; 
 
int subsetPairNotDivisibleByK(vector<int> arr, int N,int K) 
{ 
   
    int f[K]; 
    memset(f, 0, sizeof(f)); 
    for (int i = 0; i < N; i++) 
        f[arr[i] % K]++; 

    if (K % 2 == 0) 
        f[K/2] = min(f[K/2], 1); 

    int res = min(f[0], 1); 
    for (int i = 1; i <= K/2; i++) 
        res += max(f[i], f[K-i]); 

    return res; 
} 
int main() 
{ 
    vector<int> arr;
    int n;
    cin>>n;
    int k;
    cin>>k;
    for(int i=0;i<n;i++){
        int p;
        cin>>p;
        arr.push_back(p);
    } 
    cout<<subsetPairNotDivisibleByK(arr,n,k); 
    return 0; 
}
