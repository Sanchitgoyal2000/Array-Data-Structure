int peakElement(int a[], int n)  //in log(n) time
{                                //using concept of binary search
                                 // returning any peak element index if present
   int left=0,right=n-1,mid;     //test case 1 4 3 5 6 7 8 and answer can be 4,8
   while(left<=right)           // but our code will return 8
   {
       mid=(left+right)/2;
       if((mid==0||a[mid]>=a[mid-1])&&(mid==n-1||a[mid]>=a[mid+1]))
       {
           return mid;
       }
       else if(a[mid-1]>a[mid])
       {
           right=mid-1;
       }
       else
       left=mid+1;
   }
   return -1;
}
