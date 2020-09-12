#include<bits/stdc++.h>
using namespace std;


int power(int n)
{
	if(!(n&(n-1)))
	{
		return true;
	}
	else
	{
		return false;
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

	cout<<power(n);
}