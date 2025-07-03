# Math+ (mathplus)

**Math+** is a universal and user-friendly math library for C and C++, designed for students, educators, programmers, and anyone who needs both basic and advanced mathematical functions at hand.

## Features

- 📐 **Type Support:** Functions are implemented for `int`, `float`, and `double` — you choose the type you need!
- ➕ **Basic Operations:** Addition, subtraction, multiplication, division, exponentiation, roots, logarithms.
- 🔢 **Special Functions:** Factorial, Fibonacci numbers, random number generation.
- 🧮 **Trigonometry and Exponents:** Sine, cosine, tangent, exponentials, natural and common logarithms.
- 🏷️ **Aliases:** Convenient macros for quick access to familiar functions.
- 🧑‍💻 **Informative:** Built-in `info()` and `info_ru()` functions give you a quick overview in English or Russian.
- 🚦 **Error Handling:** Clear error messages for invalid input data.
- 🌍 **Multilingual:** Documentation and info functions available in both English and Russian.

## Usage Example

```c
#include "math+.h"

int main() {
    double res;
    plusd(2.5, 3.7, &res);
    printf("2.5 + 3.7 = %lf\n", res);

    int fib;
    fibonaccii(10, &fib);
    printf("10th Fibonacci number: %d\n", fib);

    info(); // Quick help in English
    return 0;
}
```

## Quick Start

1. Download `math+.h` and `math+.c` to your project.
2. Include the header file:  
   `#include "math+.h"`
3. Compile your project with `math+.c`.
4. All usage instructions are available via the `info()` (English) or `info_ru()` (Russian) functions.

**OR**

1. Add .o file to directory with your project
2. Compile with your project
## Function List

- Arithmetic: `plusi`, `plusd`, `plusf`, `minusi`, `minusd`, `minusf`, ...
- Factorial and Fibonacci: `factoriali`, `factoriald`, `factorialf`, `fibonaccii`, ...
- Powers and Roots: `poweri`, `powerd`, `powerf`, `square_rootd`, `square_rootf`, ...
- Logarithms: `logarithmd`, `logarithmf`, ...
- Trigonometry: `sin_radd`, `cos_radd`, `tan_radd`, `sin_radf`, ...
- Random numbers: `randomi`, `randomd`, `randomf`
- Info functions: `info()`, `info_ru()`
- Full list — see in `math+.h`

## Compatibility

- Requires C99 or newer.
- Cross-platform: Linux, Windows, macOS.

## License

GNU General Public License v3.0 — you are free to use, modify, and distribute under the license terms!

---

**Math+** is more than just “arithmetic” — it’s your personal math lab in the world of C!

P.S. Unlike my previous project, most of this library was written by me, not AI (except for mathematical functions that I don't fully understand).
