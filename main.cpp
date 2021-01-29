#include<bits/stdc++.h>
#define faster ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long int

using namespace std;
//using ll = long long int;

int main()
{

    faster

    ll t; cin >> t;
    while (t--)
    {
        set <int > s;
        int n ; cin >> n ;
        int arr[n+5];
        for (int z=0; z<n; z++){
            cin >> arr[z];
        }
        int i, cnt = 1, j;
        for (i=0,j =i+1; arr[i] <= arr[j] ; j++)
        {
            if (arr[i] == arr[j])
                {
                    cnt++;
                }

        }
        cout << cnt << endl;

    }
}
