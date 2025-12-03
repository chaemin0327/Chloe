#include <stdio.h>
//홀수 → 분자 = line - pos + 1, 분모 = pos
//짝수 → 분모 = line - pos + 1, 분자 = pos
#include <stdio.h>

int main(void) {
    int X;
    int line = 1;
    int sum = 0;
    scanf("%d", &X);

    while (sum + line < X) {
        sum += line;
        line++;
    }

    int pos = X - sum;
    int a, b;
    if (line % 2 == 1) {
        a = line - pos + 1;
        b = pos;
    } else {
        a = pos;
        b = line - pos + 1;
    }
    printf("%d/%d\n", a, b);
    return 0;
}
