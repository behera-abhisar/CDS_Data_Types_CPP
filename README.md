# EXPERIMENT 02: FINDING THE SIZE OF DIFFERENT DATA TYPES IN C++

## AIM
To write a C++ program that takes user input of various data types (int, float, double, char, string, and bool) and displays both the entered values and their respective memory sizes using the `sizeof` operator.

## TOOLS USED
- **Language**: C++
- **Compiler**: g++ (GNU Compiler Collection)
- **Platform**: Linux / Windows / macOS (any system with a C++ compiler)
- **Editor/IDE**: Visual Studio Code / Code::Blocks / Terminal-based editor

## THEORY
Data types are fundamental to every programming language as they determine the type of data a variable can store. In C++, primitive types such as `int`, `float`, `double`, `char`, and `bool`, along with the standard `string` class, are widely used.

The `sizeof()` operator is used in C++ to determine the memory (in bytes) allocated for any variable or data type. Understanding data sizes helps in writing memory-efficient code, especially in embedded and systems programming.

This experiment reinforces:
- The concept of primitive and standard data types in C++
- Usage of the `sizeof` operator
- How data is represented and stored in memory

### ALGORITHM
1. Start  
2. Declare variables of types `int`, `float`, `double`, `char`, `string`, and `bool`  
3. Prompt the user to enter values of each type  
4. Read the values using `cin`  
5. Use `sizeof()` to determine the memory size of each variable  
6. Display both the value and its size  
7. End  

## CONCLUSION
I wrote a C++ program that takes different types of inputs from the user and displays their memory sizes using the `sizeof` operator. Through this experiment, I understood how different data types are stored in memory and how to evaluate their sizes programmatically. It gave me a clear understanding of type-specific memory allocation in C++.
