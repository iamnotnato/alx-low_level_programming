<h3>Project : 0x09-static_libraries</h3>
<br

<h4>Essentials:</h4>

* [main.h](./main.h) : A Header file containing prototypes for all functions written in the project.
* [_putchar.c](./_putchar.c) : A C function that writes a character to `stdout`.

<h4>List of Tasks:</h4>
<br

* **0. A library is not a luxury but one of the necessities of life**
  * File : 
    * **[libmy.a](./libmy.a)**
    * **[main.h](./main.h)**
    * **[main.c](./main.c)**
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

<br>
    
> 💬 *Quote :*
>
> *Henry Ward Beecher, American social reformer (1813-1887) said,* 
>
> **"A library is not a luxury but one of the necessities of life."**

<br>

* **1. Without libraries what have we? We have no past and no future**
  * File : [create_static_lib.sh](./create_static_lib.sh)
    * Required : A script called create_static_lib.sh that creates a static library called liball.a from all the .c files that are in the current directory.
   
> 💬 *Quote :* 
> 
> *Ray Bradbury once said,*
> 
> **“Without Libraries what have we? We have no past and no future.”**
