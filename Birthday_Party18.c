#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 1001

int countUniqueInvites(char names[], int length) {
    int invited[26] = {0};
    int count = 0;

    for (int i = 0; i < length; i++) {
        if (names[i] >= 'a' && names[i] <= 'z') {
            int index = names[i] - 'a';
            if (invited[index] == 0) {
                invited[index] = 1;
                count++;
            }
        }
    }

    return count;
}

int main() {
    char names[MAX_LENGTH];
    scanf("%[^
]", names);


    int uniqueInvites = countUniqueInvites(names, strlen(names));

    printf("%d", uniqueInvites);
    
}
