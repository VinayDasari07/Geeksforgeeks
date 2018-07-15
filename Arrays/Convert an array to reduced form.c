
/*Given an array with n distinct elements, convert the given array to a reduced form where all elements are in range from 0 to n-1. The order of elements is same, i.e., 0 is placed in place of smallest element, 1 is placed for second smallest element, … n-1 is placed for largest element.

Input:

The first line of input contains an integer T denoting the number of test cases.
The first line of each test case is N, where N is the size of array.
The second line of each test case contains N input arr[i].

Output:

Print the reduced form of the array.

Constraints:

1 ≤ T ≤ 100
1 ≤ N ≤ 200
1 ≤ arr[i] ≤ 1000

Example:

Input:
2
3
10 40 20
5
5 10 40 30 20

Output:
0 2 1
0 1 4 3 2*/
-------------------------------CODE--------------------------------------
  
  
  
  #define MAX 1001
 int s[1001],a[1001];
 int tos1=-1,tos2=-1;
 

int isempty1()
{
 if(tos1==-1)
   return 1;
 else
   return 0;
}
int isempty2()
{
 if(tos2==-1)
   return 1;
 else
   return 0;
}
void push1(int ele)
{
 if(tos1==MAX-1)
   printf("Stack Overflow.");
 else
 {
   tos1++;
   a[tos1]=ele;
 }
}
void push2(int ele)
{
 if(tos2==MAX-1)
   printf("Stack Overflow.");
 else
 {
   tos2++;
   s[tos2]=ele;
 }
}
int pop1()
{
 if(isempty1())
 {
  printf("Stack Underflow.");
  return -1;
 }
 else
  {
   tos1--;
   return a[tos1+1];
  }
}
int pop2()
{
 if(isempty2())
 {
  printf("Stack Underflow.");
  return -1;
 }
 else
  {
   tos2--;
   return s[tos2+1];
  }
}
int stacktop1()
{
  if(isempty1())
  {
    printf("Stack empty.");
    return -1;
  }
  else
    return a[tos1];
}
void display1()
{
 int i;
 for(i=tos1;i>=0;i--)
 {
  printf("%d ",a[i]);
 
 }
}
int stacktop2()
{
  if(isempty2())
  {
    printf("Stack empty.");
    return -1;
  }
  else
    return s[tos2];
}
void display2()
{
 int i;
 for(i=tos2;i>=0;i--)
 {
  printf("%d ",s[i]);
 }
}

int main() {
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int i,n,no;
	    scanf("%d",&n);
	    tos1=-1,tos2=-1;
	    for(i=0;i<n;i++)
	    {
	        scanf("%d",&no);
	        push1(no);
           push2(no);
	        
	    }
	    int j,temp;
	    for(i=tos1;i>0;i--)
	     {
	       
	      for(j=tos1;j>0;j--)
	      {
	        if(a[j]<a[j-1])
	        {
	         temp = a[j];
	         a[j] = a[j-1];
	         a[j-1] = temp;
	        }
	      }
	     }
	    
	    int index[n];
	    int ele,k=0;
	    for(i=tos2;i>=0;i--)
	    {
	      ele = s[tos2];
	      for(j=tos1;j>=0;j--)
	       {
	        if(a[j]==ele)
	        index[k++] = j;
	       }
	    
	    pop2();
	    
	    }
	    
	    k--;
	    
	   for(i=k;i>=0;i--)
	   printf("%d ",index[i]);
	    printf("\n");
	    
	}

	return 0;
}
