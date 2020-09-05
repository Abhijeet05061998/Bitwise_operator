#include<bits/stdc++.h>
using namespace std;


int find_diff_bit(int n,int m)
{
    return log2((m^n)& -(m^n))+1;
}
int main()
{
	
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r", stdin);
	freopen("output.txt", "w", stdout);
	#endif


	int n,m;
	cin>>n>>m;

	cout<<find_diff_bit(n,m)<<endl;
}