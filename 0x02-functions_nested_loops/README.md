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
| `6-abs.c`     | `int _abs(int);`                                    |
| `7-print_last_digit.c`           | `int print_last_digit(int);`                                          |
| `8-24_hours.c`        | `void jack_bauer(void);`                                         |
| `9-times_table.c` | `void times_table(void);`                                    |
| `10-add.c`        | `int add(int, int);`                                                          |
| `11-print_to_98.c` | `void print_to_98(int n);` |
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
  Expected Results : 
  <ul>
  <li>Returns 1 and prints + if n is greater than zero.</li>
  <li>Returns 0 and prints 0 if n is zero</li>
  <li>Returns -1 and prints - if n is less than zero</li>
  </ul>

* **6. There is no such thing as absolute value in this world. You can only estimate what a thing is worth to you**
  *  File : [6-abs.c](./6-abs.c)
   <br>
  Required : A function that computes the absolute value of an integer.
  
* **7. There are only 3 colors, 10 digits, and 7 notes; it's what we do with them that's important.**
  * File : [7-print_last_digit.c](./7-print_last_digit.c)
  <br>
  Required : A function that prints the last digit of a number.
  <br>
  Expected Results : Returns the value of the last digit.

* **8. I'm federal agent Jack Bauer, and today is the longest day of my life**
  *  File : [8-24_hours.c](./8-24_hours.c)
   <br>
  Required : A function that prints every minute of the day of Jack Bauer, starting from 00:00 to 23:59.

* **9. Learn your times table**
  * File : [9-times_table.c](./9-times_table.c)
  <br>
  Required : A function that prints the 9 times table, starting with 0.

* **10. a + b**
  *  File : [10-add.c](./10-add.c)
   <br>
  Required : A function that adds two integers and returns the result.

  
* **11. 98 Battery Street, the OG**
  * File : [11-print_to_98.c](./11-print_to_98.c)
  <br>
  Required : The function returns a pointer to the result
  <br>
  Expected Results : 
   <ul>
  <li>Numbers must be separated by a comma, followed by a space</li>
  <li>Numbers should be printed in order</li>
  <li>The first printed number should be the number passed to your function</li>
  <li>The last printed number should be 98</li>
  </ul>
  
* **12. Noise is a buffer, more effective than cubicles or booth walls**
  *  File : [104-print_buffer.c](./104-print_buffer.c)
   <br>
  Required : The function must print the content of size bytes of the buffer pointed by b
  <br>
  Expected Results : The output should look like the example they provided and formatted exactly the same way.
  
  * **12. Noise is a buffer, more effective than cubicles or booth walls**
  *  File : [104-print_buffer.c](./104-print_buffer.c)
   <br>
  Required : The function must print the content of size bytes of the buffer pointed by b
  <br>
  Expected Results : The output should look like the example they provided and formatted exactly the same way.
  
  * **12. Noise is a buffer, more effective than cubicles or booth walls**
  *  File : [104-print_buffer.c](./104-print_buffer.c)
   <br>
  Required : The function must print the content of size bytes of the buffer pointed by b
  <br>
  Expected Results : The output should look like the example they provided and formatted exactly the same way.
  
  * **12. Noise is a buffer, more effective than cubicles or booth walls**
  *  File : [104-print_buffer.c](./104-print_buffer.c)
   <br>
  Required : The function must print the content of size bytes of the buffer pointed by b
  <br>
  Expected Results : The output should look like the example they provided and formatted exactly the same way.
  
  * **12. Noise is a buffer, more effective than cubicles or booth walls**
  *  File : [104-print_buffer.c](./104-print_buffer.c)
   <br>
  Required : The function must print the content of size bytes of the buffer pointed by b
  <br>
  Expected Results : The output should look like the example they provided and formatted exactly the same way.
