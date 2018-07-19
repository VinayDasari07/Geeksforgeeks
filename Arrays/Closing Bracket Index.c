/*  Given a string with brackets. If the start index of the open bracket is given, find the index of the closing bracket.

Examples:

Input : string = [ABC[23]][89]
        index = 0
Output : 8
The opening bracket at index 0 corresponds
to closing bracket at index 8.
Constraints:
1<=T<=100
1<=N<=10000
INPUT:
1
[ABC[23]][89]
0
OUTPUT:
8              */


----------------------------------------CODE--------------------------------------------

int main() {
	 int x, t, n, i;
	 scanf("%d", &t);
	 
	  while (t--)
    {
       
        char a[1000];
        int c=0,pos=0;
        scanf("%s",a);
        scanf("%d", &x);
        for(i=x+1;i<strlen(a);i++)
        {
            if(a[i]==']')
            {
                if(c==0)
               {
                 printf("%d\n",i);
                 break;
               }    
               else c--;
            }
            else if(a[i]=='[')
            c++;
        }
        
    }
	return 0;
}
