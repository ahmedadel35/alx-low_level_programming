#include <stdio.h>
#include <string.h>

void refrenceInPHP(int *var)
{
    *var = 500;
}

int main(void) {
    int i;
    int *ptr;
    char str[] = "Value of I now is";
    char ss[] = "some very good string";
    char *st;
    int arr[5];

    i = 25;
    ptr = &i;

    st = ss;

    int n = 98;
    int *p = &n;

    *p++;

    printf("%s: %lu\n", str, sizeof(ss));


    printf("%s: %s\n", str, ss);

    // *ptr = 999;
    // refrenceInPHP(st);
    strcpy(st, "another string here");

    printf("%s: %s\n", str, ss);

    printf("%lu\n", sizeof(arr));

    return (0);
}