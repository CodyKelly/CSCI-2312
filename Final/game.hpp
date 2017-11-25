#ifndef game_hpp
#define game_hpp

#include <string>

#include "board.hpp"
#include "battleship.hpp"
#include "ship.hpp"

using std::pair;
using std::string;

class Game
{
private:
    enum Difficulty { Easy, Normal, Hard };
    Difficulty currentDifficulty;
    bool singlePlayer = true;
    Board* boards[2]; // Holds board for both players
    void randomizeShips(Board*);
    Coordinate getPlayerAttack(Board);
    Coordinate getAIAttack(Board[2]);
    void addShipFromPlayer(string, Board*);
    void addShipRandomly(string, Board*);
    void readShips(Board*);
    void run();
public:
    inline Game() { }
    void start();
};

#endif /* game_hpp */
