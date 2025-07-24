#include <stdio.h> // เรียกใช้ไลบรารีมาตรฐานสำหรับฟังก์ชัน

int main() {       // main function เป็น keyword
    char nameInitial = 'T'; // Data type char ใช้กับอักษร
    int age = 18;  // Data type int ใช้กับจำนวนเต็ม
    float weight = 43.85; // Data type float ใช้กับจำนวนเต็มที่มีทศนิยม
    char gender[] = "Female"; // Data type char ใช้กับอักษร

    printf("char = %c\n", nameInitial); // แสดงอักษร
    printf("int = %d\n", age); // แสดงตัวเลขจำนวนเต็ม
    printf("float = %f\n", weight); // แสดงตัวเลขทศนิยม
    printf("char = %s\n",gender); // แสดงอักษร
    return 0; // คืนค่าจบโปรแกรม
}