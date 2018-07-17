Submissions: 865   Accuracy: 21.73%   Difficulty: Easy
       
A matrix is constructed of size n*n. such that Mi,j= i+j.
Count the number of cells having value q.

Assume, 1 based indexing.

Input:
The first line contains an integerT , the number of tescases.
Then each test case contains an integer n- size of the matrix , q- whose count you need to tell.
 

Output:
For every testcase, Output the count of q.
 

Constraints:
1<=T<=100
1<=n<=1000000000000000
2<=q<=2*n

Example:
Input:
2
4 7
5 4

Output:
6
3


Explanation:
1st testcase- Matrix becomes
2 3 4 5 
3 4 5 6 
4 5 6 7 
5 6 7 8

The count of 7 is 2

2nd testcase-Matrix becomes
2 3 4 5 6 
3 4 5 6 7 
4 5 6 7 8 
5 6 7 8 9 
6 7 8 9 10 
The count of 4 is 3

** For More Input/Outpu





-----------------------------------------------------------CODE--------------------------------------------------------------
#include<stdio.h>



int main() {
      int t;
      scanf("%d",&t);
      
      while(t--)
      {
        long long int n,ele;
        int c=0;
        scanf("%lli",&n);
        scanf("%lli",&ele);
        
        if(ele>n)
        c= (2*n - ele + 1);
        else c = ele - 1;

         printf("%d\n",c);
      }
	return 0;
}
