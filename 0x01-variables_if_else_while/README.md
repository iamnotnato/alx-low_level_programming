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

> 📁 **1. The last digit**
> 
> 💾 **File :** [1-last_digit.c](./1-last_digit.c)
> 
> 📑 **Task :** Complete the source code in order to print the last digit of the number stored in the variable n.
> 
> 📝 **Required :**  The variable n will store a different value every time you run this program.

<br>

| | Guides                                                                                         |
|-| ---------------------------------------------------------------------------------------------- |
|-| The variable n will store a different value every time you will run this program               |
|-| You don’t have to understand what rand, srand, RAND_MAX do.                                    |
|-| The output of the program should be:                                                           |
|-| The string Last digit of, followed by :                                                        |
|-| - *n, followed by :*                                                                           |
|-| - *the string is, followed by*                                                                 |
|-| - **if the last digit of n is greater than 5: the string and is greater than 5**               |
|-| - **if the last digit of n is 0: the string and is 0**                                         |
|-| - **if the last digit of n is less than 6 and not 0: the string and is less than 6 and not 0** |
|-| followed by a new line                                                                         |

<br>

> ⚙️ Compiler:

```
~$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-last_digit.c -o 1-last_digit
```

> ✔️ Sample test cases :

```
$ ./1-last_digit 
Last digit of 629438752 is 2 and is less than 6 and not 0
$ ./1-last_digit 
Last digit of -748255693 is -3 and is less than 6 and not 0
$ ./1-last_digit 
Last digit of -1052791662 is -2 and is less than 6 and not 0
$ ./1-last_digit 
Last digit of -284805734 is -4 and is less than 6 and not 0
$ ./1-last_digit 
Last digit of -284805734 is -4 and is less than 6 and not 0
$ ./1-last_digit 
Last digit of 491506926 is 6 and is greater than 5
$ ./1-last_digit 
Last digit of 954249937 is 7 and is greater than 5
$ ./1-last_digit 
Last digit of 652334952 is 2 and is less than 6 and not 0
$ ./1-last_digit 
Last digit of -729688197 is -7 and is less than 6 and not 0
$ ./1-last_digit 
Last digit of -729688197 is -7 and is less than 6 and not 0
$ ./1-last_digit 
Last digit of 45528266 is 6 and is greater than 5
$ ./1-last_digit 
Last digit of 45528266 is 6 and is greater than 5
$ ./1-last_digit 
Last digit of 809065140 is 0 and is 0
$
```

<br>

> 📁 **2. I sometimes suffer from insomnia. And when I can't fall asleep, I play what I call the alphabet game**
> 
> 💾 **File :** [2-print_alphabet.c](./2-print_alphabet.c)
> 
> 📑 **Task :** A program that prints the alphabet in lowercase, followed by a new line.
> 
> 💬 *Quote : Quote by Roz Chast: I sometimes suffer from insomnia. And when I can't fall asleep, I play what I call the alphabet game.*
> 
> 📝 **Required :**  

<br>

| | Guides                                                                                         |
|-| ---------------------------------------------------------------------------------------------- |
|-| You can only use the putchar function (every other function (printf, puts, etc…) is forbidden).|
|-| All your code should be in the main function                                                   |
|-| You can only use putchar twice in your code                                                    |

<br>

> ⚙️ Compiler:

```
~$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-print_alphabet.c -o 2-print_alphabet
```

> ✔️ Sample test cases :

```
$ ./2-print_alphabet 
abcdefghijklmnopqrstuvwxyz
$
```

> 📁 **3. alphABET**
> 
> 💾 **File :** [3-print_alphabets.c](./3-print_alphabets.c)
> 
> 📑 **Task :** A program that prints the alphabet in lowercase, and then in uppercase, followed by a new line.
> 
> 📝 **Required :**  You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
<br>

> 📁 **4. When I was having that alphabet soup, I never thought that it would pay off**
> 
> 💾 **File :** [4-print_alphabt.c](./4-print_alphabt.c)
> 
> 📑 **Task :** A program that prints the alphabet in lowercase, followed by a new line.
> 
> 📝 **Required :**  You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
> 
> 💬 *Quote : Quote by Vanna White: “When I was having that alphabet soup, I never thought that it would pay off.”*

<br>

> 📁 **5. Numbers**
> 
> 💾 **File :** [5-print_numbers.c](./5-print_numbers.c)
> 
> 📑 **Task :** : A program that prints all single digit numbers of base 10 starting from 0, followed by a new line.
> 
> 📝 **Required :**  All your code should be in the main function.
<br>

> 📁 **6. Numberz**
> 
> 💾 **File :** [6-print_numberz.c](./6-print_numberz.c)
> 
> 📑 **Task :** A program that prints all single digit numbers of base 10 starting from 0, followed by a new line.
> 
> 📝 **Required :**  You can only use the putchar function (every other function (printf, puts, etc…) is forbidden).
<br>

> 📁 **7. Smile in the mirror**
> 
> 💾 **File :** [7-print_tebahpla.c](./7-print_tebahpla.c)
> 📑 **Task :** A program that prints the lowercase alphabet in reverse, followed by a new line.
> 
> 📝 **Required :**  You can only use the putchar function (every other function (printf, puts, etc…) is forbidden).
> 
> 💬 *Quote : Quote by Yoko Ono : “Smile in the mirror. Do that every morning and you’ll start to see a big difference in your life.”*

<br>

> 📁 **8. Hexadecimal**
> 
> 💾 **File :** [8-print_base16.c](./8-print_base16.c)
> 
> 📑 **Task :** A program that prints all the numbers of base 16 in lowercase, followed by a new line.
> 
> 📝 **Required :**  You can only use the putchar function (every other function (printf, puts, etc…) is forbidden).

<br>

> 📁 **9. Patience, persistence and perspiration make an unbeatable combination for success**
> 
> 💾 **File :** [9-print_comb.c](./9-print_comb.c)
> 
> 📑 **Task :** A program that prints all possible combinations of single-digit numbers.
> 
> 📝 **Required :**  Numbers should be printed in ascending order.
> 
> 💬 *Quote : Quote by Napoleon Hill: “Patience, persistence and perspiration make an unbeatable combination for success.”*

<br>

> 📁 **10. Inventing is a combination of brains and materials. The more brains you use, the less material you need**
> 
> 💾 **File :** [100-print_comb3.c](./100-print_comb3.c)
> 
> 📑 **Task :** A program that prints all possible different combinations of two digits.
> 
> 📝 **Required :**  You can only use the putchar function (every other function (printf, puts, etc…) is forbidden).
> 
> 💬 *Quote : Quote by Charles Kettering: “Inventing is a combination of brains and materials. The more brains you use, the less material you need.”*

<br>

> 📁 **11. The success combination in business is: Do what you do better... and: do more of what you do...**
> 
> 💾 **File :** [103-infinite_add.c](./103-infinite_add.c)
> 
> 📑 **Task :** A program that prints all possible different combinations of three digits.
> 
> 📝 **Required :**  Print only the smallest combination of three digits.
> 
> 💬 *Quote : Quote by David Joseph Schwartz: “The success combination in business is: Do what you do better... and: do more of what you do.”*

<br>

> 📁 **12. Software is eating the World**
> 
> 💾 **File :** [102-print_comb5.c](./102-print_comb5.c)
> 
> 📑 **Task :** A program that prints all possible combinations of two two-digit numbers.
> 
> 📝 **Required :**  The combinations of numbers should be printed in ascending order.
> 
> 💬 *Quote : Quote by Marc Andreessen: “Software is eating the World”*
