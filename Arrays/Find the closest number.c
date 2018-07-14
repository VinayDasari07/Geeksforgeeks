
Given an array of sorted integers. The task is to find the closest value to the given number in array. Array may contain duplicate values.

Note: If the difference is same for two values print the value which is greater than the given number.

Input:
The first line of input contains an integer T denoting the number of test cases. Then T test cases follow. Each test case consists of two lines. First line of each test case contains two integers N & K and the second line contains N space separated array elements.

Output:
For each test case, print the closest number in new line.

Constraints:
1<=T<=100
1<=N<=105
1<=K<=105
1<=A[i]<=105

Example:
Input:
2
4 4
1 3 6 7
7 4
1 2 3 5 6 8 9

Output:
3
5






----------------------------------------CODE---------------------------------------------


int main() {
	//code
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int i,j,m,n;
	    int pos1=-1;
	    
	    scanf("%d %d",&n,&m);
	    int a[n];
	    int pos=-1;;
	    int c=0;
	    for(i=0;i<n;i++)
	    scanf("%d",&a[i]);
	    for(i=0;i<n;i++)
	    {
	     if(m<=a[i]&&c==0)
	     {
	         pos = i;
	         c=1;
	     }
	    }
	    if(pos==-1)
	    printf("%d",a[n-1]);
	    else if(pos==0)
	    printf("%d",a[0]);
	    else
	    {
	    int dif2,dif1,max;
	    dif2 = a[pos]-m;
	    dif1 = m-a[pos-1];
	    max = (a[pos]>a[pos-1]?a[pos]:a[pos-1]);
	    printf("%d ",(dif1<dif2?a[pos-1]:(dif1>dif2)?a[pos]:max));
	    }
	    printf("\n");
	        
	}
	return 0;
}
