## DESCRIPTION

Team project 

## PROTOTYPE

int _printf(const char *format, ...);

## TASKS

## 0. I'M NOT GOING ANYWHERE. YOU CAN PRINT THAT WHEREVER YOU WANT TO. I'M HERE AND I'M A SPUR FOR LIFE
		Write a function that produces output according to format.
	⁃	c : converts input into a character
	⁃	s : converts input into a string

## 1. EDUCATION IS WHEN YOU READ THE FINE PRINT. EXPERIENCE IS WHAT YOU GET IF YOU DON'T
		Handle the following conversion specifiers:
	⁃	d : converts input into a base 10 integer
	⁃	i : converts input into an integer

## 2. JUST BECAUSE IT'S IN PRINT DOESN'T MEAN IT'S THE GOSPEL
		Create a man page for your function

## 3. WITH A FACE LIKE MINE, I DO BETTER IN PRINT
		Handle the following conversion specifiers:
	⁃	b : the unsigned int argument is converted to binary

## 4. WHAT ONE HAS NOT EXPERIENCED, ONE WILL NEVER UNDERSTAND IN PRINT
		Handle the following conversion specifiers:
	⁃	u : converts the input into an unsigned integer
	⁃	o : converts the input into an octal number
	⁃	x : converts the input into a hexadecimal number
	⁃	X : converts the input into a hexadecimal number with capital letters

## 5. NOTHING IN FINE PRINT IS EVER GOOD NEWS
		Use a local buffer of 1024 chars in order to call write as little as possible.

## 6. MY WEAKNESS IS WEARING TOO MUCH LEOPARD PRINT
		Handle the following custom conversion specifier:
	⁃	S : prints the string
	⁃	Non printable characters (0 < ASCII value < 32 or >= 127) are printed this way: \x, followed by the ASCII code value in hexadecimal (upper case - always 2 characters)

## 7. HOW IS THE WORLD RULED AND LED TO WAR? DIPLOMATS LIE TO JOURNALISTS AND BELIEVE THESE LIES WHEN THEY SEE THEM IN PRINT
		Handle the following conversion specifier:
	⁃	p : int input is converted to a pointer address

## 8. THE BIG PRINT GIVES AND THE SMALL PRINT TAKES AWAY
		Handle the following flag characters for non-custom conversion specifiers:
	⁃	+ : adds a + in front of signed positive numbers and a - in front of signed negative numbers
	⁃	space : same as +, but adds a space (is overwritten by +)
	⁃	# : adds a 0 in front of octal conversions that don't begin with one, and a 0x or 0X for x or X conversions

## [9. SARCASM IS LOST IN PRINT]
		Handle the following length modifiers for non-custom conversion specifiers:
	⁃	l : converts d, i, u, o, x, X conversions in short signed or unsigned ints
	⁃	h : converts d, i, u, o, x, X conversions in long signed or unsigned ints

## [10. PRINT SOME MONEY AND GIVE IT TO US FOR THE RAIN FORESTS]
		Handle the field width for non-custom conversion specifiers.

## [11. THE NEGATIVE IS THE EQUIVALENT OF THE COMPOSER'S SCORE, AND THE PRINT THE PERFORMANCE]
		Handle the precision for non-custom conversion specifiers.

## [12. IT'S DEPRESSING WHEN YOU'RE STILL AROUND AND YOUR ALBUMS ARE OUT OF PRINT]
		Handle the 0 flag character for non-custom conversion specifiers.

## [13. EVERY TIME THAT I WANTED TO GIVE UP, IF I SAW AN INTERESTING TEXTILE, PRINT WHAT EVER, SUDDENLY I WOULD SEE A COLLECTION]
		Handle the - flag character for non-custom conversion specifiers.

## 14. PRINT IS THE SHARPEST AND THE STRONGEST WEAPON OF OUR PARTY
		Handle the following custom conversion specifier:
	⁃	r : prints the reversed string

## 15. THE FLOOD OF PRINT HAS TURNED READING INTO A PROCESS OF GULPING RATHER THAN SAVORING
		Handle the following custom conversion specifier:
	⁃	R : prints the rot13'ed string

## [16. * ]
		All the above options work well together.

#**Description**
Team project 
#**Prototype**
int _printf(const char *format, ...);
#**Tasks**
## 0. I'M NOT GOING ANYWHERE. YOU CAN PRINT THAT WHEREVER YOU WANT TO. I'M HERE AND I'M A SPUR FOR LIFE
		Write a function that produces output according to format.
	⁃	c : converts input into a character
	⁃	s : converts input into a string

## 1. EDUCATION IS WHEN YOU READ THE FINE PRINT. EXPERIENCE IS WHAT YOU GET IF YOU DON'T
		Handle the following conversion specifiers:
	⁃	d : converts input into a base 10 integer
	⁃	i : converts input into an integer

## 2. JUST BECAUSE IT'S IN PRINT DOESN'T MEAN IT'S THE GOSPEL
		Create a man page for your function

## 3. WITH A FACE LIKE MINE, I DO BETTER IN PRINT
		Handle the following conversion specifiers:
	⁃	b : the unsigned int argument is converted to binary

## 4. WHAT ONE HAS NOT EXPERIENCED, ONE WILL NEVER UNDERSTAND IN PRINT
		Handle the following conversion specifiers:
	⁃	u : converts the input into an unsigned integer
	⁃	o : converts the input into an octal number
	⁃	x : converts the input into a hexadecimal number
	⁃	X : converts the input into a hexadecimal number with capital letters

## 5. NOTHING IN FINE PRINT IS EVER GOOD NEWS
		Use a local buffer of 1024 chars in order to call write as little as possible.

## 6. MY WEAKNESS IS WEARING TOO MUCH LEOPARD PRINT
		Handle the following custom conversion specifier:
	⁃	S : prints the string
	⁃	Non printable characters (0 < ASCII value < 32 or >= 127) are printed this way: \x, followed by the ASCII code value in hexadecimal (upper case - always 2 characters)

## 7. HOW IS THE WORLD RULED AND LED TO WAR? DIPLOMATS LIE TO JOURNALISTS AND BELIEVE THESE LIES WHEN THEY SEE THEM IN PRINT
		Handle the following conversion specifier:
	⁃	p : int input is converted to a pointer address

## 8. THE BIG PRINT GIVES AND THE SMALL PRINT TAKES AWAY
		Handle the following flag characters for non-custom conversion specifiers:
	⁃	+ : adds a + in front of signed positive numbers and a - in front of signed negative numbers
	⁃	space : same as +, but adds a space (is overwritten by +)
	⁃	# : adds a 0 in front of octal conversions that don't begin with one, and a 0x or 0X for x or X conversions

## [9. SARCASM IS LOST IN PRINT]
		Handle the following length modifiers for non-custom conversion specifiers:
	⁃	l : converts d, i, u, o, x, X conversions in short signed or unsigned ints
	⁃	h : converts d, i, u, o, x, X conversions in long signed or unsigned ints

## [10. PRINT SOME MONEY AND GIVE IT TO US FOR THE RAIN FORESTS]
		Handle the field width for non-custom conversion specifiers.

## [11. THE NEGATIVE IS THE EQUIVALENT OF THE COMPOSER'S SCORE, AND THE PRINT THE PERFORMANCE]
		Handle the precision for non-custom conversion specifiers.

## [12. IT'S DEPRESSING WHEN YOU'RE STILL AROUND AND YOUR ALBUMS ARE OUT OF PRINT]
		Handle the 0 flag character for non-custom conversion specifiers.

## [13. EVERY TIME THAT I WANTED TO GIVE UP, IF I SAW AN INTERESTING TEXTILE, PRINT WHAT EVER, SUDDENLY I WOULD SEE A COLLECTION]
		Handle the - flag character for non-custom conversion specifiers.

## 14. PRINT IS THE SHARPEST AND THE STRONGEST WEAPON OF OUR PARTY
		Handle the following custom conversion specifier:
	⁃	r : prints the reversed string

## 15. THE FLOOD OF PRINT HAS TURNED READING INTO A PROCESS OF GULPING RATHER THAN SAVORING
		Handle the following custom conversion specifier:
	⁃	R : prints the rot13'ed string

## [16. * ]
		All the above options work well together.


