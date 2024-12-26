# Recursion

- When a function calls itself until a specific condition is met, it is called a recursive function.
- The process of a function calling itself is called recursion.

## Basic Terms in Recursion

- **Base Case**: The condition under which the recursion ends.
- **Recursive Case**: The part of the function that includes the recursive call.
- **Depth of Recursion**: The number of times the recursive function calls itself.

## Infinite Recursion

`specific condition` mentioned above is very important. If the condition is not met, the function will keep calling itself infinitely. This is called infinite recursion.

- Infinite recursion can cause the stack to overflow.
- It is important to have a base case to stop the recursion.

![Infinite Recursion](./images/infinite_recursion_light.svg)

## Stack Overflow

- Stack is a memory area that stores the function call.

Stack overflow occurs when the stack is full and there is no space to store the function call.

![Stack Overflow](./images/stack_overflow_light.svg)
