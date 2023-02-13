> 🚧 **Project : 0x01-variables_if_else_while**
 
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

> 📁 **0. Positive anything is better than negative nothing**
>
> 💾 **File :** [0-positive_or_negative.c](./0-positive_or_negative.c)
> 
> 📑 **Task :**  Complete the source code in order to print whether the number stored in the variable n is positive or negative.
>
> 💬 *Quote : Quote by Elbert Hubbard: “Positive anything is better than negative nothing.”*
>
> 📝 **Required :** 

| | Guides                                                                           |
|-| -------------------------------------------------------------------------------- |
|-| The variable n will store a different value every time you will run this program |
|-| You don’t have to understand what rand, srand, RAND_MAX do.                      |
|-| The output of the program should be:                                             |
|-| The number, followed by :                                                        |
|-| - **if the number is greater than 0: is positive**                               |
|-| - **if the number is 0: is zero**                                                |
|-| - **if the number is less than 0: is negative**                                  |
|-| followed by a new line                                                           |

<br>

> ⚙️ Compiler:

```
~$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-positive_or_negative.c -o 0-positive_or_negative
```

> ✔️ Sample test cases :

```
~$  ./0-positive_or_negative 
-520693284 is negative
~$  ./0-positive_or_negative 
-973398895 is negative
~$  ./0-positive_or_negative 
-199220452 is negative
~$  ./0-positive_or_negative 
561319348 is positive
~$  ./0-positive_or_negative 
561319348 is positive
~$  ./0-positive_or_negative 
266853958 is positive
~$  ./0-positive_or_negative 
-48147767 is negative
~$  ./0-positive_or_negative 
0 is zero
~$  
```

<br>

* **1. The last digit**
  * File : [1-last_digit.c](./1-last_digit.c)
    * Required : Complete the source code in order to print the last digit of the number stored in the variable n.
    * Expected Results : The variable n will store a different value every time you run this program.
<br>

* **2. I sometimes suffer from insomnia. And when I can't fall asleep, I play what I call the alphabet game**
  * File : [2-print_alphabet.c](./2-print_alphabet.c)
    * Required : A program that prints the alphabet in lowercase, followed by a new line.
    * Expected Results : You can only use the putchar function (every other function (printf, puts, etc…) is forbidden).

> 💬 *Quote : Quote by Roz Chast: I sometimes suffer from insomnia. And when I can't fall asleep, I play what I call the alphabet game.*

<br>

* **3. alphABET**
  * File : [3-print_alphabets.c](./3-print_alphabets.c)
    * Required : A program that prints the alphabet in lowercase, and then in uppercase, followed by a new line.
    * Expected Results : You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
<br>

* **4. When I was having that alphabet soup, I never thought that it would pay off**
  * File : [4-print_alphabt.c](./4-print_alphabt.c)
    * Required : A program that prints the alphabet in lowercase, followed by a new line.
    * Expected Results : You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)

> 💬 *Quote : Quote by Vanna White: “When I was having that alphabet soup, I never thought that it would pay off.”*

<br>

* **5. Numbers**
  * File : [5-print_numbers.c](./5-print_numbers.c)
    * Required : A program that prints all single digit numbers of base 10 starting from 0, followed by a new line.
    * Expected Results : All your code should be in the main function.
<br>

* **6. Numberz**
  * File : [6-print_numberz.c](./6-print_numberz.c)
    * Required : A program that prints all single digit numbers of base 10 starting from 0, followed by a new line.
    * Expected Results : You can only use the putchar function (every other function (printf, puts, etc…) is forbidden).
<br>

* **7. Smile in the mirror**
  * File : [7-print_tebahpla.c](./7-print_tebahpla.c)
    * Required : A program that prints the lowercase alphabet in reverse, followed by a new line.
    * Expected Results : You can only use the putchar function (every other function (printf, puts, etc…) is forbidden).

> 💬 *Quote : Quote by Yoko Ono : “Smile in the mirror. Do that every morning and you’ll start to see a big difference in your life.”*

<br>

* **8. Hexadecimal**
  * File : [8-print_base16.c](./8-print_base16.c)
    * Required : A program that prints all the numbers of base 16 in lowercase, followed by a new line.
    * Expected Results : You can only use the putchar function (every other function (printf, puts, etc…) is forbidden).

<br>

* **9. Patience, persistence and perspiration make an unbeatable combination for success**
  * File : [9-print_comb.c](./9-print_comb.c)
    * Required : A program that prints all possible combinations of single-digit numbers.
    * Expected Results : Numbers should be printed in ascending order.

> 💬 *Quote : Quote by Napoleon Hill: “Patience, persistence and perspiration make an unbeatable combination for success.”*

<br>

* **10. Inventing is a combination of brains and materials. The more brains you use, the less material you need**
  * File : [100-print_comb3.c](./100-print_comb3.c)
    * Required : A program that prints all possible different combinations of two digits.
    * Expected Results : You can only use the putchar function (every other function (printf, puts, etc…) is forbidden).

> 💬 *Quote : Quote by Charles Kettering: “Inventing is a combination of brains and materials. The more brains you use, the less material you need.”*

<br>

* **11. The success combination in business is: Do what you do better... and: do more of what you do...**
  * File : [103-infinite_add.c](./103-infinite_add.c)
    * Required : A program that prints all possible different combinations of three digits.
    * Expected Results : Print only the smallest combination of three digits.

> 💬 *Quote : Quote by David Joseph Schwartz: “The success combination in business is: Do what you do better... and: do more of what you do.”*

<br>

* **12. Software is eating the World**
  * File : [102-print_comb5.c](./102-print_comb5.c)
    * Required : A program that prints all possible combinations of two two-digit numbers.
    * Expected Results : The combinations of numbers should be printed in ascending order.

> 💬 *Quote : Quote by Marc Andreessen: “Software is eating the World”*
