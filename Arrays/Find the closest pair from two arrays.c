/*   Given two arrays and a number x, find the pair whose sum is closest to x and the pair has an element from each array.

Input:
The first line consists of a single integer T, the number of test cases. For each test case,
the first line contains 2 integers n & m denoting the size of two arrays. 
Next line contains n- space separated integers denoting the elements of array A and 
next lines contains m space separated integers denoting the elements of array B followed by an integer x denoting the number
whose closest sum is to find.

Output:
For each test case, the output is 2 space separated integers whose sum is closest to x.  

Constraints:
1<=T<=100
1<=n,m<=50
1<=A[i],B[i]<=500

Example:
Input:
2
4 4
1 4 5 7
10 20 30 40
32
4 4
1 4 5 7
10 20 30 40
50
Output: 
1 30
7 40   */

---------------------------------------------CODE-----------------------------------------------
#include <stdio.h>


void InsertionSort(int a[],int n)
{
     int i,j,val;
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
}
int main() {
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,m,i,j;
        scanf("%d %d\n",&n,&m);
        int x[n+1],y[m+1];
        for(i=1;i<=n;i++)
        scanf("%d ",&x[i]);
         for(i=1;i<=m;i++)
        scanf("%d ",&y[i]);
        int d;
        scanf("%d",&d);
        InsertionSort(x,n);  /* sort both the arrays */
        InsertionSort(y,m);
        int val1,val2,max1=0,max2=1001,n1=0,n2=0,n3=0,n4=0;
        for(i=1;i<=n;i++)
        {   
            val1 = x[i];
            for(j=1;j<=m;j++)
            {
                val2 = y[j];
                if((val1 + val2)>max1 && (val1 + val2)<=d)  /* finding max no below d */
                {
                    max1 = val1+val2;
                    n1 = val1;
                    n2 = val2;
                }
                else if((val1 + val2)>d && (val1 + val2)<max2)   /* finding lowest no above d */
                {
                   max2 = val1 + val2;
                   n3 = val1;
                   n4 = val2;
                }
                
                
            }
        }
        int p,q;
        p = n1 + n2;
        q =  n3 + n4;
        if(n1!=0 && n2!=0)   /* to check if there were numbers sum below d */
        if(((d - p) < (q - d) ) || (n3==0 && n4==0))  /*To check the difference whichever is lower i.e below d or above d & also the last nos sum in both the arrays are less than d*/
        printf("%d %d\n",n1,n2);
        else if( ((d - p)==(q - d) ) )    /* if difference is equal print the no which is lower in first array */
        {
            if(n1<n3)
             printf("%d %d\n",n1,n2);
             else
             printf("%d %d\n",n3,n4);
        }
        else if((d-p)< 0)           /*if d is way lower than any no pair sum*/
        printf("%d %d\n",n1,n2);
        else printf("%d %d\n",n3,n4);
        else printf("%d %d\n",n3,n4); /* all numbers sum were above d */
    
    }
	//code
	return 0;
}
