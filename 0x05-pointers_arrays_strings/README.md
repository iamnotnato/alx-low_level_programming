<h3>Project : 0x05-pointers_arrays_strings</h3>

<h4>Essentials:</h4>

* [_putchar.c](./_putchar.c) : A C function that writes a character to `stdout`.
* [main.h](./main.h) : A Header file containing prototypes for all functions written in the project.

<h4>Prototypes Required:</h4>

| File                 | Prototype                                                      |
| ---------------------| ---------------------------------------------------------------|
| `0-reset_to_98.c`         | `void reset_to_98(int *n);`                        |
| `1-swap.c`        | `void swap_int(int *a, int *b);`                |
| `2-strlen.c`        | `int _strlen(char *s);`                |
| `3-puts.c`         | `void _puts(char *str);`                             |
| `4-print_rev.c`      | `void print_rev(char *s);`                           |
| `5-rev_string.c` | `void rev_string(char *s);`                                |
| `6-puts2.c`     | `void puts2(char *str);`                                    |
| `7-puts_half.c`           | `void puts_half(char *str);`                                          |
| `8-print_array.c`        | `void print_array(int *a, int n);`                                         |
| `101-print_number.c` | `void print_number(int n);`                                    |
| `102-magic.c`        | `N/A`                                                          |
| `103-infinite_add.c` | `char *infinite_add(char *n1, char *n2, char *r, int size_r);` |
| `104-print_buffer.c` | `void print_buffer(char *b, int size);`                        |

<h4>List of Tasks:</h4>

* **0. 98 Battery st.**
  * File : [0-reset_to_98.c](./0-reset_to_98.c)
  <br>
  Required : A function that takes a pointer to an int as parameter and updates the value it points to to 98.
  <br>

* **1. Don't swap horses in crossing a stream**
  *  File : [1-swap.c](./1-swap.c)
   <br>
  Required : A function that swaps the values of two integers.
  
* **2. This report, by its very length, defends itself against the risk of being read**
  *  File : [2-strlen.c](./2-strlen.c)
   <br>
  Required : A function that returns the length of a string.
  
* **3. I do not fear computers. I fear the lack of them**
  * File : [3-puts.c](./3-puts.c)
  <br>
  Required : A function that prints a string, followed by a new line, to stdout.


* **4. I can only go one way. I've not got a reverse gear**
  *  File : [4-print_rev.c](./4-print_rev.c)
   <br>
  Required : A function that prints a string, in reverse, followed by a new line.
  
* **5. A good engineer thinks in reverse and asks himself about the stylistic consequences of the components and systems he proposes**
  * File : [5-rev_string.c](./5-rev_string.c)
  <br>
  Required : A function that reverses a string.

* **6. Half the lies they tell about me aren't true**
  *  File : [6-puts2.c](./6-puts2.c)
   <br>
  Required : A function that prints every other character of a string, starting with the first character, followed by a new line.

  
* **7. Winning is only half of it. Having fun is the other half**
  * File : [7-puts_half.c](./7-puts_half.c)
  <br>
  Required : A function that prints half of a string, followed by a new line.
  <br>
  Expected Results : 
    <ul>
  <li>The function should print the second half of the string</li>
  <li>If the number of characters is odd, the function should print the last n characters of the string, where n = (length_of_the_string - 1) / 2</li>
  </ul>

* **8. Arrays are not pointers**
  *  File : [8-print_array.c](./8-print_array.c)
   <br>
  Required : A function that prints n elements of an array of integers, followed by a new line.
  <br>
  Expected Results : 
    <ul>
  <li>where n is the number of elements of the array to be printed</li>
  <li>Numbers must be separated by comma, followed by a space</li>
    <li>The numbers should be displayed in the same order as they are stored in the array</li>
  </ul>
  
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
