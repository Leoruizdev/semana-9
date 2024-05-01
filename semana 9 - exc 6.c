#include <stdio.h>

int buscaBinaria(int vet[], int esq, int dir, int alvo) {
    if (dir >= esq) {
        int meio = esq + (dir - esq) / 2;

        
        if (vet[meio] == alvo)
            return meio;

        
        if (vet[meio] > alvo)
            return buscaBinaria(vet, esq, meio - 1, alvo);

        
        return buscaBinaria(vet, meio + 1, dir, alvo);
    }

    
    return -1;
}

int main() {
    int vet[] = {1, 2, 3, 6, 11, 12, 12, 15, 23, 25};
    int n = sizeof(vet) / sizeof(vet[0]);
    int achar, result;

    printf("Digite o n para buscar: ");
    scanf("%d", &achar);

    result = buscaBinaria(vet, 0, n - 1, achar);

    if (result == -1)
        printf("O número %d não foi encontrado no vetor.\n", achar);
    else
        printf("O número %d foi encontrado na posição %d do vetor.\n", achar, result);

    return 0;
}
