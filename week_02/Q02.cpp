#include<iostream>

class SetValue
{
    int x, y;

public:
    void setXY(int a, int b){
        x = a;
        y = b;
    }
    void show(){
        std::cout << "X는 " << x << "값, Y는 " << y << "값" << std::endl;
    }
};
int main()
{
    SetValue obj; // 클래스이름 객체이름
    
    obj.setXY(33, 44);
    obj.show();

    system("pause");
    return 0;
}