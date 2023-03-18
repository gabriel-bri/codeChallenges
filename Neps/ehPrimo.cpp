#include <stdio.h>
#include <stdbool.h>

bool is_primo(int numero);

int main(void) {

    int N;
    
    scanf("%d", &N);
 
    if(is_primo(N))
        printf("S\n");
    else 
        printf("N\n");
  
  return 0;
}

bool is_primo(int numero) {

  if (numero <= 1) 
    return false;
  
  for (int i = 2; i <= (numero / 2); i++)
    if (numero % i == 0) 
        return false;
  
  return true;
}