#include <stdio.h>

int main() {

    int start_reading, end_reading,consumption;   
    float total_cost;

    
    printf("Nhap so dien dau thang(kWh): ");
    scanf("%d", &start_reading);

    printf("Nhap so dien cuoi thang(kWh): ");
    scanf("%d", &end_reading);


    if (end_reading < start_reading) {
        printf("Vo li yeu cau ban nhap lai\n");
        return 1; 
    }

    consumption = end_reading - start_reading;

  
    if (consumption < 50) {
        total_cost = consumption * 10000; 
    } else if (50<=consumption < 100) {
        total_cost = consumption * 15000; 
    } else if (100<=consumption < 150) {
        total_cost = consumption * 20000; 
    }else if (150<=consumption < 200) {
        total_cost = consumption * 25000; 
	} else {
        total_cost = consumption * 30000; 
    }

    printf("Tien dien phai tra cho %d kWh là: %.2f VND\n", consumption, total_cost);

    return 0;
}

