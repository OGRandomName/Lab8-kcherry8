/**
 * @file Lab8_kcherry8.cpp
 * @author Kenneth Cherry
 * @date 2026-11-02
 * @brief Demonstrates stack vs heap memory and the use of
 *        pointers and references in C++. (AI was used to organize and make it professional)
 */

#include <iostream>

/**
 * @brief Entry point for the memory exploration program.
 * @param None
 * @return 0 to indicate successful program execution.
 */
int main()
{
    // Create an integer on the stack.
    int stackInt = 10;

    // Dynamically create an integer on the heap.
    int* heapInt = new int(20);

    // Create a pointer that stores the address of stackInt.
    int* ptrToStack = &stackInt;

    // Create a reference to stackInt.
    int& refToStack = stackInt;

    // Display the stack variable.
    std::cout << "Stack Variable (stackInt):" << std::endl;
    std::cout << "  Value: " << stackInt << std::endl;
    std::cout << "  Address: " << &stackInt << std::endl;
    std::cout << std::endl;

    // Display the dynamically allocated heap variable.
    std::cout << "Heap Variable (heapInt):" << std::endl;
    std::cout << "  Value: " << *heapInt << std::endl;
    std::cout << "  Address: " << heapInt << std::endl;
    std::cout << std::endl;

    // Display information using the pointer to stackInt.
    std::cout << "Pointer to Stack (ptrToStack):" << std::endl;
    std::cout << "  Value Pointed To: " << *ptrToStack << std::endl;
    std::cout << "  Address Stored: " << ptrToStack << std::endl;
    std::cout << std::endl;

    // Display information using the reference to stackInt.
    std::cout << "Reference to Stack (refToStack):" << std::endl;
    std::cout << "  Value Referred To: " << refToStack << std::endl;
    std::cout << "  Address: " << &refToStack << std::endl;

    // Release the dynamically allocated heap memory.
    delete heapInt;
    heapInt = nullptr;

    return 0;
}