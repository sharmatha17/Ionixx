#include<stdio.h>
main()
{
	int testcase;
	//Testcase
	scanf("%d",&testcase);
	//Loop for testcase
	while(testcase--)
	{
		// Declaration of Variable
		int n,i,ans=1;
		scanf("%d",&n);
		// Looping Number of time of "n"
		for(i=0;i<n;i++){
			ans=ans*n;
		}
		// Number of time of "n"+ (n*n)
		ans=ans+n*n;
		//Print the values
		printf("%d",ans);		
	}
}
