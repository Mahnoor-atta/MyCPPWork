Introduction:
The Rock-Paper-Scissors game is a popular hand game usually played between two people. This 
project implements the game in C++ with features such as interactive gameplay, history tracking, 
and a user-friendly interface. The program allows a user to play against the computer while 
storing the results of each game for future reference. 

Objectives:
 To create an engaging console-based game using fundamental C++ concepts. 
 To implement a modular and reusable program structure through Object-Oriented 
Programming (OOP). 
 To ensure a fair and randomized gameplay experience using the random number 
generator. 
 To utilize file handling for persistent storage of game history. 
 To demonstrate user input validation for reliable and error-free gameplay. 
 To provide an interactive and user-friendly experience with clear instructions and options. 
Features 
 Interactive Gameplay: Users can play multiple rounds. 
 Result Tracking: The game logs outcomes of each round. 
 History Viewer: Displays past game results with date and time. 
 Fair Play: Randomized computer choices ensure unpredictability. 

Libraries Used: 
 <iostream> used for input/output operations. 
 <fstream>   used for file handling. 
 <string>      used for creating and handling string data. 
 <map>        used for storing key-value pairs. 
 <cstdlib>    used for random number generation. 
 <ctime>      used for working with date and time functions. 

Implementation:
Object-Oriented Programming (OOP) in the Code 
The game is built using OOP principles, encapsulating functionality within a Game class. This 
ensures modularity, reusability, and clarity in the codebase. 
Encapsulation 
The Game class groups all game-related data and functions together. 
o Attributes: 
 name: Stores the username. 
 gamenum: Tracks the number of games played. 
 userch and computerch: Hold the choices of the user and computer. 
 result: Stores the outcome of each game. 
o Methods: 
 playgame(): Runs the main game loop and handles user actions. 
 viewhistory(): Shows past game results from the file. 
 saveHistory(): Saves game data to the file. 
 getCurrentDateTime(): Gets the current date and time for logging. 
Abstraction: 
Complex tasks like saving or reading game history are handled inside functions, keeping the 
main code simple and clear. 
Polymorphism: 
The same method, playgame(), is used for different tasks like playing a game or viewing history, 
based on user input. 
Reusability: 
Functions and data in the Game class can be reused without rewriting the entire program. 

Conclusion: 
This project demonstrates how to use object-oriented programming to build a simple and 
enjoyable game. By using clear menus, random choices, and a way to save game history, the 
program provides an engaging and user-friendly experience. It’s a great example of applying 
C++ concepts in a real-world scenario. 
