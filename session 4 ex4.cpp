#include <stdio.h>

int main() {
    int month;

    // Yêu c?u ngu?i dùng nh?p vào s? tháng
    printf("Nhap so thang ban yeu thich: ");
    scanf("%d", &month);

   
    switch (month) {
        case 1: 
        case 3: 
        case 5: 
        case 7: 
        case 8: 
        case 10: 
        case 12: 
            printf("Thang %d co 31 ngay\n", month);
            break;
        case 4: 
        case 6: 
        case 9: 
        case 11: 
            printf("Thang %d co 30 ngay\n", month);
            break;
        case 2: 
            printf("Thang nay chi co 28 hoac 29 ngay\n");
            break;
        default:
            printf("Vui long thu lai \n");
            break;
    }

    return 0;
}

