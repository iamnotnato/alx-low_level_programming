<h3>Project : 0x02-functions_nested_loops</h3>

<h4>Essentials:</h4>

* [_putchar.c](./_putchar.c) : A C function that writes a character to `stdout`.
* [main.h](./main.h) : A Header file containing prototypes for all functions written in the project.

<h4>Prototypes Required:</h4>

| File                     | Prototype                                                      |
| -------------------------| ---------------------------------------------------------------|
| `0-putchar.c`            | `N/A`                                                          |
| `1-alphabet.c`           | `void print_alphabet(void);`                                   |
| `2-print_alphabet_x10.c` | `void print_alphabet_x10(void);`                               |
| `3-islower.c`            | `int _islower(int c);`                                         |
| `4-isalpha.c`            | `int _isalpha(int c);`                                         |
| `5-sign.c`               | `int print_sign(int n);`                                       |
| `6-cap_string.c`     | `char *cap_string(char *);`                                    |
| `7-leet.c`           | `char *leet(char *);`                                          |
| `100-rot13.c`        | `char *rot13(char *);`                                         |
| `101-print_number.c` | `void print_number(int n);`                                    |
| `102-magic.c`        | `N/A`                                                          |
| `103-infinite_add.c` | `char *infinite_add(char *n1, char *n2, char *r, int size_r);` |
| `104-print_buffer.c` | `void print_buffer(char *b, int size);`                        |

<h4>List of Tasks:</h4>

* **0. _putchar**
  * File : [0-putchar.c](./0-putchar.c)
  <br>
  Required : A program that prints _putchar, followed by a new line.
  <br>
  Expected Results : The program should return 0

* **1. I sometimes suffer from insomnia. And when I can't fall asleep, I play what I call the alphabet game**
  *  File : [1-alphabet.c](./1-alphabet.c)
   <br>
  Required : A function that prints the alphabet, in lowercase, followed by a new line.
  <br>
  Expected Results : You can only use _putchar twice in your code
  
* **2. 10 x alphabet**
  *  File : [2-print_alphabet_x10.c](./2-print_alphabet_x10.c)
   <br>
  Required : A function that prints 10 times the alphabet, in lowercase, followed by a new line.
  <br>
  Expected Results : You can only use _putchar twice in your code
  
* **3. islower**
  * File : [3-islower.c](./3-islower.c)
  <br>
  Required : A function that checks for lowercase character.
  <br>
  Expected Results : Returns 1 if c is lowercase. Returns 0 otherwise

* **4. isalpha**
  *  File : [4-isalpha.c](./4-isalpha.c)
   <br>
  Required : A function that checks for alphabetic character.
  <br>
  Expected Results :  
  <ul>
  <li>Returns 1 if c is a letter, lowercase or uppercase.</li>
  <li>Returns 0 otherwise</li>
  </ul>
  
* **5. Sign**
  * File : [5-sign.c](./5-sign.c)
  <br>
  Required : A function that prints the sign of a number.
  <br>
  Expected Results : Returns 1 and prints + if n is greater than zero.
Returns 0 and prints 0 if n is zero
Returns -1 and prints - if n is less than zero

* **6. Expect the best. Prepare for the worst. Capitalize on what comes**
  *  File : [6-cap_string.c](./6-cap_string.c)
   <br>
  Required : Write a function that capitalizes all words of a string.
  <br>
  Expected Results : Separators of words: space, tabulation, new line, ,, ;, ., !, ?, ", (, ), {, and }
  
* **7. Mozart composed his music not for the elite, but for everybody**
  * File : [7-leet.c](./7-leet.c)
  <br>
  Required : A function that encodes a string into 1337.
  <br>
  Expected Results : You are not allowed to use any ternary operation.

* **8. rot13**
  *  File : [100-rot13.c](./100-rot13.c)
   <br>
  Required : A function that encodes a string using rot13.
  <br>
  Expected Results : You can only use if statement once in your code.
  
* **9. Numbers have life; they're not just symbols on paper**
  * File : [101-print_number.c](./101-print_number.c)
  <br>
  Required : A function that prints an integer.
  <br>
  Expected Results : You can only use _putchar function to print.

* **10. A dream doesn't become reality through magic; it takes sweat, determination and hard work**
  *  File : [102-magic.c](./102-magic.c)
   <br>
  Required : You are not allowed to code anything else than the line of expected line of code at the expected line.
  <br>
  Expected Results : Add one line to the code provided, so that the program prints a[2] = 98, followed by a new line.
  
* **11. It is the addition of strangeness to beauty that constitutes the romantic character in art**
  * File : [103-infinite_add.c](./103-infinite_add.c)
  <br>
  Required : The function returns a pointer to the result
  <br>
  Expected Results : RIf the result can not be stored in r the function must return 0.

* **12. Noise is a buffer, more effective than cubicles or booth walls**
  *  File : [104-print_buffer.c](./104-print_buffer.c)
   <br>
  Required : The function must print the content of size bytes of the buffer pointed by b
  <br>
  Expected Results : The output should look like the example they provided and formatted exactly the same way.
