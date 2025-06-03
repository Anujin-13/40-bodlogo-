#include <stdio.h>
int main() {
    int n, level = 0, valleys = 0;
    scanf("%d", &n);
    char step;
    for (int i = 0; i < n; i++) {
        scanf(" %c", &step);  

        if (step == 'U') {
            level++;
            if (level == 0)
                valleys++;  
        } else if (step == 'D') {
            level--;
        }
    }
    printf("%d\n", valleys);
    return 0;
}
