#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(int argc, char *argv[]) {
    setlocale(LC_ALL, "uk_UA.UTF-8");

    if (argc < 2 || strlen(argv[1]) == 0) {
        printf("Невідомий користувач\n");
    } else if (strcmp(argv[1], "Admin") == 0) {
        printf("Вітаю, адміністраторе!\n");
    } else {
        printf("Привіт, %s!\n", argv[1]);
    }
    return 0;
}