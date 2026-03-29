Number Guessing Game (C++)

A simple console-based number guessing game in C++ where the player tries to guess a number within limited attempts.

 Overview:

This is a simple console-based Number Guessing Game written in C++. The program generates a fixed secret number, and the player has up to 5 attempts to guess it correctly.

The game provides feedback after each guess, telling the player whether their guess is too high or too low. At the end, it also displays all guesses and calculates a score based on performance.

 Features:
 
1) Interactive command-line gameplay
2) Fixed secret number (70)
3) Maximum of 5 attempts
4) Score calculation based on attempts
5) Displays all guesses entered by the user
6) Instant feedback (Too High / Too Low / Correct)

 
 Technologies Used:
    C++
    
Standard Library (<iostream>)

 Project structure:
 
number-guessing-game/
│
├── main.cpp        # Contains the full game logic

└── README.md       # Project documentation

 
   How to Play:
1)The game asks you to guess a number between 1 and 100.
2)Enter your guess.
3)The program will respond with:
4)"Too high!"
5)"Too low!"
6)"Correct!"
7)You have 5 attempts to guess correctly.

After the game ends:
1)All your guesses will be displayed.
2)Your score will be calculated.
3)Score System
4)Initial score: 100
Each attempt reduces score by 5 points
Formula:
score = 100 - (attempts * 5);

 Known Issues / Improvements:
1) Secret number is fixed (can be randomized using rand())
2) No input validation (non-numeric input may crash program)
3) Score function does not properly handle negative values
4) Array size is fixed to 5 guesses only
5) Future Enhancements
6) Random number generation
7) Replay option
8) Difficulty levels
9) Input validation
10) High score tracking
 


 Author

EZZA SAEED
GitHub: https://github.com/Ezza740

