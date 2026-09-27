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

Concepts used: printf statements(printf("");, scanf statement(scannf("")), escape sequences (\\n for a new line) and string literals. Arithmetic symbols like \*(product), format specifiers(%f for floats) and \& to store the read value into its variable

How it works: It’ll ask for a value from the user, read it, and store it in its variable. Then it'll compute the amount for needs by getting the product of income by the percentage of needs(50% or 0.50), which is income \* 0.50. The same goes for wants and savings, and all the values are stored in their variables. The program finally prints out the values to the user. 

Example run: 

Enter monthly income (UGX): 1000000

Needs: UGX 500000.00

Wants: UGX 300000.00

Savings: UGX 200000.00



\## Exercise 3 – Decisions

Source: Deitel \& Deitel, C How to Program, 9th Edition, Chapter 2, Exercise 2.18

What the program does: The program prompts the user to enter their average score and reads the input. Then it checks if the score is greater than or equal to 50; if true, then it prints out a statement to the user informing them they are promoted. If not true, it prints a statement telling them they aren't promoted.

Concepts used: if/else statements, printf statements(printf("");, scanf statement(scanf("")), escape sequences (\\n for a new line) and string literals, format specifiers(%f for floats) and \& to store the read value into its variable

How it works: It’ll ask for a value from the user, read it, and store it in its variable. Then it'll check if the value is greater than or equal to 50; if yes, it'll print out to the user that they have attained the required standard and are promoted to the next class. If false, it'll print out the other printf statement telling them they didn’t attain the required standard and are not promoted. 

Example run: 

Enter average score (%): 60

You've attained the required standard and are promoted to the next class.



Enter average score (%): 45.9

You have not attained the required standard for promotion.





\## Exercise 4 – Basic loop

Source: Deitel \& Deitel, C How to Program, 9th Edition, Chapter 3, Exercise 3.5

What the program does: The program prints out numbers from 100 to 200 using a for loop on a single line, whereby the numbers are spaced from the first to the last.

Concepts used: initialisation, for loop, printf statement(printf(“”);, escape sequence(\\n for a new line) and string literals, format specifiers(%d for integers), i++ incrementor, a condition(i <= 200)

How it works: The loop will start with an initial value, which is 100. The body(the printf statement) will run when the condition is true, that is (i <=200). It'll also not run when the condition is not met. The loop will run once for each value of i from 100 to 200.

Example run:

100 101 102 103 104 105 106 107 108 109 110 111 112 113 114 115 116 117 118 119 120 121 122 123 124 125 126 127 128 129 130 131 132 133 134 135 136 137 138 139 140 141 142 143 144 145 146 147 148 149 150 151 152 153 154 155 156 157 158 159 160 161 162 163 164 165 166 167 168 169 170 171 172 173 174 175 176 177 178 179 180 181 182 183 184 185 186 187 188 189 190 191 192 193 194 195 196 197 198 199 200





\## Exercise 5 – Loop calculation

Source: Deitel \& Deitel, C How to Program, 9th Edition, Chapter 3, Exercise 3.12

What the program does: The program uses a for loop to accumulate the sum of the first five squares. In each loop iteration, it calculates the square, prints it, and updates the total until the condition is no longer true. Then, finally, it will print out the sum of the numbers.

Concepts used: initialization, for loop, printf statement(printf(“”);, escape sequence(\\n for a new line) and string literals, format specifiers(%d for integers), i++ incrementor, a condition(i <= 5), total addition(total +=)

How it works: The loop will start with an initial value, which is 1. The body will run when the condition is true, that is (i <=5). It'll also not run when the condition is not met. The loop will run once for each value of i from 1 to 5. For i = 1, it'll calculate the square using the formula i\*i, print out the value of the square, and add that value to the total, which was initialized outside the loop. The value of total will always be zero at each iteration, and the old value will be erased if it is declared inside the loop.

Example run:

Square1: 1

Square2: 4

Square3: 9

Square4: 16

Square5: 25

The sum of the first five squares is 55



