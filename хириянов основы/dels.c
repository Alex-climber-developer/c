#include <stdlib.h>
#include <stdio.h>
#include <float.h> 
#include <math.h>  
// #include <d_r_funcs.h>
unsigned int a, b, max, lenarr,i,n;
extern unsigned int arr[100]={};

int chek_easy(n) {
  int f =1;
  arr[lenarr++]= 1;arr[lenarr++]= n;
  for ( i = 2; i < (int)sqrt(n)+1; i++) { /*оптимизация   - пробегаем до корня+1  тк дальше не надо */
    if (n%i==0) {
      f = 0; 
      break;
    }
  }
  return f;
}


int dels(n) {
  lenarr = 0;
  for ( i = 2; i < (int)sqrt(n)+1; i++) { /*оптимизация   - пробегаем до корня+1  тк дальше не надо */
    if (n%i == 0) {
      if (chek_easy(i)) {
        arr[lenarr++]= i;
        if (chek_easy(n/i)){
          arr[lenarr++]= n/i;
          break;
        }  else {dels(n/i);}
      } else {dels(i); }
    }
  }
  return arr;
}

int main()
{
  

  // while (1)
  // {
  //   printf("a (a in N & a>10): ");
  //   scanf("%u",&a);
  //   printf("b (b in N & b>10): ");
  //   scanf("%u",&b);
  //   if (typeof(a)!=(int) && typeof(b)!=(int)){
  //     break;
  //   }
  // }
  printf("a (a in N & a>10): ");
  scanf("%u",&a);
  dels(a);
  for ( i = 0; i < lenarr+1; i++) {
    printf("%d  ",arr[lenarr]);
  }
  return 0;
}
