<h3>Project : 0x04-more_functions_nested_loops</h3>

<h4>Essentials:</h4>

* [_putchar.c](./_putchar.c) : A C function that writes a character to `stdout`.
* [main.h](./main.h) : A Header file containing prototypes for all functions written in the project.

<h4>Prototypes Required:</h4>

| File                        | Prototype                                                      |
| ----------------------------| ---------------------------------------------------------------|
| `0. isupper`                | `int _isupper(int c);`                                         |
| `1-isdigit.c`               | `int _isdigit(int c);`                                         |
| `2-mul.c`                   | `int mul(int a, int b);`                                       |
| `3-print_numbers.c`         | `void print_numbers(void);`                                    |
| `4-print_most_numbers.c`    | `void print_most_numbers(void);`                               |
| `5-more_numbers.c`          | `void more_numbers(void);`                                     |
| `6-print_line.c`            | `void print_line(int n);`                                      |
| `7-print_diagonal.c`        | `void print_diagonal(int n);`                                  |
| `8-print_square.c`          | `void print_square(int size);`                                 |
| `9-fizz_buzz.c`             | `N/A`                                                          |
| `10-print_triangle.c`       | `void print_triangle(int size);`                               |
| `100-prime_factor.c`        | `N/A`                                                          |
| `101-print_number.c`        | `void print_number(int n);`                                    |

<h4>List of Tasks:</h4>

* **0. isupper**
  * File : [0-isupper.c](./0-isupper.c)
    * Required : A function that checks for uppercase character.
    * Expected Results :
      * *Returns 1 if c is uppercase.*
      * *Returns 0 otherwise.*
<br><br>

* **1. isdigit**
  * File : [1-isdigit.c](./1-isdigit.c)
    * Required : A function that checks for a digit (0 through 9).
    * Expected Results :
      * *Returns 1 if c is uppercase.*
      * *Returns 0 otherwise*
      <br><br>
      
* **2. Collaboration is multiplication**
  * File : [2-mul.c](./2-mul.c)
    * Required : A function that multiplies two integers.
    <br><br>
    
* **3. The numbers speak for themselves**
  * File : [3-print_numbers.c](./3-print_numbers.c)
    * Required : A function that prints the numbers, from 0 to 9, followed by a new line.
    * Expected Results : You can only use _putchar twice in your code
    <br><br>

* **4. I believe in numbers and signs**
  * File : [4-print_most_numbers.c](./4-print_most_numbers.c)
    * Required : A function that prints the numbers, from 0 to 9, followed by a new line.
    * Expected Results :
      * *Do not print 2 and 4.*
      * *You can only use _putchar twice in your code.*
  <br><br>
  
* **5. Numbers constitute the only universal language**
  * File : [5-more_numbers.c](./5-more_numbers.c)
    * Required : A function that prints 10 times the numbers, from 0 to 14, followed by a new line.
    * Expected Results : You can only use _putchar three times in your code
<br><br>

* **6. The shortest distance between two points is a straight line**
  * File : [6-print_line.c](./6-print_line.c)
    * Required : A function that draws a straight line in the terminal.
    * Expected Results : 
      * *You can only use _putchar function to print.*
      * *Where n is the number of times the character _ should be printed.*
      * *The line should end with a \n.*
      * *If n is 0 or less, the function should only print \n.*
 <br><br> 
 
* **7. I feel like I am diagonally parked in a parallel universe**
  * File : [7-print_diagonal.c](./7-print_diagonal.c)
    * Required : A function that draws a diagonal line on the terminal.
    * Expected Results :   
      * *You can only use _putchar function to print.*
      * *Where n is the number of times the character \ should be printed.*
      * *The diagonal should end with a \n.*
      * *If n is 0 or less, the function should only print \n.*
<br><br>

* **8. You are so much sunshine in every square inch**
  * File : [8-print_square.c](./8-print_square.c)
    * Required : A function that prints a square, followed by a new line.
    * Expected Results : 
      * *You can only use _putchar function to print.*
      * *Where size is the size of the square.*
      * *If size is 0 or less, the function should print only a new line.*
      * *Use the character # to print the square.*
  <br><br>
  
* **9. Fizz-Buzz**
  * File : [9-fizz_buzz.c](./9-fizz_buzz.c)
    * Required : A program that prints the numbers from 1 to 100, followed by a new line.
      But for multiples of three print Fizz instead of the number and for the  multiples of five print Buzz. 
      For numbers which are multiples of both three and five print FizzBuzz.
    * Expected Results : Each number or word should be separated by a space
<br><br>

* **10. Triangles**
  * File : [10-print_triangle.c](./10-print_triangle.c)
    * Required : A function that prints a triangle, followed by a new line.
    * Expected Results : 
      * *You can only use _putchar function to print.*
      * *Where size is the size of the triangle.*
      * *If size is 0 or less, the function should print only a new line.*
      * *Use the character # to print the triangle.**
  <br><br>
  
* **11. The problem of distinguishing prime numbers from composite numbers and of resolving the latter into their prime factors is known to be one of the most important and useful in arithmetic**
  * File : [100-prime_factor.c](./100-prime_factor.c)
    * Required : A program that finds and prints the largest prime factor of the number 612852475143, followed by a new line.
    * Expected Results : Your program will be compiled with this command: gcc -Wall -pedantic -Werror -Wextra -std=gnu89 100-prime_factor.c -o 100-prime_factor -lm
<br><br>

* **12. Numbers have life; they're not just symbols on paper**
  * File : [101-print_number.c](./101-print_number.c)
  * Required : A function that prints an integer.
  * Expected Results :
    *You can only use _putchar function to print</li>**
    * *You are not allowed to use long.*
    * *You are not allowed to use arrays or pointers.*
    * *You are not allowed to hard-code special values.*
    <br><br>
