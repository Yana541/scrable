# Scrabble Points Calculator

## Description

This program calculates the total points scored by two players in a game of Scrabble based on the words they have entered. Scrabble is a word game where players score points by placing tiles, each marked with a single letter, onto a game board divided into a grid of squares. Each letter tile has a corresponding point value, and players earn points by forming words on the board.

### Implementation

The program consists of the following components:

1. **Scrabble Points Array**: The program defines an array called `points`, which contains the point values for each letter of the English alphabet. The point values are assigned according to the official Scrabble rules.

2. **Calculate Points Function**: The `caPonts` function takes a string (a word) as input and calculates the total points scored by that word. It iterates over each letter of the word, calculates the corresponding point value from the `points` array, and adds it to the total.

3. **Main Function**: In the `main` function, the program prompts the users (Player 1 and Player 2) to enter their respective words. It then calls the `caPonts` function to calculate the points scored by each player. Finally, it compares the total points scored by both players and prints the result, indicating the winner or a tie.

