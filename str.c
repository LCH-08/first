#include <stdio.h>

int my_strlen(const char *s) {
    int i = 0;
    while (s[i] != '\0') {
        i++;
    }
    return i;
}

void my_strcpy(char *dst, const char *src) {
    int i = 0;
    while (src[i] != '\0') {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
}

int main(void) {
    char buf[20];

    my_strcpy(buf, "hello");
    printf("%s\n", buf);

    my_strcpy(buf, "abc");
    printf("%s\n", buf);

    return 0;
}