#include <set> // อย่าลืม include set เข้ามาด้วยนะครับ

int count(int data[], int size) {
    // 1. สร้าง set ของเลขจำนวนเต็มขึ้นมา
    set<int> unique_numbers;
    
    // 2. วนลูปเพื่อนำข้อมูลจาก array เข้าไปใน set
    for(int i = 0; i < size; i++) {
        unique_numbers.insert(data[i]);
    }
    
    // 3. คืนค่าขนาด (size) ของ set ซึ่งก็คือจำนวนสมาชิกที่ไม่ซ้ำกันนั่นเอง
    return unique_numbers.size();
}