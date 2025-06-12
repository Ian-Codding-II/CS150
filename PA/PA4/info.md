# PA4: Conditionals

## Learner Objectives
At the conclusion of this programming assignment, participants should be able to:
* Evaluate Boolean expressions
* Apply relational and logical operators
* Implement `if` statements

## Prerequisites
Before starting this programming assignment, participants should be able to:
* Get input from the user
* Display output to the user
* Perform arithmetic

## Acknowledgements
Content used in this assignment is based upon information in the following sources:
* This programming assignment is adapted from Dr. Gina Sprint's Computer Science I class at Gonzaga University

## Overview and Requirements
Write an **"Are you a fan?"** quiz program. The program will quiz the user on a topic of your choosing (**keep the topic appropriate!!!**). For quiz ideas, check out [this website](http://www.allthetests.com/fan-quizzes-tests-Fantests.php).

> **Note**: Please cite all the sources you use in your code. 

## Program Details
The quiz program MUST include the three types of questions:

### A. Multiple Choice (5 options a-e)
The user enters in a character 'a' through 'e' for their answer.

Example:
<pre>
1) The population of Spokane is roughly what? Please enter a character a-e.
   a) 215k
   b) 20k
   c) 105k
   d) 400k
   e) 550k
   
Please enter a character a-e:
</pre>

### B. Numeric Response
The user enters in a numeric response to an open-ended question. I recommend prompting the user to enter an integer. If you choose to use floating-point numbers, be specific to the user about how they should enter their response (i.e. rounded and/or a certain number of decimal places).

Example:
<pre>
How many students are enrolled in this class? 

Please enter an integer:
</pre>

### C. True/False (String)
The user enters the string "true" or "false" in response to a statement.

Example:
<pre>
North Idaho College used to be called "Coeur d'Alene Junior College"? 

Please enter true or false:
</pre>

## Program Requirements
- [ ] Create a C++ source code file named `quiz.cpp`. Your executable file should be called `Quiz`.
- [ ] Your quiz MUST contain 10 questions. These 10 questions include **at least 2 of each of the following different types of questions**:
- [ ] For each question:
   1. Explicitly tell the user the format in which they should enter their response.
   2. Number each question.
   3. Always tell the user if they answer correctly or incorrectly.
      1. If the user answered incorrectly, provide the correct answer.
      2. Use an `if/else` structure to do this.
- [ ] Count the number of correct answers (this is the user's quiz score).
- [ ] At the end of the quiz, tell the user their final score, plus a fun statement about how much of a "fan" they are of the quiz topic (use an `if/else if/else` structure (multiple alternative if), which means you need at least 3 different fun statements based on the user's score).
- [ ] Students MUST adhere to the [CS150/CS151 style guide](https://github.com/nic-cs150-master/style-guide). Here are common ones:
   - [ ] File header comment
   - [ ] In-line comments
   - [ ] Proper naming convention of your variables, function names, constant variables or all identifiers. They should be descriptive of the value they are storing.
   - [ ] Proper indentation!!!

## Example Run
Here is a shortened example run of a quiz based on Game of Thrones. Credit for much of the content goes to these two online quizzes: [Q1](http://www.allthetests.com/quiz32/quiz/1424600000/Game-Of-Thrones-Quiz) and [Q2](http://www.allthetests.com/quiz31/quiz/1421977678/A-Song-Of-Ice-And-FireGame-Of-Thrones-Quiz).

<pre>
Welcome to the Game of Thrones Quiz!!
1) Which Dire-wolf belonged to Robb? 
   a) Lady
   b) Summer
   c) Grey Wind 
   d) Nimeria
   e) Ghost

Please enter a character a-e: <strong>b</strong>
Sorry, that is wrong. The answer is c) Grey Wind.

2) How many dragons does Daenerys own? 

Please enter an integer: <strong>3</strong>
You are correct!

[output removed for brevity]

9) Drogon is one of Daenerys' dragons? 

Please enter true or false: <strong>false</strong>
You need to read the book again! Daenerys actually had three dragons, Drogon, Rhaegal and Viserion.

10) Who wins the Kingsmoot on the iron isles? 
    a) Asha Greyjoy
    b) Reek
    c) Balon Greyjoy
    d) Euron Greyjoy
    e) Ramsay Bolton

Please enter a character a-e: <strong>d</strong>
Woohoo, look at you go!

You scored 9 questions correctly. Wow, you know your Game of Thrones!
</pre>

&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;![GoT](https://farm9.static.flickr.com/8539/8751429299_13553c4c84.jpg "Game of Thrones")

## Final Requirement
- [ ] Refactor your code by creating the function below. Then, call this function instead to print out the multiple choice questions in `main`.
- [ ] What the function does?
   - [ ] Displays the question number, question and the choices.
   - [ ] If there are only three choices, pass an empty string to the rest of the choices and this function should not print those choices.
   - [ ] This function SHOULD NOT handle any user input.

```cpp
void multipleChoice(int num, string question, string chA, string chB, string chC, string chD, string chE);
```
* `int num` is the question number
* `string question` is the multiple choice question
* `string ch#` are the parameters for the different choices, where `chA` is for choice *a)*, `chB` is for choice *b)*, so on...


## Challenge Yourself Beyond The Scope of the PA (Not Required)
- [ ] If you do accept some or all of the challenges below, **please specify in the comment box when you submit it in Canvas**.
   - [ ] **Easy**: For multiple choice answers, program should work regardless of the case of the letter. Example, if the answer is 'a', user should also be able to enter 'A'.
   - [ ] **Medium**: For each question, let the user continue to guess until they get the correct answer. You will need to use a loop to repeat a sequence of instructions.
      * With this added feature, the user will always get the right answer eventually, which means they will always get a 10/10. That is alright but not the best! Try one of these approaches:
         * They get a point for the question only if they get it right the first time
         * They get a "scaled" point depending on how many attempts they made at the question
         * E.g. 1 pt for correct the first time, 0.75 for correct the second time, 0.5..., 0.25,... 0.0.
         > Hint: Look ahead in the  Gaddis textbook for how to use a `while` or a `do-while` statement to do this!
   - [ ] **Hard**: In the true/false questions, a user may incorrectly enter the "true" or "false" and instead write one of the following: "true, True, TRUE, tRuE, false, FALSE, fALSe, etc.". Program should be able to accept these inputs. You can even extend this by also allowing the program to accept "T" for true and "F" for false.
  

## Submitting Assignments
- [ ] It is VERY IMPORTANT that besides pushing the code to GitHub that you still submit the GitHub URL of this lab assignment in Canvas. This allows the instructor to be notified of your final submission.

> **_NOTE: By submitting your code to be graded, you are stating that your submission does not violate the Academic Integrity Policy outlined in the syllabus._**
