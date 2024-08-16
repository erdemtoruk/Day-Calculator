# Day-Calculator

This porject contains a C program that calculates the day of week for a given date.<br>
The program checks whether the input date is valid and then determines the corresponding day of the week using a custom algorithm.

## Features

**Date Validation:** The program validates whether the entered date is correct, considering leap years and month lengths.<br>
**Day Calculation:** Given a valid date, the program calculates which day of the week it corresponds to.

## How It Works

The program works in the following steps:

1. **User Input:**
   - The program prompts the user to enter a date by providing the day, month, and year separately.<br>
   - For example, 16 08 2024 for August 16, 2024.

2. **Date Validation:** 
   - The `validate_date` function checks if the entered date is valid by ensuring that the day, month, and year values are within the appropriate ranges.<br>
   - It also checks whether the year is a leap year.

3. **Day Calculation:**
   - The `calculate_day` function calculates the day of the week by determining the total number of days passed since a reference date.<br>
   - It then maps this total to the corresponding day of the week, using an array of strings to represent the days.

## Acknowledgements

I would like to express my gratitude to the **Ahmet Yasir Göktepe** and **Emir Berber** for their support and contributions to this project.<br>
Thank you for your valuable input and assistance in making this project possible.