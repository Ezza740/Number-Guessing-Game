Number Guessing Game (C++)
 Overview

This is a simple console-based Number Guessing Game written in C++. The program generates a fixed secret number, and the player has up to 5 attempts to guess it correctly.

The game provides feedback after each guess, telling the player whether their guess is too high or too low. At the end, it also displays all guesses and calculates a score based on performance.

 Features
 Interactive command-line gameplay
 Fixed secret number (70)
 Maximum of 5 attempts
 Score calculation based on attempts
 Displays all guesses entered by the user
 Instant feedback (Too High / Too Low / Correct)
 Technologies Used
C++
Standard Library (<iostream>)
 Project Structure
number-guessing-game/
│
├── main.cpp        # Contains the full game logic
└── README.md       # Project documentation
 
   How to Play
The game asks you to guess a number between 1 and 100.
Enter your guess.
The program will respond with:
"Too high!"
"Too low!"
"Correct!"
You have 5 attempts to guess correctly.
After the game ends:
All your guesses will be displayed.
Your score will be calculated.
Score System
Initial score: 100
Each attempt reduces score by 5 points
Formula:
score = 100 - (attempts * 5);
 Known Issues / Improvements
 Secret number is fixed (can be randomized using rand())
 No input validation (non-numeric input may crash program)
 Score function does not properly handle negative values
 Array size is fixed to 5 guesses only
 Future Enhancements
 Random number generation
 Replay option
 Difficulty levels
 Input validation
 High score tracking
 


 Author

EZZA SAEED
GitHub: https://github.com/Ezza740

