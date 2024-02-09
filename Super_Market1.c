#include <stdio.h>
#include <stdlib.h>

void DisplayRegularCustomers(int *arr, int limit) {
    int eligible = 0;
    for (int i = 9; i > 0; i--) {
        for (int j = 9; j >= 0; j--) {
            if (arr[j] == i && eligible < limit) {
                printf("%d ", j);
                eligible++;
            }
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);
    
    int *arr = (int *) malloc(n * sizeof(int));
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    
    int limit;
    scanf("%d", &limit);
    
    int *Vic = (int *) calloc(10, sizeof(int));
    for (int i = 0; i < n; i++) {
        Vic[arr[i]]++;
    }
    
    DisplayRegularCustomers(Vic, limit);
    
    free(arr);
    free(Vic);
}
