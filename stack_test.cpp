#include <iostream>
#include <stack>
int main() {
    // 1. Initialize a stack.
    std::stack<int> s;
    // 2. Push new element.
    s.push(5);
    s.push(13);
    s.push(8);
    s.push(6);
    // 3. Check if stack is empty.
    if (s.empty()) {
        std::cout << "Stack is empty!" << std::endl;
        return 0;
    }
    // 4. Pop an element.
    s.pop();
    // 5. Get the top element.
    std::cout << "The top element is: " << s.top() << std::endl;
    // 6. Get the size of the stack.
    std::cout << "The size is: " << s.size() << std::endl;
}
