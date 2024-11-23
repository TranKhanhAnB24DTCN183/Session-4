#include <stdio.h>

int main() {
    int num1, num2, num3;

   
    printf("Nhap so thu nhat: ");
    scanf("%d", &num1);

    printf("Nhap so thu hai: ");
    scanf("%d", &num2);

    printf("Nhap so thu ba: ");
    scanf("%d", &num3);

    
    if ((num3 > num1 && num3 < num2) || (num3 > num2 && num3 < num1)) {
        printf("%d,%d,%d so thu ba co nam trong khoang giua so thu hai và so thu nhat\n",num1,num2,num3);
    } else {
        printf("%d,%d,%d so thu ba khong nam trong khoang giua so thu hai và so thu nhat\n",num1,num2,num3);
    }

    return 0;
}

