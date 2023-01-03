<h3>Project : C - 0x07-pointers_arrays_strings.</h3>

<h4>Notes: </h4>

* **ltrace is a program that simply runs the specified command until it exits.**
* **It intercepts and records the dynamic library calls which are called by the executed process and the signals which are received by that process.** 
* **It can also intercept and print the system calls executed by the program.**

<h4>Essentials:</h4>

* [main.h](./main.h) : A Header file containing prototypes for all functions written in the project.

<h4>Prototypes Required:</h4>

| File                 | Prototype                                                      |
| ---------------------| ---------------------------------------------------------------|
| `0. memset`         | `char *_memset(char *s, char b, unsigned int n);`                        |
| `1-memcpy.c`        | `char *_memcpy(char *dest, char *src, unsigned int n);`                |
| `2-strncpy.c`        | `char *_strncpy(char *dest, char *src, int n);`                |
| `3-strcmp.c`         | `int _strcmp(char *s1, char *s2);`                             |
| `4-rev_array.c`      | `void reverse_array(int *a, int n);`                           |
| `5-string_toupper.c` | `char *string_toupper(char *);`                                |
| `6-cap_string.c`     | `char *cap_string(char *);`                                    |
| `7-leet.c`           | `char *leet(char *);`                                          |
| `100-rot13.c`        | `char *rot13(char *);`                                         |
| `101-crackme_password` | `N/A`                        |

<h4>List of Tasks:</h4>

* **0. memset**
  * File : [0-memset.c](./0-memset.c)
    * Required : A function that fills memory with a constant byte.
    * Expected Results :
      *The _memset() function fills the first n bytes of the memory area pointed to by s with the constant byte b.
      *Returns a pointer to the memory area s.
 <br><br>

* **1. memcpy**
  * File : [1-memcpy.c](./1-memcpy.c)
    * Required : A function that copies memory area.
    * Expected Results :
      *The _memcpy() function copies n bytes from memory area src to memory area dest.
      *Returns a pointer to dest.
 <br><br>
  
* **2. strncpy**
  * File : [2-strncpy.c](./2-strncpy.c)
    * Required : Your function should work exactly like strncpy.
    * Expected Results : Your function should work exactly like strncpy.
 <br><br>
  
* **3. strcmp**
  * File : [3-strcmp.c](./3-strcmp.c)
    * Required : A function that compares two strings.
    * Expected Results : Your function should work exactly like strcmp.
 <br><br>

* **4. I am a kind of paranoid in reverse. I suspect people of plotting to make me happy**
  * File : [4-rev_array.c](./4-rev_array.c)
    * Required : A function that reverses the content of an array of integers.
    * Expected Results : Where n is the number of elements of the array.
 <br><br>
  
* **5. Always look up**
  * File : [5-string_toupper.c](./5-string_toupper.c)
    * Required : A function that changes all lowercase letters of a string to uppercase.
    * Expected Results : A function that changes all lowercase letters of a string to uppercase.
 <br><br>

* **6. Expect the best. Prepare for the worst. Capitalize on what comes**
  * File : [6-cap_string.c](./6-cap_string.c)
    * Required : Write a function that capitalizes all words of a string.
    * Expected Results : Separators of words: space, tabulation, new line, ,, ;, ., !, ?, ", (, ), {, and }
 <br><br>
  
* **7. Mozart composed his music not for the elite, but for everybody**
  * File : [7-leet.c](./7-leet.c)
    * Required : A function that encodes a string into 1337.
    * Expected Results : You are not allowed to use any ternary operation.
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
