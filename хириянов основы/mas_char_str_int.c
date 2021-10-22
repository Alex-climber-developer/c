#include <stdio.h>
#define N 3
int main()
{
  // signed char x1 = 48, x2 = 57, x3 = 127;
  // int i1 = 33000;
  // long int i2 = 29999999999999999;
  // printf(" 0- %c 9- %c / 48 - %d / 33000- %d , %ld - / %d - ", x1,x2,x1,i1,i2,x3+2);

  // char arr[]={0,1,2, 3, 4, 5};
  // double arr1[3];

  // float arr2[]={0,1,2, 3, 4, 5};

  // double arr3[N];
  // char arr4[]={'1','2','3', '\0'};
  // char str[]="hello w\n";
  // double arr5[3];
  // arr1[0]= 'w';

  // arr1[1]= 127;

  // arr3[0]= 1.1;
  // arr3[1]= 2.00004;

  // arr5[0]= 1.0;
  // arr5[1]= 1.2;
  // printf("%f - %f - %.2f - %g - %e - %f %d", arr1[0],
  // arr1[1],arr3[0],arr3[1],arr5[1],arr5[0]);
  // printf("%s %s",arr4,str);
  // printf("%lu ", sizeof(int));
  int i = 1,j=1;
  while (i<=10)
  {
    
    while (j<=10)
    {

      
      printf("%d ", i*j);
      j++;
    }
    printf("\n");
    i++;
    j = 1;
  }
  
  return 0;ч

}