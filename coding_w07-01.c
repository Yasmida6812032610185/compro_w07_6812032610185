#include <stdio.h>

int main () {
    double score;
    printf("Enter midterm score: ");
    if (scanf("%lf", &score) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    // ตรวจสอบว่าคะแบนมากกว่าหรือเท่ากับ 50 หรือไม่
    if (score >= 50.0) {
        double bonus = score * 0.05; // เพิ่มอีก 5%
        score += bonus;
    }

    printf("Final score: %.2f\n", score);
    printf("End of evaluation\n");

    return 0;
}