> 🚧 **Project :  0x08-recursion**

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

> 📑 **Essentials:**

* [_putchar.c](./_putchar.c) : A C function that writes a character to `stdout`.
* [main.h](./main.h) : A Header file containing prototypes for all functions written in the project.

<br>

> Prototypes Required:

| File                         | Prototype                               |
| -----------------------------| ----------------------------------------|
| `0-puts_recursion.c`         | `void _puts_recursion(char *s);`        |
| `1-print_rev_recursion.c`    | `void _print_rev_recursion(char *s);`   |
| `2-strlen_recursion.c`       | `int _strlen_recursion(char *s);`       |
| `3-factorial.c`              | `int factorial(int n);`                 |
| `4-pow_recursion.c`          | `int _pow_recursion(int x, int y);`     |
| `5-sqrt_recursion.c`         | `int _sqrt_recursion(int n);`           |
| `6-is_prime_number.c`        | `int is_prime_number(int n);`           |
| `100-is_palindrome.c`        | `int is_palindrome(char *s);`           |
| `101-wildcmp.c`              | `int wildcmp(char *s1, char *s2);`      |

<br>

> ✒️ **List of Tasks:**

<br>

> 📁 **0. She locked away a secret, deep inside herself, something she once knew to be true... but chose to forget**
>
> 💾 **File :** [0-puts_recursion.c](./0-puts_recursion.c)
>
> 💾 **File :** [0-main.c](./0-main.c)
> 
> 📑 **Task :**  A function that prints a string, followed by a new line.
>
>  ℹ️  **Hint:** The standard library provides a similar function: puts. Run man puts to learn more.
>
> 🎬 *Movie Quote :*
> 
> *"She had locked something away,something deep inside."*
>
> *"A truth that she had once known,but chose to forget."*
>
> *`Leonardo DiCaprio as Cobb`*
>
> *Inception (2010)*
>

<br>

> ⚙️ Compiler:

```
~$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 0-main.c 0-puts_recursion.c -o 0-puts_recursion
```

> ✔️ Sample test cases :

```
~$  ./0-puts_recursion 
Puts with recursion
~$  
```

<br>
<br>

* **1. Why is it so important to dream? Because, in my dreams we are together**
  * File : [1-print_rev_recursion.c](./1-print_rev_recursion.c)
    * Required : A function that prints a string in reverse.
   
> 🎬 *Movie Quote :*
> 
> *Ariadne : "Why is it so important to dream?"*
>
> *Cobb : "Because, in my dreams we are together."*
>
> *`Leonardo DiCaprio as Cobb`*
>
> *`Elliot Page as Ariadne`*
> 
> *Inception (2010)*
<br>
  
* **2. Dreams feel real while we're in them. It's only when we wake up that we realize something was actually strange**
  * File : [2-strlen_recursion.c](./2-strlen_recursion.c)
    * Required : A function that returns the length of a string.

> 🎬 *Movie Quote :*
> 
> "Well dreams, they feel real while we're in them, right? It's only when we wake up that we realize how things are actually strange."*
>
> *`Leonardo DiCaprio as Cobb`*
>
> *Inception (2010)*
<br>
  
* **3. You mustn't be afraid to dream a little bigger, darling**
  * File : [3-factorial.c](./3-factorial.c)
    * Required : A function that returns the factorial of a given number.
    * Expected Results : 
      * **If n is lower than 0, the function should return -1 to indicate an error.**
      * **Factorial of 0 is 1.**

> 🎬 *Movie Quote :*
> 
> *"You Mustn't Be Afraid To Dream A Little Bigger Darling".*
>
> *`Tom Hardy as Eames`*
>
> *Inception (2010)*
<br>

* **4. Once an idea has taken hold of the brain it's almost impossible to eradicate**
  * File : [4-pow_recursion.c](./4-pow_recursion.c)
    * Required : A function that returns the value of x raised to the power of y.
    * Expected Results : If y is lower than 0, the function should return -1

> 🎬 *Movie Quote :*
> 
> *"Once an idea has taken hold of the brain it's almost impossible to eradicate."*
> 
> *"An idea that is fully formed - fully understood - that sticks; right in there somewhere."*
>
> *`Leonardo DiCaprio as Cobb`*
>
> *Inception (2010)*

<br>
  
* **5. Your subconscious is looking for the dreamer**
  * File : [5-sqrt_recursion.c](./5-sqrt_recursion.c)
    * Required : A function that returns the natural square root of a number.
    * Expected Results : If n does not have a natural square root, the function should return -1.

> 🎬 *Movie Quote :*
> 
> *“Your subconscious is looking for the dreamer; me."*
>
> *`Joseph Gordon-Levitt as Arthur`*
>
> *Inception (2010)*

<br>

* **6. Inception. Is it possible?**
  * File : [6-is_prime_number.c](./6-is_prime_number.c)
    * Required : A  a function that returns 1 if the input integer is a prime number, otherwise return 0.

>🎬 *Movie Quote :*
>
> *“Inception. Is it possible?"*
> 
> *`Ken Watanabe as Saito`*
> 
>  *Inception (2010)*

<br>

* **7. They say we only use a fraction of our brain's true potential. Now that's when we're awake. When we're asleep, we can do almost anything**
  * File : [100-is_palindrome.c](./100-is_palindrome.c)
    * Required : A function that returns 1 if a string is a palindrome and 0 if not.
    * Note : An empty string is a palindrome

> 🎬 *Movie Quote :*
> 
> *"They say we only use a fraction of our brain's true potential. Now that's when we're awake."*
>
> *"When we're asleep, we can do almost anything."*
>
> *`Leonardo DiCaprio as Cobb`*
>
> *Inception (2010)*
<br>
  
* **8. Inception. Now, before you bother telling me it's impossible...**
  * File : [101-wildcmp.c](./101-wildcmp.c)
    * Required : A function that compares two strings and returns 1 if the strings can be considered identical, otherwise return 0.
    * Expected Results : 
      * **s2 can contain the special character *.**
      * **The special char * can replace any string (including an empty string)**
  
> 🎬 *Movie Quote :*
> 
> *"Inception. Now, before you bother telling me it's impossible"*
>
> *`Leonardo DiCaprio as Cobb`*
>
> *Inception (2010)*
