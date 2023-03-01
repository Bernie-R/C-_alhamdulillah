#pragma once 

// preprocessor directive that tells the compiler to include the contents of this header file only once
// during compilation. This helps prevent errors that can occur when the same header file is included multiple times.

class Game {
public:
    void play();
private:
    int secretNumber;
};