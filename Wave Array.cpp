int cmp(const void *a,const void *b)
{
   return (*(int *)a) - (*(int *)b);
}
int* wave(int* a, int n, int *len1)
{
    qsort(a,n,sizeof(int),cmp);   // for lexographical order ,sort the array
        int i,h=0,p;
        for(i=0;i<n-1;i++)
        {
            if(h==0)
            {
                if(a[i]>a[i+1])
                {
                    h=1;
                    continue;
                }
                else
                {
                    p=a[i+1];
                    a[i+1]=a[i];
                    a[i]=p;
                    h=1;
                }
            }
            else
            {
               if(a[i]<a[i+1])
                {
                    h=0;
                    continue;
                }
                else
                {
                    p=a[i+1];
                    a[i+1]=a[i];
                    a[i]=p;
                    h=0;
                }
            }
        }
       *len1=n;
       return a;
}
