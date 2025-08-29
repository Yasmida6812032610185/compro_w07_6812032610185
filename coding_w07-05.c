#include <stdio.h>

int main() {
    int age, vip_level;
    float amount;
    int discount = 0; // เก็บ % ส่วนลดที่ได้รับ

    // Input: รับข้อมูลลูกค้า
    printf("Enter age: ");
    scanf("%d", &age);

    printf("Enter VIP level (1-5): ");
    scanf("%d", &vip_level);

    printf("Enter purchase amount: ");
    scanf("%f", &amount);

    // Process: ตรวจสอบเงื่อนไขส่วนลด
    switch(vip_level) {
        case 3:
        case 4:
            discount = 20; // VIP 3 และ 4 ได้ส่วนลด 20%
            break;
        case 5:
            discount = 25; // VIP 5 ได้ส่วนลดสูงสุด
            break;
        default:
            if (age > 60) {
                discount = 20; // อายุเกิน 60 ได้ 20%
            } else if (age >= 30 && age <= 40 && amount > 2000) {
                discount = 15; // อายุ 30–40 และซื้อเกิน 2000 ได้ 15%
            } else if (age >= 18 && age <= 25 && amount > 1000) {
                discount = 10; // อายุ 18–25 และซื้อเกิน 1000 ได้ 10%
            } else if (amount > 50000) {
                discount = 25; // ซื้อเกิน 50000 ได้ 25%
            } else {
                discount = 0; // ไม่ได้ส่วนลด
            }
    }

    // Output: แสดงข้อมูลลูกค้าและส่วนลด
    printf("\n--- Customer Info ---\n");
    printf("Age: %d | VIP Level: %d | Amount: %.2f THB\n", age, vip_level, amount);

    if (discount > 0) {
        printf("Discount received: %d%%\n", discount);
    } else {
        printf("No discount applied\n");
    }

    printf("Thank you for shopping with us!\n");

    return 0;
}