#include <iostream>
#include <vector>
#include <limits>
#include <iomanip>

/*
=================================================================
 GHI CHÚ VỀ CÁC KIỂU DỮ LIỆU CƠ BẢN TRONG C++
=================================================================

### 3.3.1 Kiểu ký tự (Character types)
- Dùng để lưu trữ một ký tự đơn (ví dụ: 'A', '$').
- Từ khóa: `char`.
- Kích thước: 1 byte.
- Lưu giá trị số theo bảng mã ASCII.

### 3.3.2 Kiểu số nguyên (Numerical Integer types)
- Dùng để lưu trữ số không có phần thập phân.
- Từ khóa: `int`, `short`, `long`, `long long`.
- Kích thước và phạm vi giá trị khác nhau tùy thuộc vào từ khóa và hệ thống.

### 3.3.3 Kiểu số thực (Floating-point types)
- Dùng để lưu trữ số có phần thập phân.
- Từ khóa: `float` (độ chính xác đơn), `double` (độ chính xác kép).
- `double` có độ chính xác cao hơn và thường được ưu tiên sử dụng.

### 3.3.4 Kiểu luận lý/logic (Boolean type)
- Chỉ có hai giá trị: `true` (đúng) hoặc `false` (sai).
- Từ khóa: `bool`.
- Thường dùng trong các cấu trúc điều khiển (if, while).

### 3.3.5 Kiểu void (void type)
- Có nghĩa là "không có kiểu".
- Dùng cho hàm không trả về giá trị.
- Dùng cho con trỏ `void*` (con trỏ chung).

### 3.3.6 Kiểu nullptr (C++11)
- Là một từ khóa đại diện cho hằng con trỏ null.
- An toàn hơn và rõ ràng hơn hằng `NULL` truyền thống.
- Giúp phân biệt giữa số nguyên 0 và một con trỏ không trỏ đến đâu cả.

### 3.3.7 Từ khoá typedef
- Cho phép tạo một tên mới (bí danh) cho một kiểu dữ liệu đã có.
- Giúp mã nguồn dễ đọc hơn, đặc biệt với các kiểu phức tạp.
- Ví dụ: `typedef int Integer;`

### 3.3.8 Một số hàm hữu ích
- Thư viện `<limits>` cung cấp các thông tin về giới hạn của các kiểu dữ liệu.
- Ví dụ: `std::numeric_limits<int>::max()` trả về giá trị lớn nhất mà kiểu int có thể lưu trữ.

*/

// Khai báo hàm sử dụng void
void sayHello() {
    std::cout << "--- Vi du ham void ---" << std::endl;
    std::cout << "Xin chao the gioi!" << std::endl << std::endl;
}

// Khai báo hàm sử dụng nullptr
void processPointer(int* ptr) {
    if (ptr != nullptr) {
        std::cout << "Con tro hop le, gia tri la: " << *ptr << std::endl;
    } else {
        std::cout << "Day la mot con tro null." << std::endl;
    }
}

int main() {
    // 3.3.1 Kiểu ký tự
    std::cout << "--- 3.3.1 Kieu ky tu ---" << std::endl;
    char grade = 'A';
    std::cout << "Diem so: " << grade << std::endl << std::endl;

    // 3.3.2 Kiểu số nguyên
    std::cout << "--- 3.3.2 Kieu so nguyen ---" << std::endl;
    int age = 25;
    std::cout << "Tuoi: " << age << std::endl << std::endl;

    // 3.3.3 Kiểu số thực
    std::cout << "--- 3.3.3 Kieu so thuc ---" << std::endl;
    float price = 19.99f;
    double pi = 3.1415926535;
    std::cout << "Gia: " << price << std::endl;
    std::cout << "So Pi: " << std::setprecision(10) << pi << std::endl << std::endl;

    // 3.3.4 Kiểu luận lý
    std::cout << "--- 3.3.4 Kieu luan ly ---" << std::endl;
    bool isStudent = true;
    if (isStudent) {
        std::cout << "Ban la mot sinh vien." << std::endl << std::endl;
    }

    // 3.3.5 Kiểu void
    sayHello();

    // 3.3.6 Kiểu nullptr
    std::cout << "--- 3.3.6 Kieu nullptr ---" << std::endl;
    int* p1 = new int(100);
    int* p2 = nullptr;
    processPointer(p1);
    processPointer(p2);
    delete p1; // Giai phong bo nho
    std::cout << std::endl;

    // 3.3.7 Từ khoá typedef
    std::cout << "--- 3.3.7 Tu khoa typedef ---" << std::endl;
    typedef int SoNguyen;
    typedef std::vector<SoNguyen> MangSoNguyen;
    SoNguyen myNumber = 99;
    MangSoNguyen numbers = {10, 20, 30};
    std::cout << "So nguyen cua toi: " << myNumber << std::endl;
    std::cout << "Phan tu thu hai cua mang: " << numbers[1] << std::endl << std::endl;
    
    // 3.3.8 Một số hàm hữu ích
    std::cout << "--- 3.3.8 Ham huu ich ---" << std::endl;
    std::cout << "Gia tri lon nhat cua int: " << std::numeric_limits<int>::max() << std::endl;
    std::cout << "Gia tri nho nhat cua int: " << std::numeric_limits<int>::min() << std::endl;

    return 0;
}