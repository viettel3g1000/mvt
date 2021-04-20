#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    FILE *fptr;
    char fname[20];
    char str;
    printf("Nhap ten tap tin can mo: ");
    scanf("%s", fname);
    fptr = fopen(fname, "r");
    if (fptr == NULL)
    {
        printf("Tap tin khong ton tai.\n");
        exit(0);
    }
    printf("Noi dung cua tap tin la:\n\n");
    str = fgetc(fptr);
    while (str != EOF)
    {
        printf("%c", str);
        str = fgetc(fptr);
    }
    fclose(fptr);
    printf("\n\n");
    return 0;
}