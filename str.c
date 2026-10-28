#include<stdio.h>
// TODO: 实现 my_strlen，循环到 '\0'，返回长度
int my_strlen(const char *s) {
    int i=0;
    while (s[i]!='\0')
    {
        i++;
    }
    return i;
}
 int main()
 {
    printf("%d\n",my_strlen("hello"));
    printf("%d\n",my_strlen("abc"));
    printf("%d\n",my_strlen(""));
    return 0;
 }
 
 