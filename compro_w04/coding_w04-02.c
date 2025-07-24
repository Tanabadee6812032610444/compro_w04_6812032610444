#include <stdio.h> // แก้ include เป็น preprocessor ไม่มี # และ stdio.h  เป็น identifier ขาด <>

int main() {       // main function เป็น keyword
    int a = 10;    // แก้ หลังบรรทัดต้องใส่เครื่องหมาย semicolon
    printf("a in main = %d\n", a); // แก้ หลังบรรทัดต้องใส่เครื่องหมาย semicolon
    return 0;      // แก้ ใส่ ; หลัง 0
}