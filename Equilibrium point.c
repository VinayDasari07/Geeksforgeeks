/*
Given an array A your task is to tell at which position the equilibrium first occurs in the array. Equilibrium position in an array is a position such that the sum of elements below it is equal to the sum of elements after it.

Input:
The first line of input contains an integer T denoting the no of test cases then T test cases follow. First line of each test case contains an integer N denoting the size of the array. Then in the next line are N space separated values of the array A.

Output:
For each test case in a new  line print the position at which the elements are at equilibrium if no equilibrium point exists print -1.

Constraints:
1<=T<=100
1<=N<=100

Example:
Input:
2
1
1
5
1 3 5 2 2

Output:
1
3
Explanation
1. Since its the only element hence its the only equilibrium point
2. For second test case equilibrium point is at position 3 as elements below it (1+3) = elements after it (2+2)
 */
 
 ----------------------------------------------CODE-------------------------------------------------------
 #include <stdio.h>

int main() {
	//code
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int i,j,n;
	    scanf("%d",&n);
	    int a[n];
	    int sum[n];
	    for(i=0;i<n;i++)
	    {
	      scanf("%d",&a[i]);
	    }
	    int sum1=0;
	    for(i=0;i<n;i++)
	    {
	      sum1 = sum1+a[i];
	      sum[i]=sum1;
	    }
	    sum1=0;
	    int val=-1;
	    for(j=n-1;j>=0;j--)
	    {
	     sum1 += a[j];
	     if(sum1==sum[j-2])
	      val = j;
	    }
	    if(n==1)
	    printf("1");
	    else
	    printf("%d ",val);
	    printf("\n");
	}
	return 0;
}
