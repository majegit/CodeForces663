#include <bits/stdc++.h>

using namespace std;

int countOne(vector<string> vec)
{
    int sum = 0;
    for (string x : vec)
        sum+= count(x.begin(), x.end(), '1');
    return sum;
}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, m, sum;

    cin >> n >> m;
    vector<string> mat(n);

    for(int i = 0; i<n; i++)
    {
        cin >> mat[i];
    }
    if(n == 1 || m == 1)
    {
        cout << 0 << "\n";
        return 0;
    }
    if(n==2 && m==2)
    {
        if(countOne(mat)%2)
            cout << '0';
        else
            cout << '1';

    }
    if(n>=4 && m>=4)
    {
        cout << -1 << "\n";
        return 0;
    }


    return 0;
}
