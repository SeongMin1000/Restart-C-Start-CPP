#include <bits/stdc++.h>
using namespace std;

int n;
int arr[1000001];
int main() {
    ios_base::sync_with_stdio(0);
	cin.tie(0); //cout.tie(0);

    cin>>n;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    sort(arr,arr+n,greater<int>());

    for(int i=0; i<n; i++){
        cout<<arr[i]<<"\n";
    }
    return 0;
}