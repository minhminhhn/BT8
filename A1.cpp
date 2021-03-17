#include <iostream>

using namespace std;

void f(int xval)
{
   int x;
   x = xval;
   // in địa chỉ của x tại đây
   cout << &x;
}
void g(int yval)
{
   int y;
   y=yval;
   // in địa chỉ của y tại đây
   cout << &y;
}
int main()
{
   f(7);
   g(11);
   return 0;
}
// địa chỉ của 2 biến giống nhau
/* vi vi tri stack cho hàm f va ham g là
trung nhau khi duoc goi trong main,
co cung kieu int, x va y cùng la bien dia phuong dau tien của ham */
