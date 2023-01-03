<h3>Project : 0x05-pointers_arrays_strings</h3>

<h4>Essentials:</h4>

* [_putchar.c](./_putchar.c) : A C function that writes a character to `stdout`.
* [main.h](./main.h) : A Header file containing prototypes for all functions written in the project.

<h4>Prototypes Required:</h4>

| File                 | Prototype                                                      |
| ---------------------| ---------------------------------------------------------------|
| `0-reset_to_98.c`    | `void reset_to_98(int *n);`                                    |
| `1-swap.c`           | `void swap_int(int *a, int *b);`                               |
| `2-strlen.c`         | `int _strlen(char *s);`                                        |
| `3-puts.c`           | `void _puts(char *str);`                                       |
| `4-print_rev.c`      | `void print_rev(char *s);`                                     |
| `5-rev_string.c`     | `void rev_string(char *s);`                                    |
| `6-puts2.c`          | `void puts2(char *str);`                                       |
| `7-puts_half.c`      | `void puts_half(char *str);`                                   |
| `8-print_array.c`    | `void print_array(int *a, int n);`                             |
| `9-strcpy.c`         | `char *_strcpy(char *dest, char *src);`                        |
| `100-atoi.c`         | `int _atoi(char *s);`                                          |
| `101-keygen.c`       | `N/A`                                                          |

<h4>List of Tasks:</h4>

* **0. 98 Battery st.**
  * File : [0-reset_to_98.c](./0-reset_to_98.c)
    * Required : A function that takes a pointer to an int as parameter and updates the value it points to to 98.

💡*Fun Fact : 98 Battery St is located in San Francisco, CA*
  <br><br>
  
* **1. Don't swap horses in crossing a stream**
  * File : [1-swap.c](./1-swap.c)
    * Required : A function that swaps the values of two integers.

💡*Fun Fact : “Don't change horses” is a phrase used to urge voters to stick with the incumbent president during times of turmoil and conflict.*
   <br><br>
   
* **2. This report, by its very length, defends itself against the risk of being read**
  * File : [2-strlen.c](./2-strlen.c)
    * Required : A function that returns the length of a string.

💡*Fun Fact : Quote by Winston S. Churchill — 'This paper, by its very length, defends itself from ever being read.'*
   <br><br>
   
* **3. I do not fear computers. I fear the lack of them**
  * File : [3-puts.c](./3-puts.c)
    * Required : A function that prints a string, followed by a new line, to stdout.

💡*Fun Fact : Quote by  Isaac Asimov — "I do not fear computers. I fear the lack of them."*
 <br><br>

* **4. I can only go one way. I've not got a reverse gear**
  * File : [4-print_rev.c](./4-print_rev.c)
    * Required : A function that prints a string, in reverse, followed by a new line.

💡*Fun Fact : Quote by Tony Blair (2004). — "I can only go one way. I've not got a reverse gear."*
   <br><br>

* **5. A good engineer thinks in reverse and asks himself about the stylistic consequences of the components and systems he proposes**
  * File : [5-rev_string.c](./5-rev_string.c)
    * Required : A function that reverses a string.

💡*Fun Fact : “A good engineer thinks in reverse and asks himself about the stylistic consequences of the components and systems he proposes.” — Quote by Helmut Jahn.*
 <br><br>
 
* **6. Half the lies they tell about me aren't true**
  * File : [6-puts2.c](./6-puts2.c)
    * Required : A function that prints every other character of a string, starting with the first character, followed by a new line.

💡*Fun Fact : "Half the lies they tell about me aren't true." - Quote by Yogi Berra*
 <br><br>
  
* **7. Winning is only half of it. Having fun is the other half**
  * File : [7-puts_half.c](./7-puts_half.c)
    * Required : A function that prints half of a string, followed by a new line.
    * Expected Results : 
      * *The function should print the second half of the string.*
      * *If the number of characters is odd, the function should print the last n characters of the string, where n = (length_of_the_string - 1) / 2.*

💡*Fun Fact : Quote by Bum Phillips: “Winning is only half of it. Having fun is the other half.”*
 <br><br>
 
* **8. Arrays are not pointers**
  * File : [8-print_array.c](./8-print_array.c)
    * Required : A function that prints n elements of an array of integers, followed by a new line.
    * Expected Results : 
      * Where n is the number of elements of the array to be printed.*
      * Numbers must be separated by comma, followed by a space.*
      * The numbers should be displayed in the same order as they are stored in the array.*

💡*Fun Fact :Van der Linden discusses in his book Deep C Secrets is how “arrays are not pointers“.*

 💡* **This can be dangerous because it sets the wrong tone, and is really a half-truth.** 
 
 💡* **It’s a bit of a chicken and egg problem. Arrays look like pointers, and pointers can refer to array objects.**
   <br><br>
   
* **9. strcpy**
  * File : [9-strcpy.c](./9-strcpy.c)
    * Required : A function that copies the string pointed to by src, including the terminating null byte (\0), to the buffer pointed to by dest.
    * Expected Results : Return value: the pointer to dest
 <br><br>
 
* **10. Great leaders are willing to sacrifice the numbers to save the people. Poor leaders sacrifice the people to save the numbers**
  * File : [100-atoi.c](./100-atoi.c)
    * Required : A function that convert a string to an integer.
    * Expected Results : 
      * *The number in the string can be preceded by an infinite number of characters.*
      * *You need to take into account all the - and + signs before the number.*
      * *If there are no numbers in the string, the function must return 0.*
      * *You are not allowed to use long.*
      * *You are not allowed to declare new variables of “type” array.*
      * *You are not allowed to hard-code special values.*
      * *We will use the -fsanitize=signed-integer-overflow gcc flag to compile your code..*

💡*Fun Fact : 98 Battery St is located in San Francisco, CA*
   <br><br>
   
* **11. Don't hate the hacker, hate the code**
  * File : [101-keygen.c](./101-keygen.c)
    * Required : A program that generates random valid passwords for the program 101-crackme.*
    * Expected Results : 
      * *You don’t have to pass the betty-style tests (you still need to pass the betty-doc tests).*
      * *man srand, rand, time.*
      * *gdb and objdump can help.*

💡*Fun Fact : 98 Battery St is located in San Francisco, CA*
 <br><br>
