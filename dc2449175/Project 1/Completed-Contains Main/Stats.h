/* 
 * File:  Stats.cpp
 * Author: Daniel Canales
 *
 * Created on July 14, 2014, 11:08 AM
 */
 
 
//create a header function
#ifndef _Player
#define _Player

#include <cstdlib>
#include <iostream>
#include <ctime>


using namespace std;

/*
 * 
 */

//player stats
string player;
int plhp = 100;
int platk = 20;

//wolf stats
int wolfhp = 40;
int wolfatk = 10;

//snake
int snakehp = 30;
int snakeatk = 12;

//bat
int bathp = 20;
int batatk = 7;

//falcon
int falconhp = 60;
int falconatk = 18;

//turtle
int turtlehp = 100;
int turtleatk = 5;

//final boss - Chimera
int chimerahp = 85;
int chimeraatk = 30;

//differnt final boss other options
//dragon
int dragonhp = 100;
int dragonatk = 25;

//items (potions) gives that amount back as HP
int small = 20;
int med   = 40;
int large = 60;
//sub 100 from play hp so Hp maxes at 100 and not go over
int maxhp   = (100-plhp);

#endif //close it