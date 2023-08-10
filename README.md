> 🚧 **Project :** alx-low_level_programming

<br>

<div>
  <a href="https://github.com/iamnotnato/alx-low_level_programming">
    <img src="https://github.com/iamnotnato/alx-low_level_programming/blob/master/images/code.png" alt="Logo" width="450" height="300">
  </a>
</div>

<br>

> 📝 **Summary:**

> These are projects that helped me understand a bit of low-level programming.

<br>

> ⌨️ **Languages Used :**

<table>
  <tr>
    <td><img alt="medium" src="https://img.shields.io/badge/C-00599C?style=for-the-badge&logo=c&logoColor=white"></td>
    <td><img alt="medium" src="https://img.shields.io/badge/Shell_Script-121011?style=for-the-badge&logo=gnu-bash&logoColor=white"></td>
    <td><img alt="medium" src="https://img.shields.io/badge/Markdown-000000?style=for-the-badge&logo=markdown&logoColor=white"></td>
  </tr>
</table>

<br>

> 🖥️ **Integrated Development Environment:**

<table>
  <tr>
<td><img alt="medium" src="https://img.shields.io/badge/Emacs-%237F5AB6.svg?&style=for-the-badge&logo=gnu-emacs&logoColor=white"></td>
  </tr>
</table>
<br>
  
![Alt](https://repobeats.axiom.co/api/embed/50a392e676820ce03006d38197b98899827faf15.svg "Repobeats analytics image")

<br>

| #  | Projects Guide:                                                                      |
|--- | ------------------------------------------------------------------------------------ |
| 00 | [0x00. - C - Hello, World](./0x00-hello_world)                                       | 
| 01 | [0x01. - C - Variables, if, else, while](./0x01-variables_if_else_while)             |
| 02 | [0x02. - C - Functions & Nested Loops](./0x02-functions_nested_loops)                | 
| 03 | [0x03. - C - Debugging](./0x03-debugging)                                            | 
| 04 | [0x04. - C - More functions & More Nested Loops](./0x04-more_functions_nested_loops) | 
| 05 | [0x05. - C - Pointers, arrays and strings](./0x05-pointers_arrays_strings)           |
| 06 | [0x06. - C - More pointers, arrays and strings](./0x06-pointers_arrays_strings)      | 
| 07 | [0x07. - C - Even more pointers, arrays and strings](./0x07-pointers_arrays_strings) | 
| 08 | [0x08. - C - Recursion](./0x08-recursion)                                            | 
| 09 | [0x09. - C - Static libraries](./0x09-static_libraries)                              |
| 10 | [0x0A. - C - argc, argv](./0x0A-argc_argv)                                           | 
| 11 | [0x0B. - C - malloc, free](./0x0B-malloc_free)                                       | 
| 12 | [0x0C. - C - More malloc, free](./0x0C-more_malloc_free)                             | 
| 13 | [0x0D. C - Preprocessor](./0x0D-preprocessor)                                        |
| 14 | [0x0E. C - Structures, typedef](./0x0E-structures_typedef)                           | 
| 15 | [0x0F. C - Function pointers](./0x0F-function_pointers)                              | 
| 16 | [0x10. C - Variadic functions](./0x10-variadic_functions)                            |
| 17 | [0x11. C - printf](https://github.com/iamnotnato/printf)                             |
| 18 | [0x12. C - Singly linked lists](./0x12-singly_linked_lists)                          |
| 19 | [0x13. C - More singly linked lists](./0x13-more_singly_linked_lists)                |
| 20 | [0x14. C - Bit manipulation](./0x14-bit_manipulation)                                |
| 21 | [0x15. C - File I/O](./0x15-file_io)                                                 |
| 22 | [0x16. C - Simple Shell](https://github.com/iamnotnato/simple_shell)                 |

<br>
<br>

> 📝 **Footnotes**

> ⚙️ **Compiler Flags:**

> 🏁 **gcc** : Invokes the GNU C compiler. 

<br>

> 🏁 **-Wall** : This enables all the warnings about constructions that some users consider questionable, and that are easy to avoid (or modify to prevent the warning), even in conjunction with macros.

<br>

> 🏁 **-pedantic** : Issue all the warnings demanded by strict ISO C and ISO C++; reject all programs that use forbidden extensions.
> 
> Some other programs that do not follow ISO C and ISO C++. For ISO C, follows the version of the ISO C standard specified by any -std option used.

<br>

> 🏁 **-Werror** : Make all warnings into errors.

<br>

> 🏁 **-Wextra** : This enables some extra warning flags that are not enabled by -Wall.

<br>

> 🏁 **-std=gnu89** :  Determine the language standard.
> 
> This option is currently only supported when compiling C or C++.
> 
> The compiler can accept several base standards, such as `c89` or `c++98`, and GNU dialects of those standards, such as `gnu89` or `gnu++98`.
> 
> By specifing a base standard, the compiler will accept all programs following that standard and those using GNU extensions that do not contradict it.
> 
> For example, `-std=c89` turns off certain features of GCC that are incompatible with ISO C90, such as the asm and typeof keywords, but not other GNU extensions that do not have a meaning in ISO C90, such as omitting the middle term of a ?: expression.
> 
> On the other hand, by specifing a GNU dialect of a standard, all features the compiler support are enabled, even when those features change the meaning of the base standard and some strict-conforming programs may be rejected. 
> 
> The particular standard is used by -pedantic to identify which features are GNU extensions given that version of the standard. For example `-std=gnu89 -pedantic` would warn about C++ style `//` comments, while `-std=gnu99 -pedantic` would not.
> 
> A value for this option must be provided; possible values are
>
> `c89`
> `iso9899:1990`
> 
> Support all ISO C90 programs (certain GNU extensions that conflict with ISO C90 are disabled).
> 
> Same as -ansi for C code.

<br>

> 📝 **Endnotes**

> Every C program has a primary function that must be named main. 
> 
> The main function serves as the starting point for program execution. 
> 
> It usually controls program execution by directing the calls to other functions in the program.

> Several restrictions apply to the main function that don't apply to any other C functions. The main function:

> * **Can't be declared as inline.**
> * **Can't be declared as static.**
> * **Can't have its address taken.**
> * **Can't be called from your program.**

<br>
