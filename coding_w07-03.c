#include <stdio.h>

int main() {
    int x, y; // ตัวแปรสำหรับเก็บค่าจำนวนเต็มจากผู้ใช้

    // รับค่าจากผู้ใช้
    printf("Enter first number (x): ");
    scanf("%d", &x);
    printf("Enter second number (y): ");
    scanf("%d", &y);

    // เปรียบเทียบค่า x และ y โดยใช้ ternary operator
    (x > y) ? printf("x is greater than y\n") :
    (x < y) ? printf("x is less than y\n") :
              printf("x is equal to y\n");

    return 0;
}