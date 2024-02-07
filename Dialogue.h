#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int enemyHealth = 25;
int playerHealth = 25;
int enemyDeath = 0;
int playerDeath = 0;
int deathh;

int playerInput;
string Name;
string CharacterName1;
void Characterselction();
void CharacterName();
string ChosenClass;

string Classes[5] = { "Spearman", "Knight", "Archer", "Warlock", "Rogue" };

struct
{
    string ChosenClass;
    string CharacterName1;

}userstruct;

void Characterselction()
{
    cout << "Please choose a character class below:" << "\n";
    cout << "1. Spearman" << "\n";
    cout << "2. Knight" << "\n";
    cout << "3. Archer" << "\n";
    cout << "4. Warlock" << "\n";
    cout << "5. Rogue" << "\n";
    cout << "\n" << ">";
    cin >> playerInput;

    if (playerInput >= 1)
    {
        if (playerInput <= 5)
        {
            cout << "You have chosen " << Classes[playerInput - 1] << "\n";
            ChosenClass = Classes[playerInput - 1];
            CharacterName();
        }
        else
        {
            cout << "Invalid Input" << "\n\n";
            exit(0);
        }
    }

}

void CharacterName()
{
    cout << "\n" << "Please enter your name: ";
    cin >> Name;



}

void House(int a)
{
    if (a == 1)
    {
        cout << "You walk over to your stove on turn it on. Lean into the fridge and grab bacon and eggs." << "\n" << "Grab a frying pan and start cooking.You eat everything ready for your day.";

    }
    else if (a == 2)
    {
        cout << "You walk over to your bath room and start to run a bath,You sink into your tub and let the water covers your scars. You get out and dry off.";

    }
    else if (a == 3)
    {
        cout << "Wardrobe and open the door. You see all your clothes and choose your outfit for the day";

    }

}

void LR(int a)
{
    if (a == 1)
    {
        cout << "You start to walk threw the snow for miles. The further you go the more the snow starts to fade and turn into mud" << "\n" << "Before you know it you can hear people and see the glow of a town over the tree line" << "\n" << "You eneter the village to be hit by lots of different noises as people get on with there daily lives" << "\n";
        exit;

    }
    if (a == 2)
    {
        cout << "You start trodding through the snow, you hear each footstep. The forest is silent with nothing around" << "\n" << "As you start to make some tracks through the snow toward the village," << "\n";
        cout << "a man in ablack robe is stood further down the trail." << "\n";
        cout << "As you approach closer to the figure, you can see him gaze towards you." << "\n" << "A cold shiver runs down you spine and you instinctively draw your weapon" << "\n";
        cout << "\n" << "He shouts from further down the trail." << "\n" << Name << " I'm hear for you";

    }
}

void CharacterDeath(int a)
{
    if (a == 1)
    {
        cout << "\n" << "You lunge forward with you spear in hand.You plunge it through his chest." << "\n" << "As soon as it touches him it just goes threw him like a cloud of smoke." << "\n" << "He just looks as you as he plunges his hand through your chest." << "\n" << "Lifting you off the ground and ripping out your heart.He then throws your lifeless body to the floor and vanishes";

    }
    if (a == 2)
    {
        cout << "\n" << "You swing with your sword. Unleashing a barrage of attacks on him" << "\n" << "As you look up you see his body reforming like a cloud of smoke." << "\n" << "He just looks at you as you swing more trying to do some damage" << "\n" << "He reaches out to you and you guard with your sheild." << "\n" << "His hand just passes through your sheild and enters into your chest." << "\n" << "Lifting you off the ground and ripping out your heart.He then throws your lifeless body to the floor and vanishes";

    }
    if (a == 3)
    {
        cout << "\n" << "You notch an arrow, release it and watch it go straight through him, as if he was a cloud of smoke." << "\n" << "He slowly walks closer as you fire more arrows from your quiver." << "\n" << "As you got to reach for an arrow you realise it is your last." << "\n" << "You fire it through his head and it staggers him for a second" << "\n" << "Before you realise it, he is stood infron of you." << "\n" << "He lifts you off the ground and ripping out your heart.He then throws your lifeless body to the floor and vanishes";

    }
    if (a == 4)
    {
        cout << "\n" << "You draw your staff and cast of spell of defense. A blue arua sits around your body and you start casting other spells" << "\n" << "He slowly walks over to you. You cast fireball, chilling grasp, eldritch blast." << "\n" << "Every spell you own and it doesnt nothing to him" << "\n" << "As a last ditch effort you swing your staff at him and it slices through him as if he where a cloud of smoke." << "\n" << "He reaches towards you and puts his hand through you spell of protection and lifts you off the ground and rips out your heart." << "\n" << "He then throws your lifeless body to the floor and vanishes";

    }
    if (a == 5)
    {

        cout << "\n" << "You draw your two daggers and throw a smoke bomb. You bolt behind and a tree and evaluate the situation" << "\n" << "As you look around the mans head just turns and focus on you.You can feel your heart pounding in your chest as he moves closer to you." << "\n" << "You run towards him and jump and slash his chest, before you reach him, he sticks his arm out and catches you by the" << "\n" << "throat." << "\n" << "As you try to place your feet on the ground, he reaches with his other hand and rips your heart out" << "\n" << "He then throws your lifeless body to the floor and vanishes";
    }


}

void CharacterFight(int a)
{
    if (a == 1)
    {
        cout << "You ready your spear and throw it towards your opponent. It hits them straight in the head and you hear something" << "\n" << "shatter almost like glass" << "\n" << "You run over to collect your spear and all thats left are the robes on the floor";
    }
    if (a == 2)
    {
        cout << "You draw your great sword, you lunge towards your opponent and swing your sword into there head." << "\n" << "You hear something shatter and the robes figure drops with his clothes left in a pile on the floor.";
    }
    if (a == 3)
    {
        cout << "As you notch an arrow, you see some kind of skull under the hood. You fire your arrow directly at it and hear a crack" << "\n" << "You unleash a barrage of arrows towards your enemy till your hear a smash" << "\n" << "Your enemy collapes into a pile of clothes. You go and collect your arrows and there are parts of skull stuck to the arrows";
    }
    if (a == 4)
    {
        cout << "As you get your staff ready, you can sense the centre of magic in your enemie. Its in the head" << "\n" << "You fire an eldritch blast and hit them directly in the head." << "\n" << "Once the smoke had cleared there was just a pile of robes on the floor.";
    }
    if (a == 5)
    {
        cout << "You throw a smoke bomb and run behind the enemy. You unless a flury of attacks and while it smoke like body was moving, you could see a skull." << "\n" << "You unleashed a barrage of attacks on your enemies head and heard a smash when the enemy collapsed." << "\n" << "Once the smoke had cleared there was just a pile of robes on the floor.";

    }
}