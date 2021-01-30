Author: Noah Cribelar
Date Completed: 2/13/19

PROGRAM SUMMARY

This program reads in a selected text file of 1000 integers, inserts them into a ternary tree, and prints out the tree by traversing it inorder and putting child nodes and the parent node values in a parenthetical way as described on Dr. Finkel's instructions for the assignment.


INVOKING THE PROGRAM

After unzipping the zip file, the program can be run using make commands.

Use "make" to compile the program from the command line, and after running make, use "make run" to execute the program.

The program will ask the user to choose which file they want to use, if what the user types in does not match either of the file names, then an error message will be given asking the user to provide an appropriate file.

Use enter to progress through the program should it seem execution stops, the program will also prompt the user to press enter after they input the text file.

Use "make clean" to remove any object file after one is finished with executing the program. If one wants to execute after running make clean, simply enter "make" again and use "make run" again to execute.


PROGRAM INPUT

The only input necessary is the selection of the text file and pressing enter to advance after that point. Valid text file names are "inputData.txt" and "inputs.txt". It is also described in the program how to input the files.


PROGRAM OUTPUT

Output will be instructions showing the user how to enter in files, prompts to continue, error messages if a file is not given correctly, and the tree printed out inorder. A sample of outputs when run on both files can be found in output1.txt and output2.txt, which are included in the zip file.


ADDITIONAL NOTES

I got the idea to use floats instead of ints after thinking about what kinds of inputs are valid, and after learning that NULL cannot be assigned to ints but NAN, which fills the same purpose as NULL in this program, can be assigned to floats, that is when I decided to use them. I found out later that int can be set to the null character instead, but at that point I had already completed most of the project so I decided to continue on with what I had done. However, this also means the program could potentially read in 1000 non-integer values from a text file, so if that gets me any consideration of extra credit I'll take it (I do not expect it however).

I shared the idea of using floats with classmates Evan Shepherd and Jackson Danna, so if they decided to implement the project in a similar fashion, that is why.

I got the necessary information to use NAN and isnan from the two reference sites listed below.
http://www.cplusplus.com/reference/cmath/nan-function/
http://www.cplusplus.com/reference/cmath/isnan/

I also realized that setting all my data to public in the classes essentially turned them into structs. If I had more experience using structs I likely would have replaced them and redone the project with structs instead.

The idea to use recursion in my tTree::insert method came from classmate Jackson Danna when I asked him how he would solve an issue pointing nodes in my previous method. Constructing the method made me realize that there are very few ways to do it recursively, so any similarity between Jack's method and mine is coincidental.

In the same method, using the * & when passing in the node came from the website below. No actual code was used but the explanation reminded me how to use the & operator.
https://www.ibm.com/support/knowledgecenter/en/SSLTBW_2.3.0/com.ibm.zos.v2r3.cbclx01/cplr233.htm
