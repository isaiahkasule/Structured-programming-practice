# Structured-programming-practice

This contains eight C programs demonstrating core structured programming concepts like output, input/decisions/loops, decisions, and loops for CSC1101, UCU.



\## Exercise 1 – Basic Output

Source: Deitel \& Deitel, C How to Program, 9th Edition, Chapter 2, Exercise 2.9(a).

What the program does: The program prints out a fixed decorative bordered box using extended ASCII characters.

Concepts used: printf statements(printf(“”);, escape sequences (\\xNN hex character codes) and string literals

How it works: row 1 has a left top corner followed by horizontal lines and then a top right corner. Rows 2 to 5 have vertical lines at the end with the shaded texture in between. Row 6 has a bottom-left corner followed by horizontal lines and finally a bottom-right corner

Example run: 

This is a block with a shaded texture.

╔════╗

║▓▓▓▓║

║▓▓▓▓║

║▓▓▓▓║

║▓▓▓▓║

╚════╝



\## Exercise 2 – Input-Process-Output

Source: Deitel \& Deitel, C How to Program, 9th Edition, Chapter 2, Exercise 2.28

What the program does: The program prompts a user to enter their monthly income in UGX and reads the input from the user. Then it makes calculations using the 50%, 30%, and 20% rule to get the percentages for needs, wants, and savings, respectively. After getting the values, it prints out the amount for needs, wants, and savings.

Concepts used: printf statements(printf("");, scanf statement(scannf("")), escape sequences (\\n for a new line) and string literals. Arithmetic symbols like \*(product) and format specifiers(%f for floats) and \& to store the read value into its variable

How it works: It’ll ask for a value from the user, read it, and store it in its variable. Then it'll compute the amount for needs by getting the product of income by the percentage of needs(50% or 0.50), which is income \* 0.50. The same goes for wants and savings, and all the values are stored in their variables. The program finally prints out the values according to the user. 

Example run: 

Enter monthly income (UGX): 1000000

Needs: UGX 500000.00

Wants: UGX 300000.00

Savings: UGX 200000.00

