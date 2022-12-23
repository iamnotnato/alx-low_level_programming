<h3>Project : C - More pointers, arrays and strings.</h3>

<h4>Essentials:</h4>

* [_putchar.c](./_putchar.c) : A C function that writes a character to `stdout`.
* [main.h](./main.h) : A Header file containing prototypes for all functions written in the project.

<h4>Prototypes Required:</h4>

| File                 | Prototype                                                      |
| ---------------------| ---------------------------------------------------------------|
| `0-strcat.c`         | `char *_strcat(char *dest, char *src);`                        |
| `1-strncat.c`        | `char *_strncat(char *dest, char *src, int n);`                |
| `2-strncpy.c`        | `char *_strncpy(char *dest, char *src, int n);`                |
| `3-strcmp.c`         | `int _strcmp(char *s1, char *s2);`                             |
| `4-rev_array.c`      | `void reverse_array(int *a, int n);`                           |
| `5-string_toupper.c` | `char *string_toupper(char *);`                                |
| `6-cap_string.c`     | `char *cap_string(char *);`                                    |
| `7-leet.c`           | `char *leet(char *);`                                          |
| `100-rot13.c`        | `char *rot13(char *);`                                         |
| `101-print_number.c` | `void print_number(int n);`                                    |
| `102-magic.c`        | `N/A`                                                          |
| `103-infinite_add.c` | `char *infinite_add(char *n1, char *n2, char *r, int size_r);` |
| `104-print_buffer.c` | `void print_buffer(char *b, int size);`                        |

<h4>List of Tasks:</h4>

* **0. strcat**
  * File : [0-strcat.c](./0-strcat.c):
  <br>
  Required : A function that concatenates two strings.
  <br>
  Expected Results : Returns a pointer to the resulting string dest.

* **1. strncat**
  *  File : [1-strncat.c](./1-strncat.c): 
   <br>
  Required : A function that concatenates two strings.
  <br>
  Expected Results : Returns a pointer to the resulting string dest.
  
* **2. strncpy**
  *  File : [2-strncpy.c](./2-strncpy.c): 
   <br>
  Required : Your function should work exactly like strncpy.
  <br>
  Expected Results : Your function should work exactly like strncpy.
  
* **3. strcmp**
  * File : [3-strcmp.c](./3-strcmp.c):
  <br>
  Required : A function that compares two strings.
  <br>
  Expected Results : Your function should work exactly like strcmp.

* **4. I am a kind of paranoid in reverse. I suspect people of plotting to make me happy**
  *  File : [4-rev_array.c](./4-rev_array.c): 
   <br>
  Required : A function that reverses the content of an array of integers.
  <br>
  Expected Results : Where n is the number of elements of the array.
  
  * **5. Always look up**
  * File : [5-string_toupper.c](./5-string_toupper.c):
  <br>
  Required : A function that changes all lowercase letters of a string to uppercase.
  <br>
  Expected Results : A function that changes all lowercase letters of a string to uppercase.

* **6. Expect the best. Prepare for the worst. Capitalize on what comes**
  *  File : [6-cap_string.c](./6-cap_string.c): 
   <br>
  Required : Write a function that capitalizes all words of a string.
  <br>
  Expected Results : Separators of words: space, tabulation, new line, ,, ;, ., !, ?, ", (, ), {, and }
  
  * **7. Mozart composed his music not for the elite, but for everybody**
  * File : [7-leet.c](./7-leet.c):
  <br>
  Required : A function that encodes a string into 1337.
  <br>
  Expected Results : You are not allowed to use any ternary operation.

* **8. rot13**
  *  File : [100-rot13.c](./100-rot13.c): 
   <br>
  Required : A function that encodes a string using rot13.
  <br>
  Expected Results : You can only use if statement once in your code.
  
  * **9. Numbers have life; they're not just symbols on paper**
  * File : [101-print_number.c](./101-print_number.c):
  <br>
  Required : A function that prints an integer.
  <br>
  Expected Results : You can only use _putchar function to print.

* **10. A dream doesn't become reality through magic; it takes sweat, determination and hard work**
  *  File : [102-magic.c](./102-magic.c): 
   <br>
  Required : You are not allowed to code anything else than the line of expected line of code at the expected line.
  <br>
  Expected Results : Add one line to the code provided, so that the program prints a[2] = 98, followed by a new line.
  
  * **11. It is the addition of strangeness to beauty that constitutes the romantic character in art**
  * File : [103-infinite_add.c](./103-infinite_add.c):
  <br>
  Required : The function returns a pointer to the result
  <br>
  Expected Results : RIf the result can not be stored in r the function must return 0.

* **12. Noise is a buffer, more effective than cubicles or booth walls**
  *  File : [104-print_buffer.c](./104-print_buffer.c): 
   <br>
  Required : The function must print the content of size bytes of the buffer pointed by b
  <br>
  Expected Results : The output should look like the example they provided and formatted exactly the same way.
