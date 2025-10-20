# 🖨️ ft_printf — 42 Project

A custom implementation of the C standard library function `printf`, built from scratch as part of the **42 School curriculum**.  
This project is designed to deepen understanding of **variadic functions**, **format string parsing**, and **formatted output handling** in C.

---

## 📘 Table of Contents
- [About the Project](#-about-the-project)
- [Features](#-features)
- [Supported Conversions](#-supported-conversions)
- [Project Structure](#-project-structure)
- [Building the Library](#-building-the-library)
- [Usage](#-usage)
- [Bonus Part](#-bonus-part)
- [Testing](#-testing)
- [Resources](#-resources)
- [License](#-license)

---

## 📖 About the Project

**ft_printf** is a recreation of the standard C `printf` function.  
The main goal is to implement formatted output functions that handle various **data types**, **format specifiers**, and **edge cases** — all without using the real `printf`.

It is part of the core **42 curriculum**, following **Libft**, and will serve as a foundation for later projects that require formatted printing.

This project covers:
- Variadic functions using `<stdarg.h>`
- String formatting and precision handling
- Writing to file descriptors efficiently
- Managing memory and edge cases safely

---

## ⚙️ Features

✅ Re-implements the main functionality of `printf`  
✅ Handles multiple format specifiers  
✅ Produces output identical to the original function (in most cases)  
✅ Supports both text and numerical formatting  
⚙️ Easily extendable to handle bonus features later

---

## 🔤 Supported Conversions

| Conversion | Description |
|-------------|--------------|
| `%c` | Print a single character |
| `%s` | Print a string |
| `%p` | Print a pointer address (in hexadecimal) |
| `%d` / `%i` | Print a signed integer |
| `%u` | Print an unsigned integer |
| `%x` | Print a lowercase hexadecimal number |
| `%X` | Print an uppercase hexadecimal number |
| `%%` | Print a literal percent sign |

---

## 🧱 Project Structure

```
ft_printf/
├── Makefile
├── ft_printf.c
├── ft_printf_utils.c
├── includes/
│   └── ft_printf.h
└── libft/
    └── (your custom libft library)
```

| File | Description |
|------|--------------|
| `ft_printf.c` | Core function: handles format string parsing and dispatching. |
| `ft_printf_utils.c` | Helper functions for string and number conversions. |
| `ft_printf.h` | Header file with all prototypes and definitions. |
| `libft/` | Dependency library containing your Libft functions. |
| `Makefile` | Automates compilation and library creation. |

---

## 🏗️ Building the Library

To compile the library, simply run:

```bash
make
```

This will generate a static library file called **`libftprintf.a`**.

Clean up object files with:

```bash
make clean
```

Rebuild everything from scratch:

```bash
make re
```

---

## 🚀 Usage

You can use **ft_printf** in your C projects by linking it during compilation:

```bash
gcc main.c libftprintf.a -I./includes
```

Example:

```c
#include "ft_printf.h"

int main(void)
{
    ft_printf("Hello %s! You scored %d/100.\n", "student", 42);
    return (0);
}
```

Output:
```
Hello student! You scored 42/100.
```

---

## 🌟 Bonus Part

The **bonus part** of this project introduces:
- Support for **flags** such as `#`, `0`, `-`, `+`, and space (` `)
- Field width and precision handling
- Printing numbers with alignment and padding

⚠️ **Note:** The bonus part is **not yet implemented** in this repository but is planned for a future update.

---

## 🧪 Testing

You can test your ft_printf using popular testers such as:
- [**Tripouille/printfTester**](https://github.com/Tripouille/printfTester)
- [**paulo-santana/ft_printf-tester**](https://github.com/paulo-santana/ft_printf-tester)

Clone one of these repositories inside your project and run:

```bash
git clone https://github.com/Tripouille/printfTester.git
cd printfTester
make
```

---

## 📚 Resources

- [42 Subject PDF (ft_printf)](https://projects.intra.42.fr)
- [C Variadic Functions — GNU Docs](https://www.gnu.org/software/libc/manual/html_node/Variadic-Functions.html)
- [printf Reference — C Library](https://cplusplus.com/reference/cstdio/printf/)
- [Understanding stdarg.h](https://en.cppreference.com/w/c/variadic)

---

## 🪪 License

This project is licensed under the **MIT License** — feel free to use and modify it for educational purposes.

---

> 💬 _"Learning to print your own output is the first step toward understanding how your code truly speaks."_  
> — _42 Network_
