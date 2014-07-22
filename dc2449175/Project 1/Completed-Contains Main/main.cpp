 /* 
 * File:   main.cpp
 * Author: Daniel Canales
 * I have 1 header files Stash 
 * For making my program neater and organized by catagory
 * Created on July 14, 2014, 11:03 AM
 */

#include <cstdlib>
#include <ctime>
#include <iostream>
#include <fstream>
#include "STATS.H"
using namespace std;

/*
 * 
 */
//functions
//only the ones used in main are placed here
int space = 0;
int diceroll();
void clear();
void checkdeath();
void turn();
void finalboss();

int main(int argc, char** argv) {

    //placed here to make everything random when needed
    srand(static_cast<unsigned int>(time(0)));
    //output if user name and if they won or lost
    ofstream outputFile;
    outputFile.open("data.dat");

    char now;
    int death = 0;
    //enter name
    cout << "Please enter your name" << endl;
    cin >> player;

    outputFile << player << endl;
    
    
    cout << "Welcome " << player << endl;
    cout << "Get ready to face plenty of enemies and fight your way " << endl;
    cout << "to the very end and defeat the boss" << endl;
    do
    {
        cout << "Press the Y key to show your ready" << endl;
        cin >> now;
        if(now!='y' && now!='Y')
        {
            cout << "Are you really not ready?" << endl;
            death++;
            if(death==3)
            {
                cout << "I guess you'll never be ready" << endl;
                cout << "You are dead" << endl;
                cout << "Game Over" << endl;    
                outputFile << " DEAD" << endl;
                return 0;   
            }
        }
        
    }while(now!='Y' && now!='y');

       //create the board-start off 50 spaces split into 4 sections
        do{     
            int roll = diceroll();
            char hit;
            cout << "The dice is rolling" << endl;
            cout << "Push H or h to stop the dice" << endl;
            cin >> hit;
            do
            {
                //gets the roll
                cout << player << " rolled the dice" << endl;
                cout << player << " rolled a " << roll << endl;
                //adds roll to space counter
                //stops the loop so it can keep going
                break;
            }while(hit=='h' || hit=='H');

            space += roll;

            //stops battles when player hp = 0
            if(plhp > 0)
            {
            //switch case space to see what part of map does what
                switch(space)
                {
                    //case numbers represent spaces
                    case  1 ... 15: cout << "Your in section 1" << endl;                                                               
                                                                   turn();                                                               
                                                                   break;
                    case 16 ... 30: cout << "Your in section 2" << endl; 
                                                                   turn();                                                               
                                                                   break;
                    case 31 ... 45: cout << "Your in section 3" << endl; 
                                                                   turn();
                                                                   break;
                    case 46 ... 50: cout << "You are in the final section" << endl;
                                                                   turn();
                                                                   break;
                }
               
            }
        }while(space<=50);  
        if(space==999) cout << "Game Over" << endl;
        else if(space < 999) 
        {
            finalboss();
            cout << "Congradulations " << player << "!" << endl;
            cout << "You have beaten the game!" << endl;
            cout << "Thank you for playing!" << endl;
            outputFile << " WON!" << endl;
        }
     outputFile.close();
    return 0;
}

//returns dice value 
int diceroll()
{
    int dice = rand()%6+1;
    return dice;
}

//cleans up the screen 
void clear()
{
    for(int i=0; i<=15; i++)
    {
        cout << " " << endl;
    }
}

//keeps inventory that will output later
    int stock1 = 0; 
    int stock2 = 0; 
    int stock3 = 0;     
    int stock4 = 0;

//randomizes to give player item
void itmshffl()
{
    //1-100 gives itewm depending on item landed
    int give = rand()%50+1;
    //holds wahts given
    int item = 0;

    //case depending on what number generated
    switch(give)
    {
        //gives
        //nothing
        case  1 ... 20: break;
        //small
        case 61 ... 70: 
        {
            cout << "You got a small potion!" << endl; 
            cout << "This heals 20 HP" << endl;
            item =  small;
            //increase "inventory" count
            stock1++;
            break;
        }
        //med
        case 21 ... 30:
        {
            cout << "You got a medium potion!" << endl;
            cout << "This heals 40 HP" << endl;
            item = med;
            stock2++;
            break;
        }
        //large
        case 31 ... 40:
        {
            cout << "You got a large potion!" << endl;
            cout << "This heals 60 HP" << endl;
            item = large;
            stock3++;
            break;
        }
        //max
        case 41 ... 50:
        {
            cout << "You got a max potion!" << endl;
            cout << "This heals all HP" << endl;
            item = maxhp;
            stock4++;
            break;
        }
    }
}   

//selection- holds the choice player made
//used for correct enemy move
int sel;
//sets what your fighting against
int entype;
//choose from list of enemies
void enemysel()
{   
    //choose between the 6 enemies
    int enemy = rand()%5+1;
    // chooses what enemy player will be fighting
    switch(enemy)
    {
        case 1: cout << "You are facing a Wolf!" << endl;entype=1;break;
        case 2: cout << "You are facing a Snake!" << endl;entype=2;break;
        case 3: cout << "You are facing a Bat!" << endl;entype=3;break;
        case 4: cout << "You are facing a Falcon!" << endl;entype=4;break;
        case 5: cout << "You are facing a Turtle!" << endl;entype=5;break;
    }
        
}

//chooses final boss
void bosssel()
{   
    //choose between the 6 enemies
    int enemy = rand()%2+1;
    // chooses what enemy player will be fighting
    switch(enemy)
    {
        case 1: cout << "The final boss is a Chimera!" << endl;;entype=6;break;
        case 2: cout << "The final boss is a Dragon!" << endl;entype=7;break;
        
    }
        
}
int enemyhp = 0;

//what damage output to correctly do
void playerattack()
{
    switch(entype)
    {
        //wolf
        case 1: 
                { 
                    cout << "You chose to attack" << endl;  
                    //every attack drops hp by 20
                    wolfhp -= platk;
                    cout << "Wolf's HP is " << wolfhp << endl;
                    enemyhp = wolfhp;
                    break;
                }
        //snake
        case 2: 
                { 
                    cout << "You chose to attack" << endl;  
                    //every attack drops hp by 20
                    snakehp -= platk;
                    cout << "Snake's HP is " << snakehp << endl;
                    enemyhp = snakehp;
                    break;
                }
        //bat
        case 3: 
                { 
                    cout << "You chose to attack" << endl;  
                    //every attack drops hp by 20
                    bathp -= platk;
                    cout << "Bat's HP is " << bathp << endl;
                    enemyhp = bathp;
                    break;
                }
        //falcon
        case 4: 
                { 
                    cout << "You chose to attack" << endl;  
                    //every attack drops hp by 20
                    falconhp -= platk;
                    cout << "Falcon's HP is " << falconhp << endl;
                    enemyhp = falconhp;
                    break;
                }   
        //turtle
        case 5: 
                { 
                    cout << "You chose to attack" << endl;  
                    //every attack drops hp by 20
                    turtlehp -= platk;
                    cout << "Turtle's HP is " << turtlehp << endl;
                    enemyhp = turtlehp;
                    break;
                }    
       //chimera
        case 6: 
                { 
                    cout << "You chose to attack" << endl;  
                    //every attack drops hp by 20
                    chimerahp -= platk;
                    cout << "Chimera's HP is " << chimerahp << endl;
                    enemyhp = chimerahp;
                    break;
                }    
        //dragon
        case 7: 
                { 
                    cout << "You chose to attack" << endl;  
                    //every attack drops hp by 20
                    dragonhp -= platk;
                    cout << "Dragon's HP is " << dragonhp << endl;
                    enemyhp = dragonhp;
                    break;
                }    
    }
}

//player options
void plmove()
{
    //will compare strings to go to correct switch
    string choice;
    string attack = "attack";
    string defend = "defend";
    string item = "item";

    //enter choice 
    //if no items come back here
    SELECTION:cout << "What would you like to do?" << endl;
    cout << "Attack" << endl;
    cout << "Defend" << endl;
    cout << "Item" << endl;
    cout << " " << endl;
    cin >> choice;

    //turning string compare to answer
    int ans = 0;
    
    //will be attacks
    //if not written correctly attack will miss and you'll be hit
    //this is for when written correctly
    if(choice.compare(attack) == 0) ans=1;
    if(choice.compare(defend) == 0) ans=2;
    if(choice.compare(item) == 0) ans=3;
    sel = ans;
    //for when you misspell
    /*if(choice.compare(attack) != 0) ans=4;
    if(choice.compare(defend) != 0) ans=4;
    if(choice.compare(item) != 0) ans=4;
    */

    //create switch to use correct option
    //will then add cases incases if possible
    switch(ans)
    {
        case 1: playerattack();
                break;
        case 2: cout << "You chose to defend" << endl; break;
        case 3:
               { cout << "You chose to use item" << endl;
                //use for declaring and choosing item
                string pick;
                string small = "small";
                string medium = "medium";
                string large = "large";
                string max = "max";

                cout << "You have " << stock1 << " small potion(s)" << endl;
                cout << "You have " << stock2 << " medium potion(s)" << endl;
                cout << "You have " << stock3 << " large potion(s)" << endl;
                cout << "You have " << stock4 << " max potion(s)" << endl;
                cout << "Which would you like to use?" << endl;
                cout << "Please enter the type of potion you would " << endl;
                cout << "like to use. " << endl;

                //if user has no items
                if(stock1==0 && stock2==0 && stock3==0 && stock4==0)
                {
                    cout << "You have no items" << endl;
                    goto SELECTION;
                }
                //get user to choose
                else cin >> pick;
                //varieable
                int useitem;
                //comparing strings again to make choice
                if(pick.compare(small)==0)  useitem = 1;
                if(pick.compare(medium)==0) useitem = 2;
                if(pick.compare(large)==0)  useitem = 3;
                if(pick.compare(max)==0)    useitem = 4;
                //repeat until false
                bool itm = true;
                do{
                    //get string and determine case
                    switch(useitem)
                    {
                        case 1:
                                {   //use the item
                                     if(stock1 >= 0)
                                     {
                                        //adds small potion
                                        plhp += 20;
                                        //decreases from stock
                                        stock1--;
                                        //sets to 100 to prevent HP abuse
                                        if(plhp >= 100) plhp = 100;
                                        cout << "You have " << plhp << "hp" << endl;
                                        itm = false;
                                     }
                                     else
                                     {
                                        cout << "You don't have any left!" << endl;
                                        goto SELECTION;
                                     }
                                     break;
                                }
                        case 2:
                                {   //use the item
                                     if(stock2 >= 0)
                                     {
                                        plhp += 40;
                                        stock2--;
                                        if(plhp >= 100) plhp = 100;
                                        cout << "You have " << plhp << "hp" << endl;
                                        itm = false;
                                     }
                                     else
                                     {
                                        cout << "You don't have any left!" << endl;
                                        goto SELECTION;
                                     }
                                     break;
                                }
                        case 3:
                                {   //use the item
                                     if(stock3 >= 0)
                                     {
                                        plhp += 60;
                                        stock3--;
                                        if(plhp >= 100) plhp = 100;
                                        cout << "You have " << plhp << "hp" << endl;
                                        itm = false;
                                     }
                                     else
                                     {
                                        cout << "You don't have any left!" << endl;
                                        goto SELECTION;
                                     }
                                     break;
                                }
                        case 4: 
                                {   //use the item
                                     if(stock4 >= 0)
                                     {
                                        plhp += (100-plhp);
                                        stock4--;
                                        if(plhp >= 100) plhp = 100;
                                        cout << "You have " << plhp << "hp" << endl;
                                        itm = false;
                                     }
                                     else
                                     {
                                        cout << "You don't have any left!" << endl;
                                        goto SELECTION;
                                     }
                                     break;
                                }
                    }
                  }while(itm==true); 
                break;                 
              }
    }
    //make enemyhp = to curent value or else they automatically die when I use 
    //item
    switch(entype)
    {
        case 1: enemyhp = wolfhp; break;
        case 2: enemyhp = snakehp; break;
        case 3: enemyhp = bathp; break;
        case 4: enemyhp = falconhp; break;
        case 5: enemyhp = turtlehp; break;
        case 6: enemyhp = chimerahp; break;
        case 7: enemyhp = dragonhp; break;
    }    
    
}    

//setting defending 
void pldef()
{
    switch(entype)
    {
        //defending from
        //wolf
        case 1: 
                {
                    cout << "Its the enemy's turn to attack!" << endl;
                    //cuts atk in hlf
                    plhp -= (wolfatk/2);
                    cout << "You have " << plhp << " HP remaining" << endl;
                    break;
                }
        //snake
        case 2: 
                {
                    cout << "Its the enemy's turn to attack!" << endl;
                    //cuts atk in hlf
                    plhp -= (snakeatk/2);
                    cout << "You have " << plhp << " HP remaining" << endl;
                    break;
                }
        //bat
        case 3: 
                {
                    cout << "Its the enemy's turn to attack!" << endl;
                    //cuts atk in hlf
                    plhp -= (batatk/2);
                    cout << "You have " << plhp << " HP remaining" << endl;
                    break;
                }
        //falcon
        case 4: 
                {
                    cout << "Its the enemy's turn to attack!" << endl;
                    //cuts atk in hlf
                    plhp -= (falconatk/2);
                    cout << "You have " << plhp << " HP remaining" << endl;
                    break;
                }
        //turtle
        case 5: 
                {
                    cout << "Its the enemy's turn to attack!" << endl;
                    //cuts atk in hlf
                    plhp -= (turtleatk/2);
                    cout << "You have " << plhp << " HP remaining" << endl;
                    break;
                }
        //chimera
        case 6: 
                {
                    cout << "Its the Boss's turn to attack!" << endl;
                    //cuts atk in hlf
                    plhp -= (chimeraatk/2);
                    cout << "You have " << plhp << " HP remaining" << endl;
                    break;
                }
        //dragon
        case 7: 
                {
                    cout << "Its the Boss's turn to attack!" << endl;
                    //cuts atk in hlf
                    plhp -= (dragonatk/2);
                    cout << "You have " << plhp << " HP remaining" << endl;
                    break;
                }
    }
}

//create switch and int to make battle loop correspond with correct enemy
int enloop = 0;

void enatk()
{
    switch(entype)
    {
        //wolf
        case 1:    
                {
                    cout << "Its the enemy's turn to attack!" << endl;
                    plhp -= wolfatk;
                    cout << "You have " << plhp << " HP remaining" << endl;
                    break;
                }
       //snake
        case 2:    
                {
                    cout << "Its the enemy's turn to attack!" << endl;
                    plhp -= snakeatk;
                    cout << "You have " << plhp << " HP remaining" << endl;
                    break;
                }
        //bat
        case 3:    
                {
                    cout << "Its the enemy's turn to attack!" << endl;
                    plhp -= batatk;
                    cout << "You have " << plhp << " HP remaining" << endl;
                    break;
                }
        //falcon
        case 4:    
                {
                    cout << "Its the enemy's turn to attack!" << endl;
                    plhp -= falconatk;
                    cout << "You have " << plhp << " HP remaining" << endl;
                    break;
                }
       //turtle
        case 5:    
                {
                    cout << "Its the enemy's turn to attack!" << endl;
                    plhp -= turtleatk;
                    cout << "You have " << plhp << " HP remaining" << endl;
                    break;
                }
        //chimera
        case 6:    
                {
                    cout << "Its the Boss's turn to attack!" << endl;
                    plhp -= chimeraatk;
                    cout << "You have " << plhp << " HP remaining" << endl;
                    break;
                }
       //dragon
        case 7:    
                {
                    cout << "Its the Boss's turn to attack!" << endl;
                    plhp -= dragonatk;
                    cout << "You have " << plhp << " HP remaining" << endl;
                    break;
                }
    }
}
                
//enemy move
void enmove()
{
    //if you atk
    if(sel==1 || sel==3)
    {
        enatk();
    }
    //if you def
    if(sel==2)
    {
        pldef();
    }
    

}

//starts the encounter and ends when someone dies
//HAVE TO REWRITE BATTLE IN MAIN BECAUSE IT WONT AUTOCHANGE
void battle()
{   

    //does battle but crashes if lost
    //need to reset health for animals
    if(plhp != 0)
    {
        do{
            //checks to see if your alive to continue loop
            if(plhp>=1)plmove(); 
            //FIX- DOESNT WORK IF YOU USE ITEM 1ST TURN BECAUSE
            // enemyhp=0. IT HASNT LOADED FROM PLAYERATK
            enloop = enemyhp;
            if(enloop>=1)enmove();

            //once dead if activates depending on who died and returns back
            if(enemyhp<=0)
            {
                cout << "You killed the enemy" << endl;
                enloop == 0;
            }
            if(plhp<=0)
            {
                cout << "You are dead" << endl;
                plhp = 0;
                enloop = 0;
                //used to break out of main do loop which does turns
                space = 999;
            }

            //i couldnt get (enloop>=1 || plhp>=1) to work so i made it
            //into 2 do while loops instead
          }while(enloop>=1);
      }
      else if(plhp == 0) exit(0);
}

//does a complete turn an resets enemy health
//so i dont cluter main
void turn()
{
         //choose an enemy
         enemysel();
         //execute battle
         battle();
         //random shuffle for item
         //doesnt activate if dead when dead space = 999
         if(space < 999)
         {
             itmshffl();
             //reset enemies hp so battle can continue
             wolfhp=40;
             snakehp = 30;
             bathp = 20;
             falconhp = 60;
             turtlehp = 100;
         }
}

//final boss encounter
void finalboss()
{
    cout << "You have reached the final boss!" << endl;
    bosssel();
    battle();
}