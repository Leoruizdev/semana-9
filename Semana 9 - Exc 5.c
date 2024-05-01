#include <stdio.h>

int num_reverso(int num, int reverso_num){
  if (num == 0){
    return reverso_num;
  }
  else{
    return num_reverso(num / 10, reverso_num * 10 + num % 10);
  }
}
int main(){
  int num, reverso_num;

  printf("Digite um n inteiro: ");
  scanf("%d", &num);

  reverso_num = num_reverso(num, 0);

  printf("O número invertido é: %d\n", reverso_num);

  return 0;
}