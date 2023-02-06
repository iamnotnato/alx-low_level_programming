> 🚧 **Project : 0x00-hello_world**
 
<br>

> 📝 **Summary:**

> These are projects that helped me understand a bit of low-level programming.

<br>

> ⌨️ **Languages Used :**

<table>
  <tr>
    <td><img alt="medium" src="https://img.shields.io/badge/C-00599C?style=for-the-badge&logo=c&logoColor=white"></td>
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

> 📝 **Notes:**

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

> ✒️ **List of Tasks:**

<br>

> 📁 **0. Preprocessor**
> 
> 💾 **File :** [0-preprocessor](./0-preprocessor)
> 
> 💾 **File :** [main.c](./main.c) 
> 
> 📑 **Task :** A script that runs a C file through the preprocessor and save the result into another file.
> 
> 📝 **Required :** 

<br>

| | Guides                                               |
|-| ---------------------------------------------------- |
|-| The output should be saved in the file c.            |
|-| The C file name will be saved in the variable $CFILE | 

<br>

> 📁 **1. Compiler**
> 
> 💾 **File :** [1-compiler](./1-compiler)
>
> 💾 **File :** [main.c](./main.c) 
>
> 📑 **Task :** A script that compiles a C file but does not link.
> 
> 📝 **Required :** 

<br>

| | Guides                                                                                           |
|-| ------------------------------------------------------------------------------------------------ |
|-| The output file should be named the same as the C file, but with the extension .o instead of .c. |
|-| The C file name will be saved in the variable $CFILE                                             |

<br>

> 📁 **2. Assembler**
> 
> 💾 **File :**  [2-assembler](./2-assembler)
>
> 💾 **File :** [main.c](./main.c) 
>
> 📑 **Task :** A script that generates the assembly code of a C code and save it in an output file.
> 
> 📝 **Required :** 

<br>

| | Guides                                                                                           |
|-| ------------------------------------------------------------------------------------------------ |
|-| The output file should be named the same as the C file, but with the extension .s instead of .c. |
|-| The C file name will be saved in the variable $CFILE                                             |

<br>

> 📁 **3. Name**
>
> 💾 **File :** [3-name](./3-name)
>
> 💾 **File :** [main.c](./main.c) 
>
> 📑 **Task :** A script that compiles a C file and creates an executable named cisfun.
>
> 📝 **Required :** 

<br>

| | Guides                                                                                           |
|-| ------------------------------------------------------------------------------------------------ |
|-| The C file name will be saved in the variable $CFILE                                             |

<br>

> 📁 **4. Hello, puts**
>
> 💾 **File :** [4-puts.c](./4-puts.c)
> 
> 📑 **Task :**  A C program that prints exactly "Programming is like building a multilingual puzzle, followed by a new line.
> 
> 📝 **Required :** 

<br>

| | Guides                                              |
|-| --------------------------------------------------- |
|-| Use the function puts                               |
|-| You are not allowed to use printf                   |
|-| Your program should end with the value 0            |

<br>

> ⚙️ Compiler:

```
~$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 4-puts.c && ./a.out
```

<br>

> ✔️ Sample test cases :

```
~$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 4-puts.c && ./a.out
"Programming is like building a multilingual puzzle
~$ echo $?
0
~$ 
```

<br>

> 📁 **5. Hello, printf**
>
> 💾 **File :** [5-printf.c](./5-printf.c)
> 
> 📑 **Task :** A C program that prints exactly with proper grammar, but the outcome is a piece of art,, followed by a new line.
> 
> 📝 **Required :** 

<br>

| | Guides                                                                      |
|-| --------------------------------------------------------------------------- |
|-| Use the function printf                                                     |
|-| You are not allowed to use the function puts                                |
|-| Your program should return 0                                                |
|-| Your program should compile without warning when using the -Wall gcc option |

<br>

> ⚙️ Compiler:

```
~$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 5-printf.c
```

<br>

> ✔️ Sample test cases :

```
~$ ./a.out 
with proper grammar, but the outcome is a piece of art,
~$ echo $?
0
~$
```

<br>

> 📁 **6. Size is not grandeur, and territory does not make a nation**
>
> 💾 **File :** [6-size.c](./6-size.c)
> 
> 📑 **Task :** A C program that prints the size of various types on the computer it is compiled and run on.
>    
> 💬 *Quote : Size is not grandeur, and territory does not make a nation by Thomas Henry Huxley*
> 
> 📝 **Required :** 

<br>

| | Guides                                                                                         |
|-| ---------------------------------------------------------------------------------------------- |
|-| You should produce the exact same output as in the example                                     |
|-| Warnings are allowed                                                                           |
|-| Your program should return 0                                                                   |
|-| You might have to install the package libc6-dev-i386 on your Linux to test the -m32 gcc option |

<br>

> ⚙️ Compiler:

```
~$ gcc 6-size.c -m32 -o size32 2> /tmp/32
~$ gcc 6-size.c -m64 -o size64 2> /tmp/64
```

<br>

> ✔️ Sample test cases :

```
~$ ./size32
Size of a char: 1 byte(s)
Size of an int: 4 byte(s)
Size of a long int: 4 byte(s)
Size of a long long int: 8 byte(s)
Size of a float: 4 byte(s)
~$ ./size64
Size of a char: 1 byte(s)
Size of an int: 4 byte(s)
Size of a long int: 8 byte(s)
Size of a long long int: 8 byte(s)
Size of a float: 4 byte(s)
~$ echo $?
0
~$ 
```

<br>

> 📁 **7. Intel**
>
> 💾 **File :** [100-intel](./100-intel)
>
> 💾 **File :** [main.c](./main.c) 
>
> 📑 **Task :** A script that generates the assembly code (Intel syntax) of a C code and save it in an output file.
>
> 💡*Fun Fact : Intel Corporation is one of the developers of the x86 series of instruction sets, the instruction sets found in most personal computers.*
>
> 📝 **Required :** 

<br>

| | Guides                                                                                           |
|-| ------------------------------------------------------------------------------------------------ |
|-| The C file name will be saved in the variable $CFILE.                                            |
|-| The output file should be named the same as the C file, but with the extension .s instead of .c. |

<br>

> 📁 **8. UNIX is basically a simple operating system, but you have to be a genius to understand the simplicity**
>
> 💾 **File :** [101-quote.c](./101-quote.c)
> 
> 📑 **Task :**  A C program that prints exactly and that piece of art is useful" - Dora Korpar, 2015-10-19, followed by a new line, to the standard error.
>
> 💡*Fun Fact : UNIX is basically a simple operating system, but you have to be a genius to understand the simplicity was a quote made by Dennis Ritchie.*
>
> 💡*He is most well-known for creating the C programming language and, with long-time colleague Ken Thompson, the Unix operating system and B programming language.*
>     
> 📝 **Required :** 

<br>

| | Guides                                                                                                    |
|-| --------------------------------------------------------------------------------------------------------- |
|-| You are not allowed to use any functions listed in the NAME section of the man (3) printf or man (3) puts |
|-| Your program should return 1                                                                              |
|-| Your program should return 0                                                                              |
|-| Your program should compile without any warnings when using the -Wall gcc option                          |

<br>

> ⚙️ Compiler:

```
~$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -o quote 101-quote.c
```

<br>

> ✔️ Sample test cases :

```
~$ ./quote
and that piece of art is useful" - Dora Korpar, 2015-10-19
~$ echo $?
1
~$ ./quote 2> q
~$ cat q
and that piece of art is useful" - Dora Korpar, 2015-10-19
~$ grep printf < 101-quote.c
~$ grep put < 101-quote.c
~$ 
```

<br>
