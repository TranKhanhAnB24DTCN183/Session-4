#include <stdio.h>

int main() {
    float a, b, c;

    printf("Nhap canh thu nhat: ");
    scanf("%f", &a);
     fflush(stdin);
   
    printf("Nhap canh thu hai: ");
    scanf("%f", &b);
     fflush(stdin);
     
    printf("Nhap canh thu ba: ");
    scanf("%f", &c);
     fflush(stdin);
     
    if (a + b > c && a + c > b && b + c > a) {
        printf("Là 3 canh cua tam giac\n");
    } 
	else {
        printf("Khong phai là 3 canh cua tam giac\n");
    }

    return 0;
}

