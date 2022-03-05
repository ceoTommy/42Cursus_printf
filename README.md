# ft_printf
*Language: C*

'int ft_printf(const char \*, ...)`
## Functionality
Allows you to print varibles and strings into the terminal, it returns the number of characters printed. 
`ft_printf` str parameter will contain specifiers (seen in table below) that tell ft_printf what variables are being taken in as parameters.

| Variable Type | Specifier | Description                               |
|---------------|-----------|-------------------------------------------|
| char          | %c        | single character                          |
| string        | %s        | string (char \*)                          |
| int           | %d or %i  | ints value                                |
| unsigned int  | %u        | unsigned int's value                      |
| hexadecimal   | %x or %X  | number as hex value (lower or upper case) |

#### Example
```
#include "ft_printf.h"

char  *name = "Tommy";
int   age = 20;

ft_printf("%s is %d years old!", name, age);
```
```
Terminal Output: 
Tommy is 20 years old!
```
## Use
1. Clone the project into your working directory
2. `#include "ft_printf.h` as a header in your C program
3. Use the ft_printf function in your program
#### Makefile
- `make all` makes the **libftprintf.a** file
- `make libftprintf.a` makes the **libftprintf.a** file
- `make clean` removes all .o files
- `make fclean` removes all .o & .a files
- `make re` cleans then recompiles all

## Updates
ft_printf is now included in my libft

## 42_GRADE
🟢 PASSED WITH 100%
🟢 No Bonus Questions
