/*Given a number n print the first n fibonacci numbers.
Input:
The first line of input contains an integer T denoting the number of test cases. Then T test cases follow. The first line of each test case contains the integer N.

Output:
Print the first n fibonacci numbers with a space between each number. Print the answer for each test case in a new line.

Constraints:
1<= T <=100
1<= N <=100

Example:
Input:
1
7
Output:
1 1 2 3 5 8 13  */



#include<stdio.h>
int main() {
	//code
	int t;
	scanf("%d",&t);
	long int fib(long int a,long int memo[])
	{
	    long int result;
	    if (a==1)
	    {
	        result = 1;
	        memo[1]=1;
	    }
	    else if(a==2)
	    {
	        result = 1;
	        memo[2]=1;
	    }
	    
	    else 
	    {
	        if(memo[a]==0)
	        {
	          result = fib(a-1,memo)+fib(a-2,memo);
	          memo[a]= result;
	        }
	        else result= memo[a];
	     }
	     return result;
	}
	while(t--)
	{
	    int n,i;
	    scanf("%d",&n);
	    long int memo[100]={0};
	    for(i=1;i<=n;i++)
	    {
	       printf("%ld ",fib(i,memo));
	    }
	    printf("\n");
	}
	return 0;
}
