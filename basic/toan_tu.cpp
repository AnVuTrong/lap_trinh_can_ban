#include <iostream>
using namespace std;
#define PI 3.14

float TinhDienTich(int);
int main () {
    float r;
    cin >> r;
    cout << TinhDienTich(r);
    return 0;
}
float TinhDienTich(int r){
    return r*r*PI;
}
/* Chú thích nhiều dòng */
// Chú thích một dòng
/*
Ký tự đặt trong nháy đơn ' ' 
Chuỗi đặt trong nháy kép " "
Ký tự điều khiển:
ví dụ dòng mới là \n
tab ngang là \t
ký tự gạch chéo là \\
dấu nháy đơn \'
nháy kép \"
null là \0
*/

/*
Toán tử: +, -, *, /, %, ++, --, =, +=, -=, *=, /=, %=, ==, !=, >, <, >=, <=, &&, ||, !, ? : (toán tử điều kiện)
int a = 10, b = 5;
int sum = a + b; // sum = 15
a++; // a bây giờ là 11
bool isEqual = (a == b); // isEqual = false
int max = (a > b) ? a : b; // max = 11

Ký tự phân tách: ; (dấu chấm phẩy), , (dấu phẩy)
int x = 5, y = 10; // Dấu phẩy (,) để khai báo nhiều biến
y = x + 2; // Dấu chấm phẩy (;) để kết thúc câu lệnh

Ký tự ngoặc: ( ), { }, [ ]
void myFunction() { // Dấu ngoặc nhọn {} định nghĩa một khối mã
    int arr[3]; // Dấu ngoặc vuông [] dùng cho mảng
}
myFunction(); // Dấu ngoặc đơn () dùng để gọi hàm

Ký tự toán tử bit: &, |, ^, ~, <<, >>
int a = 5;  // 0101
int b = 3;  // 0011
int c = a & b; // c = 1 (0001)
int d = a | b; // d = 7 (0111)
int e = a << 1; // e = 10 (1010)

Ký tự điều khiển: # (cho các chỉ thị tiền xử lý)
#include <iostream> // Bao gồm thư viện iostream
#define PI 3.14    // Định nghĩa một hằng số

Ký tự chấm: . (truy cập thành viên)
struct Person {
    std::string name;
};
Person p;
p.name = "Alice"; // Dùng dấu chấm để truy cập biến 'name' của struct 'p'

Ký tự mũi tên: -> (truy cập thành viên qua con trỏ)
struct Person {
    std::string name;
};
Person p;
Person* ptr = &p;
ptr->name = "Bob"; // Dùng dấu mũi tên để truy cập biến 'name' qua con trỏ 'ptr'

Ký tự hai chấm: :: (sử dụng trong toán tử ba ngôi và khai báo phạm vi), .. (toán tử phạm vi)

#include <iostream>
namespace MyNamespace {
    void myFunction() { ... }
}
int main() {
    std::cout << "Hello"; // Truy cập 'cout' trong namespace 'std'
    MyNamespace::myFunction(); // Gọi hàm trong namespace 'MyNamespace'
    return 0;
}

Ký tự dấu gạch dưới: _ (thường được sử dụng trong tên biến hoặc hàm)
int my_variable = 100;
void print_hello() {
    // ...
}
    
*/