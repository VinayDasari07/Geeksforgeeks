/* Given an array of integers, find the nearest smaller number for every element such that the smaller element is on left side.
If no small element present on the left print -1.

Input:

The first line of input contains T test cases. 

The first line of each test case contains the number of elements in the array.

The second line of each test case contains the elements of the array.

Output:

Print the n elements.
Constraints:

1<=T<=100

1<=N<=100

0<=A[i]<10000
Example:

Input:

2

3

1 6 2

6

1 5 0 3 4 5

Output:

-1 1 1

-1 1 -1 0 3 4  */


-------------------------------------CODE----------------------------------------------------

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
  printf("%d\n",a[i]);
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
	        
	    }
	   
	    
	    for(i=tos1;i>0;i--)
	    {
	      if(a[tos1]>a[tos1-1])
	      {
	          
	          push2(a[tos1-1]);
	          pop1();
	      }
	      else 
	      {
	        int j;
	        int m = tos1 -1;
	        int elem=a[tos1];
	        int pos = -1;
	        for(j=m;j>=0;j--)
	        {
	          if(elem >a[j])
	          {
	          pos = j;
	          break;
	          }
	        }
	        if(pos!=-1)
	        push2(a[pos]);
	        else push2(-1);
	        pop1();
	      }
	    }
 
	    push2(-1);
	    
	    
	    display2();
	    printf("\n");
	    
	}

	return 0;
}























