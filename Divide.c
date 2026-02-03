#include <stdio.h>

int main() {
    float dividend, divisor, quotient;

    printf("--- Division ---\n");

    // รับค่าตัวตั้ง
    printf("Dividend: ");
    scanf("%f", &dividend);

    // รับค่าตัวหาร
    printf("Divisor: ");
    scanf("%f", &divisor);

    // ตรวจสอบเงื่อนไข: ห้ามหารด้วยศูนย์
    if (divisor == 0) {
        printf("Error: Cannot be divided by zero!\n");
    } else {
        // คำนวณผลลัพธ์
        quotient = dividend / divisor;

        // แสดงผลลัพธ์ (%.2f คือแสดงทศนิยม 2 ตำแหน่ง)
        printf("%.2f divided by %.2f equals %.2f\n", dividend, divisor, quotient);
    }

    return 0;
}