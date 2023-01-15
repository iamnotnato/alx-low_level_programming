<h3>Project : 0x02-functions_nested_loops</h3>
<br>

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
| `6-abs.c`                | `int _abs(int);`                                               |
| `7-print_last_digit.c`   | `int print_last_digit(int);`                                   |
| `8-24_hours.c`           | `void jack_bauer(void);`                                       |
| `9-times_table.c`        | `void times_table(void);`                                      |
| `10-add.c`               | `int add(int, int);`                                           |
| `11-print_to_98.c`       | `void print_to_98(int n);`                                     |
| `100-times_table.c`      | `void print_times_table(int n);`                               |
| `101-natural.c`          | `N/A`                                                          |
| `102-fibonacci.c`        | `N/A`                                                          |
| `103-fibonacci.c`        | `N/A`                                                          |
| `104-fibonacci.c`        | `N/A`                                                          |

<h4>List of Tasks:</h4>
<br>

* **0. _putchar**
  * File : [0-putchar.c](./0-putchar.c)
    * Required : A program that prints _putchar, followed by a new line.
    * Expected Results : The program should return 0
<br>

* **1. I sometimes suffer from insomnia. And when I can't fall asleep, I play what I call the alphabet game**
  * File : [1-alphabet.c](./1-alphabet.c)
    * Required : A function that prints the alphabet, in lowercase, followed by a new line.
    * Expected Results : You can only use _putchar twice in your code
    
> 💬 *Quote : Roz Chast "I sometimes suffer from insomnia. And when I can't fall asleep, I play what I call the alphabet game."*

<br>

* **2. 10 x alphabet**
  * File : [2-print_alphabet_x10.c](./2-print_alphabet_x10.c)
    * Required : A function that prints 10 times the alphabet, in lowercase, followed by a new line.
    * Expected Results : You can only use _putchar twice in your code    
<br>
 
* **3. islower**
  * File : [3-islower.c](./3-islower.c)
    * Required : A function that checks for lowercase character.
    * Expected Results : Returns 1 if c is lowercase. Returns 0 otherwise
<br>

* **4. isalpha**
  * File : [4-isalpha.c](./4-isalpha.c)
    * Required : A function that checks for alphabetic character.
    * Expected Results :  
      * *Returns 1 if c is a letter, lowercase or uppercase.*
      * *Returns 0 otherwise.*
<br>

* **5. Sign**
  * File : [5-sign.c](./5-sign.c)
    * Required : A function that prints the sign of a number.
    * Expected Results : 
      * *Returns 1 and prints + if n is greater than zero.*
      * *Returns 0 and prints 0 if n is zero.*
      * *Returns -1 and prints - if n is less than zero.*     
<br>

* **6. There is no such thing as absolute value in this world. You can only estimate what a thing is worth to you**
  * File : [6-abs.c](./6-abs.c)
    * Required : A function that computes the absolute value of an integer.
    
> 💬 *Quote : Charles Dudley Warner: There is no such thing as absolute value in this world. You can only estimate what a thing is worth to you.*

<br>

* **7. There are only 3 colors, 10 digits, and 7 notes; it's what we do with them that's important.**
  * File : [7-print_last_digit.c](./7-print_last_digit.c)
    * Required : A function that prints the last digit of a number.
    * Expected Results : Returns the value of the last digit.
    
> 💬 *Quote : There are only 3 colors, 10 digits, and 7 notes; it's what we do with them that's important. ~Jim Rohn*

<div align="left">
<img src="https://github.com/iamnotnato/alx-low_level_programming/blob/master/0x02-functions_nested_loops/images/important.jpg">
 </div>

<br>

* **8. I'm federal agent Jack Bauer, and today is the longest day of my life**
  * File : [8-24_hours.c](./8-24_hours.c)
    * Required : A function that prints every minute of the day of Jack Bauer, starting from 00:00 to 23:59.
    
> 💬 *Quote : A great memorable quote from the 24.*
> 
> *Day 1 show by Jack Bauer:*
> 
> *"I'm federal agent Jack Bauer. This is the longest day of my life."*

<br>

* **9. Learn your times table**
  * File : [9-times_table.c](./9-times_table.c)
    * Required : A function that prints the 9 times table, starting with 0.    
<br>

* **10. a + b**
  * File : [10-add.c](./10-add.c)
    * Required : A function that adds two integers and returns the result.    
<br>
    
* **11. 98 Battery Street, the OG**
  * File : [11-print_to_98.c](./11-print_to_98.c)
    * Required : The function returns a pointer to the result
    * Expected Results : 
      * *Numbers must be separated by a comma, followed by a space.*
      * *Numbers should be printed in order.*
      * *The first printed number should be the number passed to your function.*
      * *The last printed number should be 98*
      
> 💡*Fun Fact : 98 Battery St is located in San Francisco, CA*

<br>

* **12. The World looks like a multiplication-table, or a mathematical equation, which, turn it how you will, balances itself**
  * File : [100-times_table.c](./100-times_table.c)
    * Required : A function that prints the n times table, starting with 0.
    * Expected Results : If n is greater than 15 or less than 0 the function should not print anything.
    
> 💬 *Quote : Ralph Waldo Emerson : “The world looks like a multiplication-table, or a mathematical equation, which, turn it how you will, balances itself.”*

<br>

 * **13. Nature made the natural numbers; All else is the work of women**
   * File : [101-natural.c](./101-natural.c)
      * Required : A program that computes and prints the sum of all the multiples of 3 or 5 below 1024 (excluded), followed by a new line.
      
> 💬 *Quote : “Natural numbers were created by God, everything else is the work of men.”*
> 
> *Kronecker in a lecture for the Berliner Naturforscher Versammlung (1886).*
 
<br>

 * **14. In computer class, the first assignment was to write a program to print the first 100 Fibonacci numbers. Instead, I wrote a program that would steal passwords of students. My teacher gave me an A**
   * File : [102-fibonacci.c](./102-fibonacci.c)
        * Required : A program that prints the first 50 Fibonacci numbers, starting with 1 and 2, followed by a new line.
        * Expected Results : The numbers must be separated by comma, followed by a space.
        
> 💬 *Quote : I think it goes back to my high school days.*
>
> *In computer class, the first assignment was to write a program to print the first 100 Fibonacci numbers.* 
>
> *Instead, I wrote a program that would steal passwords of students. My teacher gave me an A.*
> 
> *– Kevin Mitnick*

<br>

* **15. Even Liber Abbaci**
  * File : [103-fibonacci.c](./103-fibonacci.c)
       * Required : A program that finds and prints the sum of the even-valued terms, followed by a new line.
       
> 💡*Fun Fact : Liber Abaci (also spelled as Liber Abbaci; "The Book of Calculation") is a historic 1202 Latin manuscript on arithmetic by Leonardo of Pisa, posthumously known as Fibonacci.*

<br>

* **16. In computer class, the first assignment was to write a program to print the first 100 Fibonacci numbers. Instead, I wrote a program that would steal passwords of students. My teacher gave me an A+**
  * File : [104-fibonacci.c](./104-fibonacci.c)
      * Required : A program that finds and prints the first 98 Fibonacci numbers, starting with 1 and 2, followed by a new line.
      * Expected Results : 
        * *Numbers must be separated by a comma, followed by a space*
        * *You are not allowed to use any other library (You can’t use GMP etc…)*
        * *You are not allowed to use long long, malloc, pointers, arrays/tables, or structures*
        * *You are not allowed to hard code any Fibonacci number (except for 1 and 2)*
        
> 💬 *Quote : I think it goes back to my high school days.* 
> 
> *In computer class, the first assignment was to write a program to print the first 100 Fibonacci numbers.*
> 
> *Instead, I wrote a program that would steal passwords of students. My teacher gave me an A.*
> 
> *– Kevin Mitnick*


<h4>Footnotes<h4>
The Fibonacci sequence is a series  of numbers in which a given number  
1:05
is the addition of the two numbers before it. So, if you start with 0, the next number  
1:10
will be 1, followed by 1, followed  by 2, followed by 3 and so on.  
1:16
(not to be spoken in audio) 0, 1,  1, 2, 3, 5, 8, 13, 21, 34, 55…..  
1:17
As you can see, every number in this series or  sequence is obtained by adding the two preceding  
1:22
numbers. This simple series of numbers is  referred to as the Fibonacci sequence for  
1:26
Fibonacci series. And individual numbers in this  sequence are often called Fibonacci numbers.  
1:28
Mathematically, the fibonacci sequence  is represented with this formula  
1:31
F(n) = F(n-1) + F(n-2) (not  to be spoken in audio)  
1:32
where n>1 You can use this expression  
1:36
to find any ‘n’th digit in the sequence. This fascinating sequence is widely associated  
1:42
with the mathematician, Leonardo Pisano, aka  Fibonacci. He hailed from the Republic of Pisa,  
1:49
which is why he is also known as Leonardo  of Pisa and was known as one of the most  
1:53
talented mathematicians of the Middle ages. At the time, Europeans were still using Roman  
1:59
numbers while Hindu-Arabic mathematicians  were using a different number system  
2:03
which was more robust and efficient. Fascinated by  the brilliance of the Hindu-Arabic numeral system,  
2:09
Fibonacci brought them to the western world in  1202 through his now-famous book Liber Abaci.  
2:15
In the book, he reviewed and compared the  Hindu-Arabic numeral system with other systems,  
2:20
such as Roman numerals, and described  how using the Hindu-Arabic system made  
2:24
calculations faster and easier. Although his book contains the  
2:28
earliest known description of the  Fibonacci sequence outside of India,  
2:32
it has been described in ancient Indian texts  by mathematicians as early as the 6th century.  
2:38
So, what makes the Fibonacci sequence so special? To the uninitiated, it may just seem like a series  
2:45
of numbers, but the Fibonacci sequence has been  discovered and rediscovered in various forms,  
2:50
not only in mathematics, but also  in nature and our everyday lives.  
2:56
There’s another exciting offshoot of the  Fibonacci sequence - the golden ratio.  
3:01
Suppose you have two quantities, A  and B, wherein A is greater than B.  
3:06
Now, add A and B and divide the sum by  A. If this ratio comes out to be equal  
3:12
to the ratio of A and B, then you’d  say that A and B have a golden ratio.  
3:17
It’s represented by the Greek letter phi ( ϕ ). Write down the Fibonacci sequence on a piece  
3:22
of paper and calculate the ratio using  this formula. You will notice that all  
3:26
Fibonacci numbers have the golden ratio,  the value of which is close to 1.618033…  
3:35
In geometry, when the golden ratio is applied  as a growth factor, you get a special kind of  
3:39
logarithmic spiral known as a golden spiral.  Simply put, a golden spiral gets wider by a  
3:46
factor of phi for every quarter turn it makes. You’ll find examples and manifestations  
3:51
of golden ratio and golden spirals in  countless places in your everyday life.  
3:56
Seashells are one of the most common examples  of the golden spiral in nature. Ocean waves,  
4:01
hurricanes, flower buds, snail shells, spider webs  are some of the many naturally-occurring examples. 
4:09
Many artists use the golden ratio or spiral  in their creative works. Legendary painter  
4:15
Salvador Dali explicitly used the ratio in his  masterpiece The Sacrament of the Last Supper.  
4:21
Architects often use the golden ratio in designing  buildings and massive other massive structures.  
4:26
Popular Swiss-French architect Le Corbusier,  who is widely acclaimed as one of the pioneers  
4:31
of modern architecture, explicitly used  the golden ratio in his Modulor system  
4:36
for the scale of architectural proportion. From snail shells to flowers, from bananas to  
4:38
the inside of the human ear, from large,  iconic buildings to galaxies, the golden  
4:44
ratio can be seen everywhere. This is probably  why it’s also known as the divine proportion.  
4:49
There are so many places where you can find the  golden ratio or the Fibonacci numbers that it’s  
4:53
impossible to list all of them in one place and  be done with it, because the list is ever-growing.  
4:58
What other examples of the Fibonacci sequence or  the golden ratio have you observed in your life?  
5:02
Tell us in the Comments below!</p>
