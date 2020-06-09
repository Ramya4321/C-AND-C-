/*
Take the last two digits of the year.
Divide by 4, discarding any fraction.
Add the day of the month.
Add the month's key value: JFM AMJ JAS OND 144 025 036 146
Subtract 1 for January or February of a leap year.
For a Gregorian date, add 0 for 1900's, 6 for 2000's, 4 for 1700's, 
  2 for 1800's; for other years, add or subtract multiples of 400.
For a Julian date, add 1 for 1700's, and 1 for every additional century you go back.
Add the last two digits of the year.
Divide by 7 and take the remainder.
*/

