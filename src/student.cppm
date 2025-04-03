export module student;

import std;
import <print>;

// Exercise 1: implements function 'add', that adds two numbers
export int add(int a, int b);

// Exercise 2: implements function 'mul', that multiplies two numbers
export int mul(int a, int b);

// ===============
// implementations

export int add(int a, int b)
{
    int result = a + b;
    std::println("add({}, {}) = {}", a, b, result);
    return result;
}

// Exercise 2: implements function 'mul', that multiplies two numbers
export int mul(int a, int b)
{
    int result = a * b;
    std::println("add({}, {}) = {}", a, b, result);
    return result;
}
