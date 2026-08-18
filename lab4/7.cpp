#include <iostream>
using namespace std;

class GameManager;

class Player
{
private:
    string playerName;
    int health;
    int score;
    int level;

public:
    void input()
    {
        cout << "Enter player name: ";
        cin >> playerName;

        cout << "Enter health: ";
        cin >> health;

        cout << "Enter score: ";
        cin >> score;

        cout << "Enter level: ";
        cin >> level;
    }

    friend class GameManager;
};

class GameManager
{
public:
    void displayDetails(Player p)
    {
        cout << "\n--- Player Details ---\n";
        cout << "Name: " << p.playerName << endl;
        cout << "Health: " << p.health << endl;
        cout << "Score: " << p.score << endl;
        cout << "Level: " << p.level << endl;
    }

    void checkAlive(Player p)
    {
        if (p.health > 0)
            cout << "Player is Alive" << endl;
        else
            cout << "Player is Not Alive" << endl;
    }

    void displayScoreLevel(Player p)
    {
        cout << "Current Score: " << p.score << endl;
        cout << "Current Level: " << p.level << endl;
    }
};

int main()
{
    Player p;
    GameManager g;

    p.input();

    g.displayDetails(p);
    g.checkAlive(p);
    g.displayScoreLevel(p);

    return 0;
}