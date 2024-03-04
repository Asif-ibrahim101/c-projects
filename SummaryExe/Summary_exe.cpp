#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct SPlayer
{
    string Name;
    string Team;
    int Goals_Scored;
    int number_of_yellow_cards;
    int number_of_red_cards;
};

// Global array
vector<SPlayer> players = {
    {"Mitchell", "Uclan", 4, 1, 0},
    {"Jobs", "Apple", 8, 0, 0},
    {"Edwards", "Jaguar", 0, 2, 4},
    {"Dan", "Uclan", 2, 1, 0}};

// Function to display all players
void display_players()
{
    for (const SPlayer &player : players)
    {
        cout << "Name: " << player.Name << endl;
        cout << "Team: " << player.Team << endl;
        cout << "Goals: " << player.Goals_Scored << endl;
        cout << "Yellow Cards: " << player.number_of_yellow_cards << endl;
        cout << "Red Cards: " << player.number_of_red_cards << endl
             << endl;
    };
};

int main()
{
    int choice;

    cout << "Menu:" << endl;
    cout << "1. Display All Players" << endl;
    cout << "2. Exit" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        display_players();
        break;
    case 2:
        cout << "Exiting..." << endl;
        break;
    default:
        cout << "Invalid choice. Please try again." << endl;
    };
};