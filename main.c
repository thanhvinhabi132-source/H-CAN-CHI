#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    char thiencan[][10] = {"Canh", "Tan", "Nham", "Quy","Giap", "At", "Binh", "Dinh", "Mau", "Ky"};
    char diachi[][10] = {"Than", "Dau", "Tuat", "Hoi", "Ty", "Suu", "Dan", "Mao", "Thin", "Ty", "Ngo", "Mui"};

    int a = n%10;
    int b = n%12;

    printf("%s %s", thiencan[a], diachi[b]);

    return 0;
}

