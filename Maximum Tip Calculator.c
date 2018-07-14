/*
Rahul and Ankit are the only two waiters in Royal Restaurant. Today, the restaurant received N orders. The amount of tips may differ when handled by different waiters, if Rahul takes the ith order, he would be tipped Ai rupees and if Ankit takes this order, the tip would be Bi rupees.
In order to maximize the total tip value they decided to distribute the order among themselves. One order will be handled by one person only. Also, due to time constraints Rahul cannot take more than X orders and Ankit cannot take more than Y orders. It is guaranteed that X + Y is greater than or equal to N, which means that all the orders can be handled by either Rahul or Ankit. Find out the maximum possible amount of total tip money after processing all the orders.


Input:

•    The first line contains one integer, number of test cases.
•    The second line contains three integers N, X, Y.
•    The third line contains N integers. The ith integer represents Ai.
•    The fourth line contains N integers. The ith integer represents Bi.

 

Output:
Print a single integer representing the maximum tip money they would receive.
 
 
 
 

Constraints:
1 ≤ N ≤ 105
1 ≤ X, Y ≤ N; X + Y ≥ N
1 ≤ Ai, Bi ≤ 104

 

Example:

Input:

2
5 3 3
1 2 3 4 5
5 4 3 2 1
8 4 4
1 4 3 2 7 5 9 6 
1 2 3 6 5 4 9 8

 

Output:

21
43*/



----------------------------------------CODE--------------------------------------------


#include <stdio.h>
#include <stdlib.h>




int main() {
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int u,v;
        int n;
        scanf("%d %d %d",&n,&u,&v);
        int a[n],b[n];
        int i,j;
        for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        for(j=0;j<n;j++)
        scanf("%d",&b[j]);
        int c[2][n];
        for(i=0;i<n;i++)
        {
           c[0][i] = abs(a[i] - b[i]);
           c[1][i] = i;
        }
        int t0,t2,t3,t1,t4,t5;
    
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(c[0][j]<=c[0][j+1])
            {
                if(c[0][j]<c[0][j+1])
                {
                    t1 = c[1][j];
                    t0 = c[0][j];
                    c[1][j] = c[1][j+1];
                    c[0][j] = c[0][j+1];
                    c[1][j+1] = t1;
                    c[0][j+1] = t0;
                }
                else
                {
                    int p,q;
                    p = (a[c[1][j]]>b[c[1][j]]?a[c[1][j]]:b[c[1][j]]);
                    q = (a[c[1][j+1]]>b[c[1][j+1]]?a[c[1][j+1]]:b[c[1][j+1]]);
                    if(p<q)
                    {
                        t3 = c[1][j];
                        t5 = c[0][j];
                        c[1][j] = c[1][j+1];
                        c[0][j] = c[0][j+1];
                        c[1][j+1] = t3;
                        c[0][j+1] = t5;
                    }
                }
            }
        }
    }
       
        int maxtip = 0;
        int c1=0;
        int c2 = 0;
        for(j=0;j<n;j++)
        {
          if(a[c[1][j]]>b[c[1][j]])
          {
              if(c1<u)
              {
                c1++;
                maxtip += a[c[1][j]];
               }
              else if(c2<v)
              {
                  c2++;
                  maxtip += b[c[1][j]];
                  
              }
          }
          else
          {
              if(c2<v)
              {
                  c2++;
                  maxtip += b[c[1][j]];
                  
              }
              else if(c1<u)
              {
                c1++;
                maxtip += a[c[1][j]];
                
              }
          }
            
        }
        printf("%d",maxtip);
        printf("\n");
       
        
    }
	//code
	return 0;
}
