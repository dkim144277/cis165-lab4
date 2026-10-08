# cis165-lab4
# how to run
To run `diamond` and `game_time.cpp`, download the files from the repository to your computer. Then, using onlinegdb.com, click on the "Upload File" at the top left of the programming window, and upload the file you downloaded. Set the language using the dropdown to C++ 17. Repeat for the other program you downloaded.
# plans for programs
## average.cpp
1. Define the 5 numbers as constants
2. Create sum which is all 5 numbers added together and average which is sum / 5
3. Print sum and average with labels
## ocean_levels.cpp
1. Make a constant for the rise level (1.5)
2. Make 3 constants for the different years
3. Create and store variables for each product of the rise level times the years elapsed
4. Print all 3 variables with labels in a cout function
# test runs
## average.cpp
The average of 23, 32, 37, 24, and 33 should be 29.8, with the sum of the numbers being 149  
Upon running the program the sum is displayed as 149 and the average is displayed as 29.8 as expected  

changed values to 1, 2, 3, 4, and 6. The sum is 16 and the average should be 3.2  
upon running the program, it displays the sum as 16 and the average as 3.2 just as expected
## ocean_levels.cpp
With a constant rise of 1.5 the ocean level should be these for the following years:  
5. 7.5  
7. 10.5  
10. 15  
After running the program, the correct values above were displayed.  

When changing the rise level to 2.0, the program should output 10, 14, and 20 for the rise levels.  
After running the program, 10.0, 14.0, and 20.0 were displayed which matches the expectation.
# code explanations
## average.cpp
1. Doubles should be used because finding the mean of a set of numbers often results in results with decimals, and using ints would result in inaccurate averages.
2. The `sum` variable adds the 5 numbers together to get 149. 149 is then sent to an equation where a new variable `average` is equal to `sum / 5`.
3. We divide the sum instead of just the 5th number because to find to mean of a set of numbers you need to add them all together and then divide by the number of numbers in the set.
## oceanlevels.cpp
1. The rise level is defined as 1.5, and the 3 year values are set to 5, 7, and 10. When calculating the rise for each year, the rise level is multiplied by the value of the year (5, 7 or 10).
2. The rise level itself is a good candidate for a constant because changing the constant will result in completely different results, and the rise level itself isn't modified throughout the program.
3. The assignment requires calculations before `cout` because doing the calculations during the `cout` process will clutter the code and make it very hard to read and trace.
