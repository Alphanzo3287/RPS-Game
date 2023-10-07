# Instructions  
In this assignment, you create your own design using functions, parameters, and NO global variables. I give you some tips to get started, but you are free to deviate from this as long as the game is playable, displays the results from each round, asks the user if he/she wishes to continue, and displays the number of wins by the computer and user at the end.

=============================================================================

Write a program that lets the user play the game of Rock, Paper, Scissors against the computer. The program should work as follows.

When the program begins, a random number in the range of 1 through 3 is generated.
If the number is 1, then the computer has chosen rock. If the number is 2, then the computer has chosen paper. If the number is 3, then the computer has chosen scissors. (Don’t display the computer’s choice yet.)
The user enters his or her choice of “rock”, “paper”, or “scissors” at the keyboard. (You can use a menu if you prefer.)
The computer’s choice is displayed.
A winner is selected according to the following rules:
If one player chooses rock and the other player chooses scissors, then rock wins. (Rock smashes scissors.)
If one player chooses scissors and the other player chooses paper, then scissors win. (Scissors cuts paper.)
If one player chooses paper and the other player chooses rock, then paper wins. (Paper covers rock.)
Display the comment based on the result. For example, display, "Rock smashes scissors. You lose." or "Rock smashes scissors. You win."
If both players make the same choice, display a message such as "You both chose Scissors. This game is a tie."
Track the number of ties, the number of times the computer wins, and the number of times the user wins.
Ask the user if she wishes to play again.
When the program ends, display the total number of ties, wins by the computer and the total number of wins by the user.
Be sure to divide the program into functions that perform each major task. The main function should consist of variable declarations and a game loop that calls functions. 

I suggest, at a minimum, you have a function to get the computer choice, get the player choice, find the winner, display results, and isValid. 