<h3>Project : 0x09-static_libraries</h3>
<hr>

<h4>Essentials:</h4>

* [main.h](./main.h) : A Header file containing prototypes for all functions written in the project.
* [_putchar.c](./_putchar.c) : A C function that writes a character to `stdout`.

<h4>List of Tasks:</h4>
<hr>

* **0. A library is not a luxury but one of the necessities of life**
  * File : 
    * **[libmy.a](./libmy.a)**
    * **[main.h](./main.h)**
  * Required : A the static library libmy.a containing all the functions listed below:
    
| Prototype                                                   |
| ------------------------------------------------------------|
| `int _putchar(char c);`                                     |
| `int _islower(int c);`                                      |
| `int _isalpha(int c);`                                      |
| `int _abs(int n);`                                          |
| `int _isupper(int c);`                                      |
| `int _isdigit(int c);`                                      |
| `int _strlen(char *s);`                                     |
| `void _puts(char *s);`                                      |
| `char *_strcpy(char *dest, char *src);`                     |
| `int _atoi(char *s);`                                       |
| `char *_strcat(char *dest, char *src);`                     |
| `char *_strncat(char *dest, char *src, int n);`             |
| `char *_strncpy(char *dest, char *src, int n);`             |
| `int _strcmp(char *s1, char *s2);`                          |
| `char *_memset(char *s, char b, unsigned int n);`           |
| `char *_memcpy(char *dest, char *src, unsigned int n);`     |
| `char *_strchr(char *s, char c);`                           |
| `unsigned int _strspn(char *s, char *accept);`              |
| `char *_strpbrk(char *s, char *accept);`                    |
| `char *_strstr(char *haystack, char *needle);`              |

> 💬 Quote : 
> Henry Ward Beecher, American social reformer (1813-1887) said, 

> **"A library is not a luxury but one of the necessities of life."**


<hr>

* **1. Why is it so important to dream? Because, in my dreams we are together**
  * File : [1-print_rev_recursion.c](./1-print_rev_recursion.c)
    * Required : A function that prints a string in reverse.
   
> 💡 Fun Fact : 
> - **Ariadne : "Why is it so important to dream?"**
> - **Cobb : "Because, in my dreams we are together."**
> - -**Inception (2010)**
<hr>
  
* **2. Dreams feel real while we're in them. It's only when we wake up that we realize something was actually strange**
  * File : [2-strlen_recursion.c](./2-strlen_recursion.c)
    * Required : A function that returns the length of a string.

> 💡Fun Fact :
> * **Cobb : "Well dreams, they feel real while we're in them, right? It's only when we wake up that we realize how things are actually strange."**
> * **"Let me ask you a question, you, you never really remember the beginning of a dream do you? You always wind up right in the middle of what's going on."**
> - -**Inception (2010) - Elliot Page as Ariadne**
<hr>
  
* **3. You mustn't be afraid to dream a little bigger, darling**
  * File : [3-factorial.c](./3-factorial.c)
    * Required : A function that returns the factorial of a given number.
    * Expected Results : 
      * **If n is lower than 0, the function should return -1 to indicate an error.**
      * **Factorial of 0 is 1.**

> 💡Fun Fact :
> * **"You Mustn't Be Afraid To Dream A Little Bigger Darling" is a memorable quote uttered by Tom Hardy to Joseph Gordon Levitt from the 2010 film Inception.**
<hr>

* **4. Once an idea has taken hold of the brain it's almost impossible to eradicate**
  * File : [4-pow_recursion.c](./4-pow_recursion.c)
    * Required : A function that returns the value of x raised to the power of y.
    * Expected Results : If y is lower than 0, the function should return -1

> 💡Fun Fact : 
> * **"Once an idea has taken hold of the brain it's almost impossible to eradicate. An idea that is fully formed - fully understood - that sticks; right in there somewhere.**
>* **Leonardo DiCaprio as Cobb - Inception (2010) - IMDb**

<hr>
  
* **5. Your subconscious is looking for the dreamer**
  * File : [5-sqrt_recursion.c](./5-sqrt_recursion.c)
    * Required : A function that returns the natural square root of a number.
    * Expected Results : If n does not have a natural square root, the function should return -1.

> 💡**Fun Fact : “Arthur : Your subconscious is looking for the dreamer; me. Inception (2010)**

<hr>

* **6. Inception. Is it possible?**
  * File : [6-is_prime_number.c](./6-is_prime_number.c)
    * Required : A  a function that returns 1 if the input integer is a prime number, otherwise return 0.

>💡*Fun Fact : “Saito: Inception. Is it possible? Inception (2010)*

<hr>

* **7. They say we only use a fraction of our brain's true potential. Now that's when we're awake. When we're asleep, we can do almost anything**
  * File : [100-is_palindrome.c](./100-is_palindrome.c)
    * Required : A function that returns 1 if a string is a palindrome and 0 if not.
    * Note : An empty string is a palindrome

> 💡*Fun Fact :
> - Cobb : "They say we only use a fraction of our brain's true potential. Now that's when we're awake."
> - "When we're asleep, we can do almost anything."
> - -**Leonardo DiCaprio as Cobb**
<hr>
  
* **8. Inception. Now, before you bother telling me it's impossible...**
  * File : [101-wildcmp.c](./101-wildcmp.c)
    * Required : A function that compares two strings and returns 1 if the strings can be considered identical, otherwise return 0.
    * Expected Results : 
      * **s2 can contain the special character *.**
      * **The special char * can replace any string (including an empty string)**
  
> 💡*Fun Fact : 
> - **Cobb: "Inception. Now, before you bother telling me it's impossible"**
> - **Leonardo DiCaprio as Cobb**


