#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
using namespace std;

void solve()
{
    char board[9][9];
    memset(board,'X',sizeof(board));
    int n,r=1,c=2;
    cin>>n;
    board[1][1]='O';
    while(n>1)
    {
        n--;
        if(c>8)
        {
            c%=8;
            r++;
        }
        board[r][c]='.';
        c++;
    }
    for(int i=1;i<=8;++i)
    {
        for(int j=1;j<=8;++j)
        {
            cout<<board[i][j];
        }
        cout<<"\n";
    }
}

int main()
{
    fast;
    int t;
    cin>>t;
    while(t--)
    solve();
}
