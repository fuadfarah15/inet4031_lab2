\#include <stdio.h>

int main() {
    printf("C says: Hello, World!\n");
    
    char* users[] = {"User1", "User2", "User3"};

    for (int i = 0; i < 3; i++) {
        printf("User: %s\n", users[i]);
    }

    return 0;
}
