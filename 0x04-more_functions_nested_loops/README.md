<h3>Project : 0x04-more_functions_nested_loops</h3>

<h4>Essentials:</h4>

* [_putchar.c](./_putchar.c) : A C function that writes a character to `stdout`.
* [main.h](./main.h) : A Header file containing prototypes for all functions written in the project.

<h4>Prototypes Required:</h4>

| File                 | Prototype                                                      |
| ---------------------| ---------------------------------------------------------------|
| `0. isupper`         | `int _isupper(int c);`                        |
| `1-isdigit.c`        | `int _isdigit(int c);`                |
| `2-mul.c`        | `int mul(int a, int b);`                |
| `3-print_numbers.c`         | `void print_numbers(void);`                             |
| `4-print_most_numbers.c`      | `void print_most_numbers(void);`                           |
| `5-more_numbers.c` | `void more_numbers(void);`                                |
| `6-cap_string.c`     | `char *cap_string(char *);`                                    |
| `7-leet.c`           | `char *leet(char *);`                                          |
| `100-rot13.c`        | `char *rot13(char *);`                                         |
| `101-print_number.c` | `void print_number(int n);`                                    |
| `102-magic.c`        | `N/A`                                                          |
| `103-infinite_add.c` | `char *infinite_add(char *n1, char *n2, char *r, int size_r);` |
| `104-print_buffer.c` | `void print_buffer(char *b, int size);`                        |

<h4>List of Tasks:</h4>

* **0. isupper**
  * File : [0-isupper.c](./0-isupper.c)
  <br>
  Required : A function that checks for uppercase character.
  <br>
  Expected Results :
    <ul>
  <li>Returns 1 if c is uppercase.</li>
  <li>Returns 0 otherwise</li>
  </ul>

* **1. isdigit**
  *  File : [1-isdigit.c](./1-isdigit.c)
   <br>
  Required : A function that checks for a digit (0 through 9).
  <br>
  Expected Results : 
  <ul>
  <li>Returns 1 if c is uppercase.</li>
  <li>Returns 0 otherwise</li>
  </ul>
  
* **2. Collaboration is multiplication**
  *  File : [2-mul.c](./2-mul.c)
   <br>
  Required : A function that multiplies two integers.

  
* **3. The numbers speak for themselves**
  * File : [3-print_numbers.c](./3-print_numbers.c)
  <br>
  Required : A function that prints the numbers, from 0 to 9, followed by a new line.
  <br>
  Expected Results : You can only use _putchar twice in your code

* **4. I believe in numbers and signs**
  *  File : [4-print_most_numbers.c](./4-print_most_numbers.c)
   <br>
  Required : A function that prints the numbers, from 0 to 9, followed by a new line.
  <br>
  Expected Results :
   <ul>
  <li>Do not print 2 and 4</li>
  <li>You can only use _putchar twice in your code</li>
  </ul>
  
* **5. Numbers constitute the only universal language**
  * File : [5-more_numbers.c](./5-more_numbers.c)
  <br>
  Required : A function that prints 10 times the numbers, from 0 to 14, followed by a new line.
  <br>
  Expected Results : You can only use _putchar three times in your code

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
