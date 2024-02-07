#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Dialogue.h"
using namespace std;
int Options;
bool Tasks[2];
int Fails = 0;



int main()
{
    cout << R"(
    ______              __                        
   / ____/_  __ ____   / /____   _____ ___   _____
  / __/  | |/_// __ \ / // __ \ / ___// _ \ / ___/
 / /___ _>  < / /_/ // // /_/ // /   /  __// /    
/_____//_/|_|/ .___//_/ \____//_/    \___//_/    
            /_/                                   )";

    cout << "\n" << "1.Start" << "\n";
    cout << ">";
    cin >> Options;


    cout << R"(
                                   /\
                              /\  //\\
                       /\    //\\///\\\        /\
                      //\\  ///\////\\\\  /\  //\\
         /\          /  ^ \/^ ^/^  ^  ^ \/^ \/  ^ \
        / ^\    /\  / ^   /  ^/ ^ ^ ^   ^\ ^/  ^^  \
       /^   \  / ^\/ ^ ^   ^ / ^  ^    ^  \/ ^   ^  \       *
      /  ^ ^ \/^  ^\ ^ ^ ^   ^  ^   ^   ____  ^   ^  \     /|\
     / ^ ^  ^ \ ^  _\___________________|  |_____^ ^  \   /||o\
    / ^^  ^ ^ ^\  /______________________________\ ^ ^ \ /|o|||\
   /  ^  ^^ ^ ^  /________________________________\  ^  /|||||o|\
  /^ ^  ^ ^^  ^    ||___|___||||||||||||___|__|||      /||o||||||\       |
 / ^   ^   ^    ^  ||___|___||||||||||||___|__|||          | |           |
/ ^ ^ ^  ^  ^  ^   ||||||||||||||||||||||||||||||oooooooooo| |ooooooo  |
ooooooooooooooooooooooooooooooooooooooooooooooooooooooooo)";

    cout << "\n\n" << "You wake up in your cabin" << "\n\n" << "1.Wake Up" << "\n" << "2.Stay in bed" << "\n" << ">";
    cin >> Options;
    if ((Options >= 1) && (Options <= 2))
    {
        if (Options == 1)
        {
            "You get up";

        }
        if (Options == 2)
        {

            cout << "You Stay in bed and go back to sleep";

            exit(0);

        }
    }
    else
    {
        cout << "Invalid Input";
        exit(0);
    }

    for (int i = 1; i <= 3; ++i)
    {
        cout << "\n" << "You look around your cabin, What do you want to?" << "\n" << "1.Cook" << "\n" << "2.Have a Bath" << "\n" << "3.Get dressed" << "\n";
        cout << ">";
        cin >> Options;

        if ((Options >= 1) && (Options <= 3))
        {
            House(Options);
            Options = 1;
            cout << "\n" << "1.Back" << "\n" << ">";
            cin >> Options;
        }
        else
        {
            cout << "Invalid Input";
            Fails += 1;

        }

    }


    if (Fails == 3)
    {

        exit(0);

    }
    else
    {

        cout << "Your ready to go out and explore." << "\n";


    }


    Characterselction();

    cout << "\n" << "You grab your door handle, twist it and throw your door open. You take one step outside" << "\n" << "Feel a cold breeze brush over you, Bright white snow covering the floor" << "\n" << "Tress surround you with a mountian behind you";
    cout << "\n" << "Which Direction do you choose?" << "\n" << "1.Left" << "\n" << "2.Right" << "\n" << ">";
    cin >> Options;
    if (Options == 1)
    {

        LR(Options);
        exit;




    }
    if (Options == 2)
    {
        LR(Options);
        cout << "\n" << "As you stood there ready to fight the thought of running sprung to mind" << "\n" << "What will you do?" << "\n" << "1.Fight" << "\n" << "2.Run" << "\n" << ">";
        cin >> Options;
        if (Options == 1)
        {
            srand(time(0));
            deathh = rand() % 2 + 1;
            if (deathh == 1)
            {
                CharacterFight(playerInput);
                exit;
            }
            if (deathh == 2)
            {
                CharacterFight(playerInput);
            }
        }
        if (Options == 2)
        {
            cout << "You followed your gut instinct and ran the opposite direction with all your might";
            exit;
        }
    }
}