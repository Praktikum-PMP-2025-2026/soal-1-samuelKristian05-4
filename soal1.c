#include <stdio.h>
#include <stdlib.h>

int n = 0;   // jml bilangan - 1
typedef struct data {
    int* input;
    int nBil;
    int sorted[1024];
    float median;
} data;


data* newData();

int main() {
    data* var = newData();

    /* printf("Data Input: %d\n", var->input); */
    printf("COUNT %d\n", var->nBil);
    printf("SORTED ");
    for (int i = 0; i < n+1; i++) {
            printf(sorted[i]);
    }
    printf("\nMEDIAN %d\n", var->median);
}

data* newData() {  
    data* new = malloc(sizeof(data));

    // data masuk
    int buffer[1024];
    for (""; buffer[n] != -1; n++) {
        scanf("%d", &buffer[n]);
    }
    // data count
    int jmlBil = n + 1;
    new->nBil = jmlBil;
    // data tersorted
    *new->sorted = sort(buffer[1024]);
    // data median
    *new->sorted = median(buffer[1024]);
}


int sort(int x[]) {
    int bil[n+1];
    // bubble sort

    for (int q = 1; q < n+1; q++) {
    int i = 0;
    if (bil[i] < bil[i+1]);
    (bil[i] = bil[i+1]) && (bil[i+1] = bil[i]);
    }
}
/* int A[5] = {2, 3, 1, -2, 0};
sort(A); */

float median(int y[]) {
    float indexMid = (n + 1) / 2;
    float nilaiMed = buffer[indexMid]; 
    return nilaiMed;
}

