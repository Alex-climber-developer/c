#include <stdio.h>
void hanoi(int n, int i, int k);

int main(){
  hanoi(3,1,2);





  return 0;
}


void hanoi(int n, int i, int k)
{
  if (n == 1)
  {
    printf("move disk 1 from %d to %d \n" ,i,k );

  } else {
    int tmp = 6 - i -k;
    hanoi(n-1, i,tmp);
    printf("move disk %d from %d to %d \n" ,n,i,tmp );
    hanoi(n-1,tmp,k);
  }
  


}