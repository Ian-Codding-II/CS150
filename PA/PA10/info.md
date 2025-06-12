# PA10

## Learner Objectives
At the conclusion of this programming assignment, participants should be able to:

* Search the vector of structures
* Sort the vector of structures

## Overview and Requirements
 In this assignment, you will need to read a file `WorldSeriesWinners.txt`. Download `WorldSeriesWinners.txt` into a vector of structures.

This file contains a chronological list of World Series' winning teams from 1950 through 2014. The first line in the file is the name of the team that won in 1950, and the last line is the name of the team that won in 2014. (Note that the World Series was not played in 1994) .
The structure will have two member variables teamName and numberOfWins.

In Lab 7, you read this file into the array. In this assignment, you will read the file into a vector. After reading each name, you will check if the name exists in the vector. If it does, you will update the number of wins for the team. If it does not, you will push a new object at the end of the vector. 
Display the vector.
Sort the vector in descending order. You may use any algorithm you choose.
Display the vector again.
Use the multi-file structure for this assignment.

Example of output
````
   Team name             Number of wins
-------------------------------------------
New York Yankees              15
New York Giants               1
Brooklyn Dodgers              1
Milwaukee Braves              1
Los Angeles Dodgers           5
Pittsburgh Pirates            3
St. Louis Cardinals           5
Baltimore Orioles             3
Detroit Tigers                2
New York Mets                 2
Oakland Athletics             4
Cincinnati Reds               3
Philadelphia Phillies         2
Kansas City Royals            1
Minnesota Twins               2
Toronto Blue Jays             2
Atlanta Braves                1
Florida Marlins               2
Arizona Diamondbacks          1
Anaheim Angels                1
Boston Red Sox                3
Chicago White Sox             1
San Francisco Giants          3

################Sorted vector################

   Team name             Number of wins
-------------------------------------------
New York Yankees              15
Los Angeles Dodgers           5
St. Louis Cardinals           5
Oakland Athletics             4
Pittsburgh Pirates            3
Baltimore Orioles             3
Cincinnati Reds               3
Boston Red Sox                3
San Francisco Giants          3
Detroit Tigers                2
New York Mets                 2
Philadelphia Phillies         2
Minnesota Twins               2
Toronto Blue Jays             2
Florida Marlins               2
New York Giants               1
Brooklyn Dodgers              1
Milwaukee Braves              1
Kansas City Royals            1
Atlanta Braves                1
Arizona Diamondbacks          1
Anaheim Angels                1
Chicago White Sox             1
````
### Submitting Assignments
* It is VERY IMPORTANT that besides pushing the code to GitHub that you still submit the GitHub URL of this lab assignment in Canvas. This allows the instructor to be notified of your final submission.
> **_NOTE: By submitting your code to be graded, you are stating that your submission does not violate the Academic Integrity Policy outlined in the syllabus._**
