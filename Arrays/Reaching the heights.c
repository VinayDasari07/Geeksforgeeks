/*  Teacher gives a mental ability question to Raju . The question is as follows:-

Raju is in an elevator. Given by his teacher is an array of size N which denotes the number of floors and has a 1 based indexing.
The elevator starts from the ground and moves up and down, X and Y floors respectively. 
There is a code used in the elevator according to which it moves up X floors given at odd indexes of the array and
moves down Y floors given at even indexes of the array. He is asked to go to the highest floor possible.
Help him to sort the array such that he reaches the highest floor after traversing the whole array from starting till the end,
without skipping any index.

He always prefers to move more number of floors up and less number of floors down. Once he gets into the elevator,
the elevator should not reach the ground again, if it does print “Not Possible”.

Input:

The first line of input contains an integer T denoting the number of test cases. T test cases follow.
The first line of each test case contains N denoting size of the array. The second line of each test case contains elements of the array separated by a single space.


Output:

For each test case, print the sorted array or “Not Possible”.


Constraints:

1 ≤ T ≤ 10

1 ≤ N ≤ 1000

1 ≤ X , Y ≤ 1000

Example:

Input:

2

4

2 3 4 5

2

1 1

Output:

5 2 4 3

Not Possible

Explanation:

Case 1:

Array can be arranged as {5,3,4,2} or {4,3,5,2} or {4,2,5,3} but it will get arranged as {5,2,4,3}
because he always prefer to move more number of floors up and less number of floors down.

Case 2:

Not possible.  */





---------------------------------------------CODE----------------------------------------------------

#include <stdio.h>

int main() {
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int i,j,n;
        scanf("%d",&n);
        int a[n+1];
        for(i=1;i<=n;i++)
        scanf("%d",&a[i]);
        int p,q,val;
        if(n==2)
        {
            p =1;
            q =2;
        }
       
        else 
        {
            p = n/2;
            q = n-p;
        }
        for(i=1;i<n;i++)
        {
            val = a[i+1];
            for(j=i;j>=1;j--)
            {
                if(a[j]>val)
                a[j+1] = a[j];
                else break;
                
            }
            a[j+1] = val;
            
        }
        int b[n+1],k=1,sum1=0;
         sum1 = a[n];
        for(i=n;i>=q;i--)
        {
            b[k] = a[i];
            k = k+2;
           
        }
        k=2;
        int sum2=0;
        sum2 = a[1];
        for(i=1;i<=p;i++)
        {
            b[k] = a[i];
            k = k+2;
            
        }
        
        if((sum1-sum2)!=0)
         for(i=1;i<=n;i++)
        printf("%d ",b[i]);
        else if(n==1)
        printf("%d",a[1]);
        else printf("Not Possible");
        printf("\n");
    }//code
	return 0;
}
