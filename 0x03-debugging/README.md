> 🚧 **Project :** 0x03-debugging

<br>

> 📝 **Summary:**

> These are projects that helped me understand The C Programming Language.

<br>

> ⌨️ **Languages Used :**

<table>
  <tr>
    <td><img alt="medium" src="https://img.shields.io/badge/C-00599C?style=for-the-badge&logo=c&logoColor=white"></td>
    <td><img alt="medium" src="https://img.shields.io/badge/Markdown-000000?style=for-the-badge&logo=markdown&logoColor=white"></td>
  </tr>
</table>

<br>

> 🖥️ **Integrated Development Environment:**

<table>
  <tr>
<td><img alt="medium" src="https://img.shields.io/badge/Emacs-%237F5AB6.svg?&style=for-the-badge&logo=gnu-emacs&logoColor=white"></td>
  </tr>
</table>

<br>

> 🌟 **Essentials:**

> [main.h](./main.h) : A Header file containing prototypes for all functions written in the project.

<br>

> ✒️ **List of Tasks:**
<br>

> 📁 **0. Multiple mains**
> 
> 💾 **File** : [0-main.c](./0-main.c)
> 
> 💾 **File** : [main.h](./main.h)
> 
> 📑 **Task :** This file must test that the function positive_or_negative() gives the correct output when given a case of 0.
> 
> 📝 **Required :**  You are not allowed to add or remove lines of code, you may change only one line in this task.

<br>

> ⚙️ Compiler:

```
$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 positive_or_negative.c 0-main.c -o 0-main
```

> ✔️ Sample test cases :

```
$ ./0-main
0 is zero
$ wc -l 0-main.c
16 1-main.c
```

<br>

> 📁 **1. Like, comment, subscribe**
> 💾 **File** : [1-main.c](./1-main.c)
> 📑 **Task :** Comment out (don’t delete it!) the part of the code that is causing the output to go into an infinite loop.
    * Expected Results : Don’t add or remove any lines of code, as we will be checking your line count. You are only allowed to comment out existing code.

> 📚 *Book : Like, Comment, Subscribe: Inside YouTube's Chaotic Rise to World Domination is a book by Mark Bergen*

<br>
    
> 📁 **2. 0 > 972?**
> 💾 **File** : [2-largest_number.c](./2-largest_number.c)
> 💾 **File** :  [main.h](./main.h)
> 📑 **Task :**This program prints the largest of three integers.
    * Expected Results : Fix the code in 2-largest_number.c so that it correctly prints out the largest of three numbers, no matter the case.
    
> 💡*Fun Fact : Pill with imprint b 972 1 0 is Blue, Elliptical/Oval and has been identified as Amphetamine and Dextroamphetamine 10 mg.*

<br>

> 📁 **3. Leap year**
> 💾 **File** :  [3-print_remaining_days.c](./3-print_remaining_days.c)
> 💾 **File** :  [main.h](./main.h)
> 📑 **Task :** This program converts a date to the day of year and determines how many days are left in the year, taking leap year into consideration.
    * Expected Results : Fix the print_remaining_days() function so that the output works correctly for all dates and all leap years.
