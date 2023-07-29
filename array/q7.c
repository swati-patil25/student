// odd number//
  #include <stdio.h>
  int main()
  {
    int n;
    printf("enter the number  =");
      scanf("%d",&n);
       int arr[n];
       int c=1;
       int s = 0;
       for(int i=0;i<n;i++)
     {
         if(c%2!=0)
         {
            arr[s]=c;
            s++;

         }
         c = c + 1;
     }
      for(int i=0;i<s;i++)
      {
        printf("%d\n",arr[i]);
      }
      return 0;
  }
