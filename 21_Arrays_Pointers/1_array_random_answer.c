#include <stdio.h>
#include<time.h>
 
int main()
{
   int arr[10];
   int sum=0;

   srand(time(NULL));

   for (int i = 0; i < 10; i++)
   {
      int random=rand()%100;
      arr[i]=random;
      printf("%d\t",random);
      sum+=random;
   }

      printf("\nAverage=%d\n",sum/10);

   int max=arr[0];
   int min=arr[0];

   for (int i = 0; i < 9; i++)
   {
      if(max<arr[i+1])
      max=arr[i+1];

      if(min>arr[i+1])
      min=arr[i+1];
   }

   printf("Max Value=%d\n",max);
   printf("Min Value=%d\n",min);  

}
