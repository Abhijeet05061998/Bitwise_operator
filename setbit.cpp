#include<bits/stdc++.h>
using namespace std;
int findset(int n)
{
	if(n>=1)
	{
		n=(n)^(n-1);
		return log2(n+1);
	}
	else
	{
		return 0;
	}
}
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	
	int n;
	cin>>n;

	cout<<findset(n)<<endl;
}