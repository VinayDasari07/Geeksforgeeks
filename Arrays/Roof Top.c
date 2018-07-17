
You are given heights of consecutive buildings.
You are moving from the roof of a building one building to the roof of next adjacent building. 
You need to find the maximum number of consecutive steps he can  put forward such that he gain a increase in altitude.

Input:
The first line contains an integer T, denoting number of test cases. Firts line of each test case contains an integer N, 
denoting number of buildings. Second line of the test case contains N space separated integers,
the ith integer denote the hieght of the ith building.

Output:
For each test case, print maximum number of consecutive steps he can put forward such that he increase in altitude,
in separate lines. He initially is on the roof of the first building.

Constraints:
1<=T<=1500
1<=N<=500
1<=Ai<=10000
Example:
Input:
2
5
1 2 2 3 2
4
1 2 3 4
Output:
1
3
------------------------------------------CODE-----------------------------------------------
#include<stdio.h>
int main() {
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int i,n,c=0;
	    scanf("%d",&n);
	    int arr[n];
	    for(i=0;i<n;i++)
	    scanf("%d",&arr[i]);
	    int max=0;
	    
	    for(i=0;i<n-1;i++)
	    {
	        if(arr[i]<arr[i+1])
	        c++;
	        else
	        {
	            if(c>max)
	            max = c;
	            c = 0;
	        }
	    }
	    if(max>c)
	    printf("%d\n",max);
	    else printf("%d\n",c);
	}
	return 0;
}
