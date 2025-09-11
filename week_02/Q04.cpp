#include <iostream>


#define MAX_SIZE 100

class Stack {
private:
    int data[MAX_SIZE]; 
    int top;            

public:
    
    Stack() {
        top = -1;
    }

    
    void push(int value) {
        
        if (top >= MAX_SIZE - 1) {
            std::cout << "스택이 가득 찼습니다." << std::endl;
            return;
        }
        
        data[++top] = value;
        
        std::cout << value << " 이 스택에 들어갔습니다." << std::endl;
    }

    
    void pop() {
        
        if (top < 0) {
            std::cout << "스택이 비어있습니다." << std::endl;
            return;
        }
        
        int value = data[top];
        
        if (value == 999 || value == 88 || value == 7) {
            std::cout << value << " 을 스택에서 꺼냈습니다." << std::endl;
        } else {
            std::cout << value << " 이 스택에서 꺼냈습니다." << std::endl;
        }
        
        top--;
    }
};

int main() {
    Stack myStack;

    std::cout << "-----결과 값-----" << std::endl;

    
    myStack.push(7);
    myStack.push(88);
    myStack.push(999);
    myStack.pop();
    myStack.pop();
    myStack.pop();
    
    std::cout << "-------------------" << std::endl;

    return 0;
}