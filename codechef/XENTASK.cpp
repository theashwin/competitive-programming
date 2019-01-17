
Problem :Xenny and Yana were very keen to celebrate Valentine's Day at their home.To make preparations for the celebration, they listed down N tasks that they had to complete.
To complete the ith task, Xenny takes Xi seconds and Yana takes Yi seconds. In order to minimize the disparity in tasks performed, they decide to do the tasks alternatingly. If Xenny did the 1st task, then Yana would just wait and watch him until he completes the task. After that, Yana would start the 2nd task, and while she does her task, Xenny would just watch her. He would start the 3rd task only after her completion, and they would keep doing tasks alternatingly uptil the Nth task. They could also do tasks in the other order - that is, Yana could do the 1st task, after that Xenny could do the 2nd task, and so on. Their eventual goal was to minimize the total time taken by them to complete all N tasks.

Please help them find the minimum total time they would take to complete all N tasks. 
	
Solution Approach: We find the sum at odd positions and even positions for both xenny and yana and then we compare both the sums and select the sum with minimum value.
	
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n,ans=0,odd=0,odd2=0,even=0,even2=0;
		cin>>n;
		int x[n],y[n];
		for(i=0;i<n;i++)
		{
			cin>>x[i];
			if(i&1)
			odd+=x[i];   // sum of odd positions for xenny
			else
			even+=x[i];  // sum of even positions for xenny
		}
		for(i=0;i<n;i++)
		{
			cin>>y[i];
			if(i&1)
			odd2+=y[i];	// sum of odd positions for xenny
			else
			even2+=y[i];	// sum of even positions for xenny
		}
		ans=min((odd+even2),(odd2+even));	//ans is minimum of the sum at both positions for xenny and yana
		cout<<ans<<'\n';
	}
}  
