#include <stdio.h>

int main() {
    int x, y; // ตัวแปรสำหรับเก็บตัวเลขสองจำนวน

    // รับค่าจากผู้ใช้
    printf("Enter value of x: ");
    scanf("%d", &x);
    printf("Enter value of y: ");
    scanf("%d", &y);

    // เปรียบเทียบค่า x และ y
    if (x == y) {
        printf("x is equal to y\n"); // กรณีค่าเท่ากัน
    } else {
        if (x > y) {
            printf("x is greater than y\n"); // กรณี x มากกว่า
        } else {
            printf("x is less than y\n"); // กรณี x น้อยกว่า
        }
    }

    return 0;
}