#include <iostream>
using namespace std;

int main() {         // Space Complexity is O(1)
	//code
	int t;
	cin>>t;
	while(t-->0)
	{
	    int n1,n2;
	    cin>>n1>>n2;
	    
	    int A[n1][n2];         
	  
	    for(int i=0;i<n1;i++)
         {
           for(int j=0;j<n2;j++)
            {
              cin>>A[i][j];
            }
         }
         
    int i,j,rf=1,cf=1;
    
    for(i=0;i<n1;i++)
    {
        if(A[i][0]==1)
        {
          rf=0;
          break;
        }
    }
    
    for(j=0;j<n2;j++)
    {
        if(A[0][j]==1)
        {
          cf=0;
          break;
        }
    }
    
    for(i=0;i<n1;i++)
    {
        for(j=0;j<n2;j++)
        {
           if(A[i][j]==1)
           {
               A[i][0]=1;
               A[0][j]=1;
           }
        }
    }
    
    
    for(i=1;i<n1;i++)
    {
        for(j=1;j<n2;j++)
        {
            if(A[i][0]==1||A[0][j]==1)
            {
                A[i][j]=1;
            }
        }
    }
    
    if(rf==0)
    {
        for(i=0;i<n2;i++)
          A[0][i]=1;
    }
    
    if(cf==0)
    {
        for(j=0;j<n1;j++)
          A[j][0]=1;
    }
    
    for(i=0;i<n1;i++)
    {
        for(j=0;j<n2;j++)
        {
            cout<<A[i][j]<<" ";
        }
        cout<<"\n";
    }
	}
	return 0;
}


------------------------------------------------------------------------------------------------------------------------------
void setZeroes(int** A, int n1, int n2)
{
    int row[n1],col[n2];    // Space Compleity is O(m+n) time O(m*n)
    int i,j,rf=1,cf=1;
    for(i=0;i<n1;i++)
       row[i]=1;
    for(i=0;i<n2;i++)
       col[i]=1;
    for(i=0;i<n1;i++)
    {
        if(A[0][i]==0)
        rf=0;
       // A[0][i]=1;
    }
    for(j=0;j<n1;j++)
    {
        if(A[j][0]==0)
        cf=0;
        //A[j][0]=1;
    }
    for(i=0;i<n1;i++)
    {
        for(j=0;j<n2;j++)
        {
           if(A[i][j]==0)
           {
               A[i][0]=0;
               A[0][j]=0;
           }
        }
    }
    for(i=0;i<n1;i++)
    {
        for(j=0;j<n2;j++)
        {
            if(A[0][i]==0||A[j][0]==0)
            {
                A[i][j]=0;
            }
        }
    }
    if(rf==0)
    {
        for(i=0;i<n1;i++)
           A[0][i]=0;
    }
    if(cf==0)
    {
        for(i=0;i<n2;i++)
           A[j][0]=0;
    }
}
