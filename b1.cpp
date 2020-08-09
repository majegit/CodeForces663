#include <bits/stdc++.h>


using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t, n, m, sum;
    string str;
    cin >> t;
    while(t--)
    {
        sum = 0;
        cin >> n;
        cin >> m;
        vector<string> mat(n);
        for(int i=0; i<n; i++)
        {
            cin >> mat[i];
        }
        sum = count(mat[n-1].begin(), mat[n-1].end()-1, 'D');
        //cout << "SUM1: " << sum << "\n";
        for(int i=0; i<n; i++)
        {
            if(mat[i][m-1]=='R')
            {
                sum++;
            }
        }
        //cout << "SUM2: " << sum << "\n";
        cout << sum << "\n";




    }

    return 0;
}
