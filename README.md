# C++ Vector Out-of-Bounds Access Bug

This repository demonstrates a common bug in C++: accessing elements in a `std::vector` outside of its valid index range.  Accessing elements beyond the vector's boundaries leads to undefined behavior, potentially causing program crashes or subtle, hard-to-debug errors. The example shows both the incorrect and correct ways to access vector elements.

## How to reproduce

1. Clone the repository.
2. Compile the `bug.cpp` file using a C++ compiler (like g++).
3. Run the executable. You'll likely observe undefined behavior (e.g., a crash or an unexpected value).
4. Compare this with the corrected code in `bugSolution.cpp`, demonstrating the safe way to access vector elements.