#include <bits/stdc++.h>
using namespace std;

int lcs(char* X, char* Y, int m, int n,
		vector<vector<int> >& dp)
{
	if (m == 0 || n == 0)
		return 0;
	if (X[m - 1] == Y[n - 1])
		return dp[m][n] = 1 + lcs(X, Y, m - 1, n - 1, dp);

	if (dp[m][n] != -1) {
		return dp[m][n];
	}
	return dp[m][n] = max(lcs(X, Y, m, n - 1, dp),
						lcs(X, Y, m - 1, n, dp));
}

void solve(){
    int n,ans=0;
    cin>>n;
    string s;
    cin>>s;
    int a,b;
    for (int i=0;i<n;i++){
	    vector<vector<int> > dp(i + 1, vector<int>((n-i) + 1, -1));
        char x[] = s.substr(0,i);
        char y[] = s.substr(0,i);
	    int temp = lcs(x,y, i , n-i , dp);
        if (temp>ans){
            ans=temp;
        }
    }
    cout<<ans<<endl;
}
int main()
{   
    int t;
	cin>>t;
	while(t--){
	  solve();
	}
	char X[] = "AGGTAB";
	char Y[] = "GXTXAYB";

	int m = strlen(X);
	int n = strlen(Y);

	return 0;
}
