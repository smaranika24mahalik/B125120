#include <iostream>
using namespace std;

class Song
{
private:
    string songName;
    string artistName;
    float duration;

public:
    void input()
    {
        cout << "Enter song name: ";
        cin >> songName;

        cout << "Enter artist name: ";
        cin >> artistName;

        cout << "Enter duration in minutes: ";
        cin >> duration;
    }

    friend void compareSongs(Song s1, Song s2);
};

void compareSongs(Song s1, Song s2)
{
    if (s1.duration > s2.duration)
        cout << s1.songName << " is longer." << endl;
    else if (s2.duration > s1.duration)
        cout << s2.songName << " is longer." << endl;
    else
        cout << "Both songs have the same duration." << endl;
}

int main()
{
    Song s1, s2;

    cout << "--- Song 1 ---\n";
    s1.input();

    cout << "\n--- Song 2 ---\n";
    s2.input();

    compareSongs(s1, s2);

    return 0;
}