#include<stdio.h>
  int main(){
  	int number;
  	printf("Nhap vao mot so nguyen: ");
  	scanf("%d",&number);
  	fflush(stdin);
   if (number > 0) {
        printf("So %d la so duong\n", number);
    } 
	else if (number < 0) {
        printf("So %d la so am\n", number);
    }
	 else {
        printf("So %d la so 0\n", number);
    }
	  return 0;
  }
