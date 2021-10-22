#include <stdio.h>

int jump(n){
  if (n == 0)
  {
    return 0;
  } else if (n ==1)
  {
    return 1;
  } else {
    return jump(n-1) + jump(n-2) ;
  }
  
}

int main(){
  printf(jump(3));
}

// #include <stdio.h>
// int main(){
//   int a,b;
//   a=3;b=20;
//   double c;
//   c=b/a;
//   printf("%lf\n",c);
// }