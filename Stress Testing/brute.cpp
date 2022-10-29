#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
typedef long long ll;
int main()
{
	int t = 1 ;
	// cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		ll arr[n];
		ll sum2=0;
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
			sum2+=arr[i];
		}
        ll sum=0;
        ll sum_so_far=0;
        int counter=0;
        for(int i=0;i<n;i++)
        {
            sum_so_far+=arr[i];
            counter+=1;
            if(sum<sum_so_far && counter<n)
                sum=sum_so_far;
            if(sum_so_far<0)
            {
                sum_so_far=0;
                counter=0;
            }
        }
        sum_so_far=0;
        counter=0;
        for(int i=n-1;i>=0;i--)
        {
            sum_so_far+=arr[i];
            counter+=1;
            if(sum<sum_so_far && counter<n)
                sum=sum_so_far;
            if(sum_so_far<0)
            {
                sum_so_far=0;
                counter=0;
            }
        }
        if(sum2>sum)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
	}
	return 0;
}