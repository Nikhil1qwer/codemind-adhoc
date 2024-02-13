#include <stdio.h>
#include <stdlib.h>

void GetCustomerID(int *id, int size) {
    for(int i = 0; i < size; i++) {
        scanf("%d", &id[i]);
    }
}

void CountVisits(int *id, int *visits, int size) {
    for(int i = 0; i < size; i++) {
        visits[id[i]]++;
    }
}

void FrequentCustomers(int *visits) {
    int limit;
    scanf("%d", &limit);
    
    for(int frequency = 9; frequency >= 0; frequency--) {
        for (int id = 9; id >= 0; id--) {
            if(visits[id] == frequency && limit > 0) {
                printf("%d ", id);
                limit--;
            }
        }
    }
    
}

int main() {
    int size;
    scanf("%d", &size);
    
    int *id = (int *) malloc (sizeof(int) * size);
    int *visits = (int *) calloc (10, sizeof(int));
    
    GetCustomerID(id, size);
    CountVisits(id, visits, size);
    FrequentCustomers(visits);
    
    free(id);
    free(visits);
    return 0;
}