<h3>Project : C - 0x07-pointers_arrays_strings.</h3>

<h4>Notes: </h4>

* **ltrace is a program that simply runs the specified command until it exits.**
* **It intercepts and records the dynamic library calls which are called by the executed process and the signals which are received by that process.** 
* **It can also intercept and print the system calls executed by the program.**

<h4>Essentials:</h4>

* [main.h](./main.h) : A Header file containing prototypes for all functions written in the project.
* [_putchar.c](./_putchar.c) : A C function that writes a character to `stdout`.

<h4>Prototypes Required:</h4>

| File                 | Prototype                                                      |
| ---------------------| ---------------------------------------------------------------|
| `0. memset`         | `char *_memset(char *s, char b, unsigned int n);`                        |
| `1-memcpy.c`        | `char *_memcpy(char *dest, char *src, unsigned int n);`                |
| `2-strchr.c`        | `char *_strchr(char *s, char c);`                |
| `3-strspn.c`         | `unsigned int _strspn(char *s, char *accept);`                             |
| `4-strpbrk.c`      | `char *_strpbrk(char *s, char *accept);`                           |
| `5-strstr.c` | `char *_strstr(char *haystack, char *needle);`                                |
| `7-print_chessboard.c`     | `void print_chessboard(char (*a)[8]);`                                    |
| `7-leet.c`           | `char *leet(char *);`                                          |
| `100-rot13.c`        | `char *rot13(char *);`                                         |
| `101-crackme_password` | `N/A`                        |

<h4>List of Tasks:</h4>

* **0. memset**
  * File : [0-memset.c](./0-memset.c)
    * Required : A function that fills memory with a constant byte.
    * Expected Results:
      * **The _memset() function fills the first n bytes of the memory area pointed to by s with the constant byte b.**
      * **Returns a pointer to the memory area s.**
 <br><br>

* **1. memcpy**
  * File : [1-memcpy.c](./1-memcpy.c)
    * Required : A function that copies memory area.
    * Expected Results :
      * **The _memcpy() function copies n bytes from memory area src to memory area dest.**
      * **Returns a pointer to dest.**
 <br><br>
  
* **2. strchr**
  * File : [2-strchr.c](./2-strchr.c)
    * Required : A function that locates a character in a string.
    * Expected Results : Returns a pointer to the first occurrence of the character c in the string s, or NULL if the character is not found
 <br><br>
  
* **3. strspn**
  * File : [3-strspn.c](./3-strspn.c)
    * Required : A function that gets the length of a prefix substring.
    * Expected Results : Returns the number of bytes in the initial segment of s which consist only of bytes from accept
 <br><br>

* **4. strpbrk**
  * File : [4-strpbrk.c](./4-strpbrk.c)
    * Required : A function that searches a string for any of a set of bytes.
    * Expected Results : 
      * **The _strpbrk() function locates the first occurrence in the string s of any of the bytes in the string accept.**
      * **Returns a pointer to the byte in s that matches one of the bytes in accept, or NULL if no such byte is found**
 <br><br>
  
* **5. strstr**
  * File : [5-strstr.c](./5-strstr.c)
    * Required : A function that locates a substring.
    * Expected Results : 
      * **The _strstr() function finds the first occurrence of the substring needle in the string haystack.**
      * **The terminating null bytes (\0) are not compared.**
      * **Returns a pointer to the beginning of the located substring, or NULL if the substring is not found.**
 <br><br>

* **6. Chess is mental torture**
  * File : [7-print_chessboard.c](./7-print_chessboard.c)
    * Required : A function that prints the chessboard.

💡*Fun Fact : “Chess is mental torture” is what Garry Kasparov said in the context of his 1990s match vs Nigel Short.*
 <br><br>

* **7. The line of life is a ragged diagonal between duty and desire**
  * File : [8-print_diagsums.c](./8-print_diagsums.c)
    * Required : A function that prints the sum of the two diagonals of a square matrix of integers.
    * Note : 
      * **The following example we are casting an int[][] into an int*.**
      * **This is not something you should do.** 
      * **The goal here is to make sure you understand how an array of array is stored in memory.**

💡*Fun Fact : Quote by William R. Alger: The line of life is a ragged diagonal between duty and desire.*
 <br><br>

* **8. rot13**
  * File : [100-rot13.c](./100-rot13.c)
    * Required : A function that encodes a string using rot13.
    * Expected Results : You can only use if statement once in your code.
 <br><br>
  
* **9. My primary goal of hacking was the intellectual curiosity, the seduction of adventure**
  * File : [101-crackme_password](./101-crackme_password)
    * Required : A file that contains the password for the crackme2 executable.
    * Expected Results : Your file should contain the exact password, no new line, no extra space.
  
💡*Fun Fact : Quote by Kevin Mitnick: My primary goal of hacking was the intellectual curiosity, the seduction of adventure.*
 <br><br>
