#Calendar Generator in C

A lightweight C program that generates and displays a structured monthly calendar based on user input.

## Features

- *Customizable Month Structure*: Accepts the exact number of days in the month (e.g., 28, 30, 31).
- *Flexible Start Days*: Allows you to specify which day of the week the month begins on using a simple standard numeric scale (1 = Sunday, 7 = Saturday).
- *Formatted Alignment*: Displays a clean grid layout for the calendar output.

## How It Works

The program takes two primary inputs:
1. *Total Days*: Number of days in the target month (1–31).
2. *Starting Day Code*: Day of the week the 1st falls on:
   - 1: Sunday
   - 2: Monday
   - 3: Tuesday
   - 4: Wednesday
   - 5: Thursday
   - 6: Friday
   - 7: Saturday
  
#OUTPUT EXAMPLE

Enter number of days in the month: 30
Enter starting day of the month (1 = Sun, 7 = Sat): 5     /*assume first day of the month is thursday*/

 Su Mo Tu We Th Fr Sa
              5  6  7
  8  9 10 11 12 13 14
 15 16 17 18 19 20 21
 22 23 24 25 26 27 28
 29 30

 thanks to read :)
