/*Adobe is playing an array game. He is weak in the concepts of arrays. Adobe is given two arrays a[ ] and b[ ] of the same size. The array a[ ] will be said to fit in array b[ ] if by arranging the elements of both array, there exists a solution such that i_th element of a[ ] is less than or equal to an i_th element of b[ ]. Help Adobe find if the given arrays are fit or not.

Input:
The first line of input contains an integer T denoting the number of test cases. For each test case, the next subsequent line contains the integer N i.e. size of arrays followed by array a[ ] and then array b[ ].

Output:
Print "YES" if array a[ ] fit in array b[ ] otherwise print "NO".

Constraints:
1<= T<= 100
1<= N<= 100
0<=a[ i ]<=1000
0<= b[ i ]<=1000

Example:
Input
2
4
7 5 3 2 
5 4 8 7
8
7 5 3 2 5 105 45 10
2 4 0 5 6 9 75 84
Output
YES
NO */

-----------------------------------CODE----------------------------------------

#include <stdio.h>

void sort(int a[],int n)
{
    int i,j,temp;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
}

int main() {
	//code
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int i,j,n;
	    scanf("%d",&n);
	    int a[n],b[n];
	    for(i=0;i<n;i++)
	    scanf("%d",&a[i]);
	    for(i=0;i<n;i++)
	    scanf("%d",&b[i]);
	    sort(a,n);
	    sort(b,n);
	    int p =1;
	    for(i=0;i<n;i++)
	    {
	        if(a[i]>b[i])
	        {
	            p = 0;
	            break;
	        }
	    }
	    if(p==1)
	    {
	        printf("YES\n");
	    }
	    else printf("NO\n");
	    
	    
	}
	return 0;
}
