#ifndef COLORENUM_H
#define COLORENUM_H
 
// corresponding integer represents players spot in the array in the Controller class
enum class Color {
    B = 0, // Player 1, Blue
    R = 1, // Player 2, Red
    O = 2, // Player 3, Orange
    Y = 3,  // Player 4, Yellow
    DNE = -1
};

#endif