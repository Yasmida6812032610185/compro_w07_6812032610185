#include <stdio.h>

int main() {
    int level;

    // เก็บข้อความของแต่ละระดับสมาชิกใน array
    char *messages[] = {
        "Invalid membership level",   // index 0 (ใช้เมื่อ level ไม่ถูกต้อง)
        "Silver Member: 5% discount", 
        "Gold Member: 10% discount + Reward points", 
        "Platinum Member: 15% discount + Reward points + Birthday gift", 
        "Diamond Member: All benefits + VIP events"
    };

    // Input: รับระดับสมาชิกจากผู้ใช้
    printf("Enter membership level (1-4): ");
    scanf("%d", &level);

    // แสดงผลลัพธ์ตามเงื่อนไข
    if (level >= 1 && level <= 4) {
        printf("%s\n", messages[level]);
    } else {
        printf("%s\n", messages[0]);
    }

    return 0;
}