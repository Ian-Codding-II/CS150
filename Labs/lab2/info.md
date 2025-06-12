# Lab 2: Using GitHub Classroom and My First C++ Project in Visual Studio Code

## Learner Objectives
At the conclusion of this lab assignment, participants should be able to:
* Use GitHub Classroom to get the starter code for lab assignments
* Use git commands to clone repositories from GitHub
* Demonstrate the single-developer workflow (edit-test-commit-push)
* Create a C++ project using Visual Studio Code

## Prerequisites
* Understanding of the lessons taught in Chapter 1
* Familiar with basic Linux File Commands

## Acknowledgements
Content used in this assignment is based upon information in the following sources:
* CS161 [Using Github Classrom](http://eecs.harvard.edu/~cs161/resources/githubclassroom.html), Harvard University, James Mickens

## Lab 2.1 - How to Create a C++ Project in the Terminal
**NOTE:** The instructor will go through each instruction in the lab.

1. In the terminal, make sure your current working directory is `~/cs150/lab/lab2`. Change directory if needed.
2. Open Visual Studio Code by typing in the terminal 
`$ code .`

![VS Code UI](https://code.visualstudio.com/assets/docs/getstarted/userinterface/hero.png)

### My First C++ Program
1. Create a `lab2_1.cpp` file
2. Open `lab2_1.cpp` and add the following code in the editor
```cpp
/**
 * @file lab2_1.cpp
 *
 * This is my first C++ program that prints
 * hello world to the screen.
 *
 * @author WRITE STUDENT NAME
 * @date   WRITE DATE TODAY
 */
#include <iostream>
using namespace std

int main()
{
    // This line is a comment
    // The statement below is how you display output to the screen
    cout << "Hello World!\n";
    return 0;
}
```
3. Save the file by pressing `Ctrl+S`. Note: This will only save the active file in the editor. If you have multiple files, you will have to save each one of them. Or press `Ctrl+K S`.
4. Back in the terminal, compile and run the code by using the command below. Make sure that you are in the directory where `lab2_1.cpp` is located.
`$ g++ -Wall lab2_1.cpp -o lab2_1`
5. The code will not compile. A syntax error should be detected by C++ compiler. There is a missing semi-colon at the end of `using namespace std`. Add it and recompile the code.
6. The compiler will generate an executable program file called `hello`
7. Run the executable program by typing
`$ ./lab2_1`

### Edit-Test-Commit-Push
1. You have written and tested your code, and it works. Time to make your first commit.
2. Two things to do in the terminal during a commit
    1. `$ git add -A`
    2. `$ git commit -m "YOUR COMMIT MESSAGE"`
3. Go back to the code, and add another display statement that will be print to the screen `Programming is awesome!` Read the comments in the code as it should give you some hint on how to write the C++ statement.
4. Make another commit.
5. Lets now try pushing the code for grading.
   1. When pushing, you will be asked for a username and password. GitHub no longer allow passwords. Instead you have to use personal access tokens. Follow the steps below and you only need to do this once for your personal computer. If you are using a different computer later, you'll have to do this step again for that computer.
     1. Set up a **Personal Access Token** following the steps on this [link](https://docs.github.com/en/github/authenticating-to-github/keeping-your-account-and-data-secure/creating-a-personal-access-token). Read specific instructions below
       1. Follow **steps 1 to 6**. In **step 6**, write a descriptive name of your computer so you remember that this is the access token for that computer.
       1. In **step 7**, give this token an expiration date for the whole semester. (**NOTE**: If you set a shorter expiration date, you will have to generate a new one when it expires)
       1. In **step 8**, just check ***repo***
       1. Follow **step 9**. At this point, a personal access token has been generated. **Keep this webpage open** as you will need this token later.
    2. Back in your terminal, write this command below to automatically store your credentials on your computer. (**IMPORTANT NOTE**: this is NOT considered good practice, but to simplify your workflow of not having to rewrite the password token, this will [automatically save the token in the computer](https://git-scm.com/docs/git-credential-store) after using it the first time)
       ```
       $ git config --global credential.helper store
       ```
   3. Push committed code back to GitHub. You will be prompted to enter username and password. **Enter your GitHub username** and **for the password, copy the generated personal access token**. (**NOTE**: while typing the personal access token, you WILL NOT SEE any letter in the terminal, this is normal, just continue typing)
      > If all the steps are followed here correctly, all future push on this particular computer will not require you to enter your username and password unless the token expires.
      ```
      $ git push
      Username: WRITE GITHUB USERNAME
      Password: WRITE THE GENERATED PERSONAL ACCESS TOKEN
      ```

## Lab 2.2 - Your Second C++ Program
1. For this lab activity, create a file `lab2_2.cpp'.
2. Write a program from scratch that will display to the screen 
   - [ ] your name, and
   - [ ] `This is my second C++ program!`. 
   
   Use the previous program as a guide.
3. Once your done testing and making sure that the program is working as intended. Commit and Push!
4. Notify instructor you are ready for grading so he can check on his end your code submission.


## Submitting Assignments
* It is VERY IMPORTANT that besides pushing the code to GitHub that you still submit the GitHub URL of this lab assignment in Canvas. This allows the instructor to be notified of your final submission.

> **_NOTE: By submitting your code to be graded, you are stating that your submission does not violate the Academic Integrity Policy outlined in the syllabus._**
