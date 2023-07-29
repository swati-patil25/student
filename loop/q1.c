// possitive integer if the number is even odd up digit othervoise multipiay the individual digit and print//
  
  
      #include <stdio.h>

     int main()
      {
        int n;
        printf("enter the number n =");
         scanf("%d", &n);
       int i = 1, p = 1, s = 0;
                  while (n>0)
                  {
                  
            if (n % 2 == 0) 
            {
            int m = n % 10;
            s = s + m;
            n = n / 10;
            }
        
        else
         {
            int b = n % 10;
            p = p * b;
            n = n / 10;
        }
    }
 printf("%d%d\n", p, s);
    return 0;
}
        
               
         
