#include <stdio.h>

int main() {
    int a, b, c;

    printf("Nhap so thu nhat: ");
    scanf("%d", &a);
      fflush(stdin);
    
    printf("Nhap so thu hai: ");
    scanf("%d", &b);
      fflush(stdin);
    
    printf("Nhap so thu ba: ");
    scanf("%d", &c);
      fflush(stdin);

   
    if (a > b) {
        a = a + b;
        b = a - b;
        a = a - b;
    }
    if (a > c) {  
        a = a + c;
        c = a - c;
        a = a - c;
    }
    if (b > c) {
        b = b + c;
        c = b - c;
        b = b - c;
    }

    printf("Các so lan luot tu nho den lon la: %d, %d, %d\n", a, b, c);

    return 0;
}


