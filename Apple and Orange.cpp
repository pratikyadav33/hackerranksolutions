#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int s, t, a, b, n, m, distance, apple=0, orange=0;
    cin >> s >> t >> a >> b >> m >> n;

    for(int i=0;i<m; i++) {
        cin>>distance;
        distance+=a;
        if(distance>=s && distance<=t)
            apple++;
    }
    for(int i=0;i<n; i++) {
        cin>>distance;
        distance = b+distance;
        if(distance>=s && distance<=t)
            orange++;
    }
    cout << apple << endl;
    cout << orange<< endl; 
    return 0;
}
