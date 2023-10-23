#include <stdio.h>
#include <stdbool.h>

int main() {
  int i;
  scanf("%d",&i);
  bool a = true;

  if (i<=1){
    a=false;
  }
  else {
    for(int k=2;k*k<=i;k++){
      if(i%k==0){
        a=false;
      }
    }
  }
  if (a==true)
  printf("YES");
  else
    printf("NO");
}

