# Intro to C++

## Header Files
`#include <iostream>` — gives access to basic input/output operations like `cout`.

---

## Program Entry Point
Every C++ program starts execution from `main()`. 
- Returns `0` → program ran successfully
- Returns `1` → something went wrong

---

## Output — `std::cout`
- `std` → standard library
- `c` → character
- `out` → output
- `<<` → insertion operator (precedes what you want to print)
- `;` → terminates every statement

```cpp
std::cout << "I like pizza!";
std::cout << "Its really good!" << std::endl;
```

### `endl` vs `\n`
Both move to a new line, but `endl` also **flushes the buffer** (slightly slower).

![endl example](../assets/images/endl.png)

---

## Comments

```cpp
// This is a single line comment

/*
    This is
    a multi-line
    comment
*/
```

---

## Full Example

```cpp
#include <iostream>

int main() {
    std::cout << "I like pizza!";
    std::cout << "Its really good!" << std::endl;
    std::cout << "I like spicy food";
    return 0;
}
```