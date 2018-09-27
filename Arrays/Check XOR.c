/* Given an array arr[] containing N positive integers. 
The task is to write a program to calculate the XOR of all of the elements of the array and 
then check if the right-most bit of the calculated XOR is set or not. 

Input:  The first line of input is an integer T, denoting the number of test cases. For each test case,
the first line of input is the integer N, the size of array arr[]. The second line of each test case 
contains N space separated integers denoting the elements of the array.

Output: For each test case, print "YES" if the right-most bit in the XOR of all of the array elements is set 
otherwise print "NO" without quotes.
 
Constraints:
1 <= T <= 100
1 <= N <= 105
1 <= arr[i] <= 105

Example:
Input:
2
5
1 2 3 4 5
5
1 2 3 1 3
Output:
YES
NO*/
-------------------------------------CODE---------------------------------
#include <stdio.h>

int main() {
	//code
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n;
	    scanf("%d",&n);
	    int a[n];
	    int i;
	    for(i=0;i<n;i++)
	    scanf("%d",&a[i]);
	    int ones=0;
	    for(i=0;i<n;i++)
	     if(a[i]%2==1)
	       ones++;
	        
	    if(ones % 2 ==1)
	    printf("YES\n");
	    else
	    printf("NO\n");
	    
	    
	    
	    
	}
	return 0;
}
