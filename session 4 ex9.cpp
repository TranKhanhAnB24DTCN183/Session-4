#include <stdio.h>

int isLeapYear(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        return 1; 
    }
    return 0;  
}


int isValidDate(int day, int month, int year) {
    if (month < 1 || month > 12) {
        return 0;  
    }

    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
        if (day < 1 || day > 31) {
            return 0;  
        }
    }
    else if (month == 4 || month == 6 || month == 9 || month == 11) {
        if (day < 1 || day > 30) {
            return 0; 
        }
    }
    else if (month == 2) {
        if (isLeapYear(year)) {
            if (day < 1 || day > 29) {
                return 0;  
            }
        } else {
            if (day < 1 || day > 28) {
                return 0; 
            }
        }
    }

    return 1; 
}

int main() {
    int day, month, year;

    printf("Nhap ngay: ");
    scanf("%d", &day);
     fflush(stdin);
     
    printf("Nhap thang: ");
    scanf("%d", &month);
     fflush(stdin);
     
    printf("Nhap nam: ");
    scanf("%d", &year);
     fflush(stdin); 
   
   
    if (isValidDate(day, month, year)) {
        printf("Ngay %d/%d/%d hop le\n", day, month, year);
    } else {
        printf("Ngay %d/%d/%d khong hop le\n", day, month, year);
    }

    return 0;
}

