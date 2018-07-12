/*
Given an array of elements. The task is to sort the array and calculate the cumulative frequency of each element of the array.

Input:
The first line of input contains an integer T denoting the number of test cases. Then T test cases follow. Each test case consists of two lines. First line of each test case contains an integer N and the second line contains N space separated array elements.

Output:
For each test case, print the space separated cumulative frequency of each element of sorted array in new line.

Constraints:
1<=T<=100
1<=N<=105
1<=A[i]<=105

Example:
Input:
2
6
1 2 2 1 3 4
6
1 2 1 2 1 2

Output:
2 4 5 6
3 6

Explanation:

Input : arr[] = [1, 3, 2, 1, 2, 4]
Output :1->2
        2->4
        3->5
        4->6

Input : arr[] = [1, 2, 1, 2, 1, 2]
Output :1->3
        2->6 */
        
        
        
#include<stdio.h>
int main() {
	int t;
	scanf("%d",&t);
	
	while(t--)
	{
	    int n,max=0,i,k;
	    scanf("%d",&n);
	    int a[n];
	    for(i=0;i<n;i++)
	    {
	      scanf("%d",&a[i]);
	      if(a[i]>max)
	      max = a[i];
	    }
	    
	    int count[100001] = {0};
	    for(i=0;i<n;i++)
	    {
	        count[a[i]]++;
	    }
	    int j=0,sum=0;
	    for(k=0;k<max+1;k++)
	    {
	        sum = sum + count[k];
	        if(count[k]!=0)
	        printf("%d ",sum);
	    }
	    printf("\n");
	}
	
	return 0;
}
