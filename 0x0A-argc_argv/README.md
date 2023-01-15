<h3>Project : 0x0A. C - argc, argv</h3>
<br>

<h4>Essentials:</h4>

* [main.h](./main.h) : A Header file containing prototypes for all functions written in the project.
* [_putchar.c](./_putchar.c) : A C function that writes a character to `stdout`.

<h4>List of Tasks:</h4>
<br>

* **0. It ain't what they call you, it's what you answer to**
  * File : [0-whatsmyname.c](./0-whatsmyname.c)
    * Required : A program that prints its name, followed by a new line.
    * Expected Results : 
      * **If you rename the program, it will print the new name, without having to compile it again**
      * **You should not remove the path before the name of the program**

<br>

> 💬 *Quote :*
> 
> **It ain't what they call you, it's what you answer to.**
>
> **W. C. Fields**

<br>

* **1. Silence is argument carried out by other means**
  * File : [1-args.c](./1-args.c)
    * Required : A program that prints the number of arguments passed into it.
    * Expected Results : Your program should print a number, followed by a new line.

<br>
   
> 💬 *Quote :*
> 
> **Silence is argument carried on by other means.**
>
> **Che Guevara.**

<br>
  
* **2. The best argument against democracy is a five-minute conversation with the average voter**
  * File : [2-args.c](./2-args.c)
    * Required : A program that prints all arguments it receives.
    * Expected Results : 
      * **All arguments should be printed, including the first one**
      * **Only print one argument per line, ending with a new line**

<br>

> 💬 *Quote :*
> 
> **This quotation is usually attributed to Winston Churchill but there is no evidence he ever said it.**

<br>
  
* **3. Neither irony nor sarcasm is argument**
  * File : [3-mul.c](./3-mul.c)
    * Required : A program that multiplies two numbers.
    * Expected Results : 
      * **Your program should print the result of the multiplication, followed by a new line**
      * **You can assume that the two numbers and result of the multiplication can be stored in an integer**
      * **If the program does not receive two arguments,**
        * **Your program should print Error,followed by a new line, and return 1**

<br>

> 💬 *Quote :*
> 
> **Neither irony or sarcasm is argument.**
>
> **Samuel Butler**

<br>

* **4. To infinity and beyond**
  * File : [4-add.c](./4-add.c)
    * Required : A program that adds positive numbers.
    * Expected Results : 
      * **Print the result, followed by a new line**
      * **If no number is passed to the program, print 0, followed by a new line**
      * **You can assume that numbers and the addition of all the numbers can be stored in an int**
      * **If one of the number contains symbols that are not digits**
        * **Your program should print Error, followed by a new line, and return 1**

<br>

> 💬 *Quote :*
> 
> **This line is spoken by Buzz Lightyear in the movie Toy Story (1995).**
> 
> **Buzz considers this his catchphrase…which it is, except that there happen to be a million Buzzes in toy stores around the world.**


<br>
  
📁 **5. Minimal Number of Coins for Change**

<br>

> 💾 **File** : [100-change.c](./100-change.c)

<br>

> 📑 **Task :** A program that prints the minimum number of coins to make change for an amount of money.

<br>

> 📝 **Required :**
       
- [x] Usage: ./change cents**
- [x] Where cents is the amount of cents you need to give back**
- [x] You should use atoi to parse the parameter passed to your program**
- [x] If the number passed as the argument is negative, print 0, followed by a new line**
- [x] You can use an unlimited number of coins of values 25, 10, 5, 2, and 1 cent**
- [x] If the number of arguments passed to your program is not exactly 1**
      - [x] Your program should print Error, followed by a new line, and return 1**


|  |
| ----------- |
| Usage: ./change cents | 
| Where cents is the amount of cents you need to give back |
| You should use atoi to parse the parameter passed to your program | 
| If the number passed as the argument is negative, print 0, followed by a new line |
| You can use an unlimited number of coins of values 25, 10, 5, 2, and 1 cent | 
| If the number of arguments passed to your program is not exactly 1 |
|Your program should print Error, followed by a new line, and return 1 |


<br>

> ⚙️ Compiler:

```
$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 100-change.c -o change
```

<br>

> ✔️ Sample test cases :

```
$ ./change 
Error
$ ./change 10
1
$ ./change 100
4
$ ./change 101
5
$ ./change 13
3
$
```

