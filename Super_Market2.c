#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int *list = (int *) malloc (sizeof(int) * n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &list[i]);
    }
    
    int found = 0;
    for(int i = 0; i < n; i++) {
        int count = 0;
        for(int j= 0; j < n; j++) {
            if(list[i] == list[j]) {
                count++;
            }
        }
        if(count == 1 && list[i] != 0) {
            printf("%d ", list[i]);
            found = 1;
        }
    }
     
    
    if(!found) {
        printf("-1");
    }
    
    free(list);
    return 0;
}