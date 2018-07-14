
/*

Given an array of integers, write a function that returns true if there is a triplet (a, b, c) that satisfies a2 + b2 = c2.

Input:
The first line contains 'T' denoting the number of testcases. Then follows description of testcases.
Each case begins with a single positive integer N denoting the size of array.
The second line contains the N space separated positive integers denoting the elements of array A.

Output:
For each testcase, print "Yes" or  "No" whtether it is Pythagorean Triplet or not.

Constraints:
1<=T<=50
 1<=N<=100
 1<=A[i]<=100

Example:
Input:
1
5
3 2 4 6 5
Output:
Yes */

























---------------------------------------CODE---------------------------------------
#include <math.h>
int n;
int search(int b[n],int ele)
{
    int i,val=-1;
    for(i=0;i<n;i++)
    {
        if(b[i]==ele)
        val = ele;
        
    }
    return val;
}
int main() {
	//code
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int i,j;
	    scanf("%d",&n);
	    int a[n];
	    int b[n];
	    for(i=0;i<n;i++)
	    {
	     scanf("%d",&a[i]);
	     b[i] = pow(a[i],2);
	    }
	    int c=-1;
	    for(i=0;i<n-1;i++)
	    {
	        for(j=i+1;j<n;j++)
	        {
	            if(b[i]+b[j]==search(b,b[i]+b[j]))
	            {
	              printf("Yes");
	              c=1;
	              break;  
	            }
	           
	        }
	        if(c==1)
	        break;
	        if(i==n-2)
	        printf("No");
	    }
	    printf("\n");
	}
	return 0;
}
