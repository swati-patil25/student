 /*
    * * * * * 
   * * * * * 
  * * * * * 
 * * * * * 
* * * * * 
 * * * * * 
  * * * * * 
   * * * * * 
    * * * * * 
*/   
    
    
    #include <stdio.h>
    int main()
    {
       int n;
         printf("enter the number n =");
           scanf("%d",&n);
             for(int i=1;i<=n;i++)
            {
                 for(int k=n-i;k>0;k--)
                 {
                    printf(" ");
                 }
                   for(int j=1;j<=n;j++)
                   {
                       printf("* ");
                    }
                     printf("\n");
              }
                 for(int t=1;t<=n-1;t++)
                 {
                     for(int p=t;p>0;p--)
                     {
                        printf(" ");
                     }
                       for(int k=1;k<=n;k++)
                       {
                           printf("* ");
                        }
                          printf("\n");
                   }
                  return 0;
          }         
                 
                    
      
                 
                      
                  
