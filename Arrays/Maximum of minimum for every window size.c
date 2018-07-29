/* Given an integer array of size n, find the maximum of the minimum’s of every window size in the array. Note that window size varies from 1 to n.

Input:
The first line contains an integer 'T' denoting the total number of test cases. In each test cases, the first line contains an integer 'N' denoting the size of array. The second line contains N space-separated integers A1, A2, ..., AN denoting the elements of the array.


Output:
In each seperate line print the array of numbers of size n for each of the considered window size 1,2,...,n respectively.


Constraints:
1<=T<=30
1<=N<=100
1<=A[I]<=5000


Example:
Input: 
2
7
10 20 30 50 10 70 30
3
10 20 30

Output: 
70 30 20 10 10 10 10 
30 20 10

Explaination:
 

Input:  arr[] = {10, 20, 30, 50, 10, 70, 30}
Output:         70, 30, 20, 10, 10, 10, 10

First element in output indicates maximum of minimums of all 
windows of size 1.
Minimums of windows of size 1 are {10}, {20}, {30}, {50}, {10},
{70} and {30}.  Maximum of these minimums is 70

Second element in output indicates maximum of minimums of all 
windows of size 2.
Minimums of windows of size 2 are {10}, {20}, {30}, {10}, {10},
and {30}.  Maximum of these minimums is 30

Third element in output indicates maximum of minimums of all 
windows of size 3.
Minimums of windows of size 3 are {10}, {20}, {10}, {10} and {10}. 
Maximum of these minimums is 20

Similarly other elements of output are computed.*/





---------------------------------------------------------CODE------------------------------------------------------
#include<stdio.h>

int main()
{
  int t;
  scanf("%d",&t);
  while(t--)
  {
    int i,j,k,max,min,n;
    scanf("%d",&n);
    int a[n];
    int x[500][500] = {0};
    for(i=0;i<n;i++)
    scanf("%d",&a[i]); 
      
    for(i=0;i<n;i++)
    {
      min = a[i],k=0;
     for(j=i;j<n;j++)
     {
      if(a[j]<min)
      {
       min = a[j];    
      }
       x[i][k++] = min;
       
     }
     
    
    }
    
    for(i=0;i<n;i++)
    {
     max=0;
     for(j=0;j<n;j++)
     {
       if(x[j][i]>max)
       {
        max = x[j][i];
       }
     }
     printf("%d ",max);
  
    }
    
    printf("\n"); 
  
  }


return 0;
}




