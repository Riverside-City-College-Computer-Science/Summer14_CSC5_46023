/* 
 * File:   main.cpp
 * Author: Kevin Rivas
 *
 * Created on July 14, 2014, 5:09 PM
 */

#include <iostream>

using namespace std;

//Global Constants

//Function Prototypes
void con();

//Execution Starts here
int main(int argc, char** argv) {
    //Declare Variables
    int days=35;
    short choice;
    float food=0;
    int str=0;
    int agl=0;
    int lck=0;
    int ttl=0;
    char dec;
    bool strt;
    bool moral;
    char chA='A';
    char chB='B';
    char chC='C';
    
    //Simple output of text for Menu
    cout<<"Welcome to Oregon Trail Lite Version"<<endl;
    cout<<"===========Main Menu================"<<endl;
    cout<<"1. Play game"<<endl;
    cout<<"2. Rules"<<endl;
    cout<<"3. Quit (But why would you?)"<<endl;
    
    //Input for menu
    cin>>choice;
    
    //Do-while menu including switch
    do{
        switch(choice)
    {
        case 1:
            strt=true;
            con();
            cin.ignore();  
            break;
            
        case 2:
            cout<<"Rules"<<endl;
            cout<<"The rules are simple, the objective is to finish the Oregon";
            cout<<" Trail before running out of food or time."<<endl;
            cout<<"You have the ability to add statistics to your group such";
            cout<<" such as strength, Agility, and Luck which are required to";
            cout<<" successfully accomplish a task. There are quests along the";
            cout<<" way which may influence your outcomes. Good Luck!"<<endl;
            cout<<"Exiting out of Program..."<<endl;
            con();
            cin.ignore();
            break;
        case 3:
            strt=false;
            cout<<"Quitting game"<<endl;
            con();
            cin.ignore();
            return 0;
        default:
            if (choice!=1||2||3)
            cout<<"Not a valid option, please enter 1,2, or 3. ";
            cin>>choice;
            break;
    }
    }while (choice<1||choice>3);
    
    //Uses Bool to activate the Game
    if (strt==true){
        cout<<"Well hello there, Traveler! Welcome to the Oregon Trail!"<<endl;
        cout<<"Before we begin, please enter your Statistics."<<endl;
        cout<<"This may help you on your journey!"<<endl;
        cout<<"You only have 5 points to give so please use them wisely";
        cout<<" (It is recommended to at least dedicate 3 ";
        cout<<" points to at least one stat)."<<endl;
        cout<<"For more information, consult rules"<<endl;
        //Input of Stats
        cout<<"Strength: "<<endl;
        cin>>str;
        cin.ignore();
        cout<<"Agility: "<<endl;
        cin>>agl;
        cin.ignore();
        cout<<"Luck: "<<endl;
        cin>>lck;
        con();
        cin.ignore();
        
        //Input validation statement for the input of Stats
        for (ttl=str+agl+lck;ttl>5;ttl)
        {
            str=0,agl=0,lck=0;
            cout<<"Error!"<<endl;
            cout<<"Please correctly divide 5 integers amongst the statistics";
            cout<<endl;
            cout<<"Strength: "<<endl;
            cin>>str;
            cin.ignore();
            cout<<"Agility: "<<endl;
            cin>>agl;
            cin.ignore();
            cout<<"Luck: "<<endl;
            cin>>lck;
            cin.ignore();
            con();
        
            cout<<endl;
        
             
        }
       //Brief simple output of text for some rules 
        cout<<"Remember there is a time limit!"<<endl;
        cout<<"Due to the trip taking about 4-6 Months, the time limit has";
        cout<<" been reduced to 35 days. ";
        cout<<"If you have not reached the end by 35 days, you fail."<<endl;
        cout<<"Maybe not at life...but certainly at this game."<<endl;
        cout<<"Now to begin."<<endl;
        con();
        
       
        //Beginning of Game
        //Day 1        
        cout<<"Day 1: You must aquire food for this epic journey."<<endl;
        cout<<"Do you.."<<endl;
        cout<<"[A] Gather supplies?(Sure way to aquire food although";
        cout<<" lengthy)"<<endl;
        cout<<"[B] Hunt?"<<endl;
        cout<<"[C] Fish?"<<endl;
        cin>>dec;
        //Choice A
        if(dec=='A'){
            food+=20;
            cout<<"Food Acquired: "<<endl;
            cout<<food<<endl;
            days-=7;
            cout<<"Days left: "<<days<<endl;
            
        }
        //Choice B
        else if (dec=='B'){
            
            //If strength is successful
            if(str>=3){
               cout<<"Success!";
                food+=20;
                cout<<"Food Acquired:"<<endl;
                cout<<food<<endl;
                days-=3;
                cout<<"Days left: "<<days<<endl;
                con();
                cin.ignore();
            }
                //If strength stat is unsuccessful
                else{
                cout<<"Failure: Strength too low"<<endl;
                cout<<"Since you failed at hunting you resupply"<<endl;
                food+=20;
                cout<<"Food Acquired: "<<endl;
                cout<<food<<endl;
                days-=8;
                cout<<"Days left: "<<days<<endl;
                con();
                cin.ignore();
                }  
             }
           
        //Choice C
        else if (dec=='C'){
            //If luck stat is successful
            if(lck>=3){
            cout<<"Success!";
                food+=20;
                cout<<"Food Acquired: "<<endl;
                cout<<food<<endl;
                days-=3;
                cout<<"Days left: "<<days<<endl;
                con();
                cin.ignore();
            }
            //If luck stat is unsuccessful
             else{
                food+=20;
                days-=8;
                cout<<"Failure: Luck too low";
                cout<<"Since you failed at fishing. You resupply";
                cout<<"Food Acquired: "<<food<<endl;
                cout<<"Days left: "<<days<<endl;
                con();
                cin.ignore();
             }
           
        }
        //Requests for another attempt if failure to input correct character
        else{
            cout<<"Invalid Answer: Please Select the A,B,or C"<<endl;
            cin>>dec;
        }
        //in-game random day
        cout<<"New Day... Uneventful"<<endl;
        food-=1;
        days-=1;
        cout<<"Food left: "<<food<<endl;
        cout<<"Days left: "<<days<<endl;
        con();
        cin.ignore();
        
        //in-game random day
        cout<<"New Day... You pass by a creek"<<endl;
        food-=1;
        days-=1;
        cout<<"Food left: "<<food<<endl;
        cout<<"Days left: "<<days<<endl;
        con();
        cin.ignore();
        
        //in-game random day
        cout<<"New Day... What's so great about Oregon?"<<endl;
        food-=1;
        days-=1;
        cout<<"Food left: "<<food<<endl;
        cout<<"Days left: "<<days<<endl;
        con();
        cin.ignore();
        
        //Second Challenge
        cout<<"New Day....You come across stranded pioneers."<<endl;
        cout<<"Do you.."<<endl;
        cout<<"[A] Invite them to come join you."<<endl;
        cout<<"[B] Leave them."<<endl;

        cin>>dec;
        //Choice A
        if(dec=='A'){
            cout<<"You have a kind heart,but unfortunately that comes with a";
            cout<<" price. You spent more time and food by settling extra";
            cout<<" mouths to feed. Good luck."<<endl;
            food-=3;
            cout<<"Food Acquired: "<<endl;
            cout<<food<<endl;
            days-=2;
            cout<<"Days left: "<<days<<endl;
            moral=true;
            con();
            cin.ignore();
        }
        //Choice B
        else if (dec=='B'){
                cout<<"That was messed up... but at least you still have food.";
                cout<<endl;
                food-=1;
                days-=1;
                cout<<"Food left: "<<food<<endl;
                cout<<"Days left: "<<days<<endl;
                moral=false;
                con();
                cin.ignore();
               
             }
        //Asks user for another attempt to input correct char 
        else{
            cout<<"Invalid Answer: Please Select the A,or B"<<endl;
            cin>>dec;
        }
        
        //in-game random day
        cout<<"New Day... Oh look, a tree!"<<endl;
        food-=1;        //subtracts 1 food
        days-=1;        //subtracts 1 day
        cout<<"Food left: "<<food<<endl;
        cout<<"Days left: "<<days<<endl;
        con();
        cin.ignore();       
         
        //in-game random day
        cout<<"New Day... Oregon is the one with the gold right?"<<endl;
        food-=1;
        days-=1;
        cout<<"Food left: "<<food<<endl;
        cout<<"Days left: "<<days<<endl;
        con();
        cin.ignore();
        
        //in-game random day
        cout<<"New Day... I miss indoor plumbing!"<<endl;
        food-=1;
        days-=1;
        cout<<"Food left: "<<food<<endl;
        cout<<"Days left: "<<days<<endl;
        con();
        cin.ignore();      
        
        //in-game random day
        cout<<"New Day... did we forget someone? Where's Kevin?!"<<endl;
        food-=1;
        days-=1;
        cout<<"Food left: "<<food<<endl;
        cout<<"Days left: "<<days<<endl;
        con();
        cin.ignore();   
        
        //Third Challenge
        cout<<"New Day....Your horse is slowing down."<<endl;
        cout<<"Do you.."<<endl;
        cout<<"[A] Stop and Rest"<<endl;
        cout<<"[B] Eh, the horse is fine."<<endl;
        cin>>dec;
        //Choice A
        if(dec=='A'){
            cout<<"Yeah we should take a rest for a while...";
            cout<<"I mean why would we risk our only form of transportation, "; 
            cout<<"right? Silly thing to do."<<endl;
            food-=3;
            cout<<"Food Acquired: "<<endl;
            cout<<food<<endl;
            days-=3;
            cout<<"Days left: "<<days<<endl;
            con();
            cin.ignore();
        }
        //Choice B
        else if (dec=='B'){
            cout<<"So Good news and Bad news..."<<endl;
            cout<<"Your horse finally collapsed with a broken ankle..."<<endl;
            cout<<"Good news: You have more food now! Yum!"<<endl;
            cout<<"You must wait until another caravan passes by to buy a";
            cout<<" new horse"<<endl;
            cout<<endl;
            food+=5;
            days-=5;
            cout<<"Food left: "<<food<<endl;
            cout<<"Days left: "<<days<<endl;
            con();
            cin.ignore();    
             
               
             }
        //Asks user for another attempt to input correct char    
        else{
            cout<<"Invalid Answer: Please Select the A,or B"<<endl;
            cin>>dec;
        }
        //In-game Random day
        cout<<"New Day... Ah the clean air, away from the city"<<endl;
        food-=1;
        days-=1;
        cout<<"Food left: "<<food<<endl;
        cout<<"Days left: "<<days<<endl;
        con();
        cin.ignore(); 
        
        //In-game Random day
        cout<<"New Day... WHY DID WE LEAVE THE CITY!?"<<endl;
        food-=1;
        days-=1;
        cout<<"Food left: "<<food<<endl;
        cout<<"Days left: "<<days<<endl;
        con();
        cin.ignore();
        
        //In-game Random day
        cout<<"Your wagon's wheel looks funny..."<<endl;
        cout<<"Do you.."<<endl;
        cout<<"[A] Stop and inspect it?"<<endl;
        cout<<"[B] Psh no! We have to hurry up!"<<endl;
        cin>>dec;
        
        if(dec=='A'){
            cout<<"So it turned out to be nothing...";
            cout<<"You wasted time stopping..."; 
            cout<<"Look at you trying to be responsible."<<endl;
            food-=3;
            cout<<"Food Acquired: "<<endl;
            cout<<food<<endl;
            days-=3;
            cout<<"Days left: "<<days<<endl;
            con();
            cin.ignore();
        }
        else if (dec=='B'){

            cout<<"Well, it broke."<<endl;
            cout<<"Yeah you should of stopped..."<<endl;
            if(moral=true){
                cout<<"Hey remember those pioneers that you helped out?"<<endl;
                cout<<"Well, turns out they have a spare!"<<endl;
                cout<<"Good thing you helped them!"<<endl;
                food-=1;
                days-=1;
                cout<<"Food left: "<<food<<endl;
                cout<<"Days left: "<<days<<endl;
                con();
                cin.ignore();    
            
            }
            if(moral=false){    
            cout<<"Well now you have to wait for another caravan to pass by";
            cout<<" so they can help you out"<<endl;
            cout<<"Hmm i wonder if those stranded pioneers could of helped?";
            cout<<endl;
            food+=5;
            days-=5;
            cout<<"Food left: "<<food<<endl;
            cout<<"Days left: "<<days<<endl;
            con();
            cin.ignore();    
            }
               
             }
           
        else{
            cout<<"Invalid Answer: Please Select the A,or B"<<endl;
            cin>>dec;
        }
        if (days<=0)
            cout<<"Game Over: You Starved!";
        if(food<=0)
            cout<<"Game Over: You starved!";
        
        cout<<"New Day... Oh abandoned Wagon? That's not ominous..."<<endl;
        food-=1;
        days-=1;
        cout<<"Food left: "<<food<<endl;
        cout<<"Days left: "<<days<<endl;
        con();
        cin.ignore();
        
        
        
        {if (days<=0||food<=0){
          
          cout<<"Game Over: Ran out of food or time... or both."<<endl;
        
          con();
          cin.ignore();
          return 0;}
        }
        
        cout<<"Maybe it's a good idea to stop to get food? "<<endl;
        cout<<"Do you.."<<endl;
        cout<<"[A] Nah, We need to hurry, we're running out of time!"<<endl;
        cout<<" lengthy)"<<endl;
        cout<<"[B] Hunt?"<<endl;
        cout<<"[C] Gather Barries?"<<endl;
        cin>>dec;
        
        if(dec=='A'){
            cout<<"Sure. Ignore food, you're trying to keep your figure";
            cout<<" anyways..."<<endl;
            food-=1;
            cout<<"Food Acquired: "<<endl;
            cout<<food<<endl;
            days-=1;
            cout<<"Days left: "<<days<<endl;
            
        }
        else if (dec=='B'){
            
       
            if(str>=3){
               cout<<"Success!";
                food+=15;
                cout<<"Food Acquired:"<<endl;
                cout<<food<<endl;
                days-=3;
                cout<<"Days left: "<<days<<endl;
                con();
                cin.ignore();
            }
                
                else{
                cout<<"Failure: Strength too low"<<endl;
                cout<<"Took you a while to finally catch Bambi..."<<endl;
                food+=15;
                cout<<"Food Acquired: "<<endl;
                cout<<food<<endl;
                days-=5;
                cout<<"Days left: "<<days<<endl;
                con();
                cin.ignore();
                }  
             }
           
        
        else if (dec=='C'){
            
            if(lck>=3){
            cout<<"Success!";
                food+=15;
                cout<<"Food Acquired: "<<endl;
                cout<<food<<endl;
                days-=3;
                cout<<"Days left: "<<days<<endl;
                con();
                cin.ignore();
            }
             else{
                food+=10;
                days-=8;
                cout<<"Failure: Luck too low";
                cout<<"THOSE WERE POISONOUS BERRYS! You must wait a while to";
                cout<<" recover!"<<endl;
                cout<<"Food Acquired: "<<food<<endl;
                cout<<"Days left: "<<days<<endl;
                con();
                cin.ignore();
             }
           
        }
        
        else{
            cout<<"Invalid Answer: Please Select the A,B,or C"<<endl;
            cin>>dec;
        }
        
        {if (days<=0||food<=0){
            cout<<"Game Over: Ran out of food or time... or both."<<endl;
        
        con();
        cin.ignore();
        return 0;}
        }
        

        
       cout<<"New Day... Boring day"<<endl;
       food-=1;
       days-=1;
       cout<<"Food left: "<<food<<endl;
       cout<<"Days left: "<<days<<endl;
       con();
       cin.ignore();
        
       {if (days<=0||food<=0){
            cout<<"Game Over: Ran out of food or time... or both."<<endl;
        
        con();
        cin.ignore();
        return 0;}
        }
        
       cout<<"New Day... Uneventful"<<endl;
       food-=1;
       days-=1;
       cout<<"Food left: "<<food<<endl;
       cout<<"Days left: "<<days<<endl;
       con();
       cin.ignore();
       
       {if (days<=0||food<=0){
            cout<<"Game Over: Ran out of food or time... or both."<<endl;
        
        con();
        cin.ignore();
        return 0;}
        }
       
       cout<<"New Day... Almost there!"<<endl;
       food-=1;
       days-=1;
       cout<<"Food left: "<<food<<endl;
       cout<<"Days left: "<<days<<endl;
       con();
       cin.ignore();
        
       {if (days<=0||food<=0){
        cout<<"Game Over: Ran out of food or time... or both."<<endl;
        
        con();
        cin.ignore();
        return 0;}
        }
        cout<<"You're near the border but you see a group of people up ahead";
        cout<<". They look like unsavory characters..."<<endl;
        cout<<"Do you.."<<endl;
        cout<<"[A] Go talk to them... what's the worst that can happen?"<<endl;
        cout<<"[B] Fight them! Why? Because Bear Grylls told me so!"<<endl;
        cout<<"[C] Speed the Wagon Past them. I know I'm Faster!"<<endl;
        cin>>dec;
        
        if(dec=='A'){
             if(lck>=3){
                
                cout<<"Turns out they were government agents selling plots of";
                cout<<" land";
                cout<<". You buy one immediately for cheap."<<endl;
                food-=1;
                cout<<"Food left: "<<endl;
                cout<<food<<endl;
                days-=1;
                cout<<"Days left: "<<days<<endl;
            }
        
            else {
                cout<<"Well, they weren't friendly. They took your food";
                cout<<" and kept you tied up for a while!"<<endl;
                food-=1;
                cout<<"Food left: "<<endl;
                cout<<food<<endl;
                days-=5;
                cout<<"Days left: "<<days<<endl;
                        
            }
            }
    
        else if(dec=='B') {
            
       
            if(str>=3){
               cout<<"After going Bruce Lee on those bandits you go on your ";
               cout<<"merry way with extra food!"<<endl;
               food+=5;
               cout<<"Food Acquired:"<<endl;
               cout<<food<<endl;
               days-=1;
               cout<<"Days left: "<<days<<endl;
               con();
               cin.ignore();
            }
                
               else{
                cout<<"Failure: Strength too low"<<endl;
                cout<<"As you heroically charged at them you ran into a tree ";
                cout<<"branch... then they robbed you. the bandits not the ";
                cout<<"tree..."<<endl;
                food-=5;
                cout<<"Food left: "<<endl;
                cout<<food<<endl;
                days-=5;
                cout<<"Days left: "<<days<<endl;
                con();
                cin.ignore();
                }  
             }
           
        
        else if (dec=='C'){
            
            if(agl>=3){
              
               cout<<"You knew someday those wagon races would pay off"; 
               cout<<" eventually! You rode so hard you made up for";
               cout<<" two days!"<<endl;
               food-=1;
               cout<<"Food left: "<<endl;
               cout<<food<<endl;
               days+=2;
               cout<<"Days left: "<<days<<endl;
               con();
               cin.ignore();
            }
             else{
                 food-=5;
                 days-=5;
                 cout<<"Failure: Agility too low"<<endl;
                 cout<<"Cut back on the snickers... you thought you were";
                 cout<<" racing past the bandits... but your wagon got";
                 cout<<" stuck in the mud!"<<endl;
                 cout<<"Food left: "<<food<<endl;
                 cout<<"Days left: "<<days<<endl;
                 con();
                 cin.ignore();
             }
           
        }
        
        else{
            cout<<"Invalid Answer: Please Select the A,B,or C"<<endl;
            cin>>dec;
        }
        
        {if (days<=0||food<=0){
            cout<<"Game Over: Ran out of food or time... or both."<<endl;
        
        con();
        cin.ignore();
        return 0;}
        }
        
       cout<<"New Day... You see the finish line!"<<endl;
       food-=1;
       days-=1;
       cout<<"Food left: "<<food<<endl;
       cout<<"Days left: "<<days<<endl;
       con();
       cin.ignore();
        
       {if (days<=0||food<=0){
           cout<<"You were so close! Almost there. Too bad..."<<endl;
           cout<<"Game Over: Ran out of food or time... or both."<<endl;
      
        
        con();
        cin.ignore();
        return 0;}
        }
       
       cout<<"Congrats! You finally made it to your new homestead!"<<endl;
       cout<<"After tiresome journey you finally made it!"<<endl;
       cout<<"Now build your homestead and avoid getting eaten by a bear"<<endl;
       cout<<"WINNER: GAME OVER :WINNER"<<endl;
       if(food>=10)
           cout<<"Looks like you have a surplus off food!"<<endl;
       if (food<10)
           cout<<"Winter is coming. Good luck on the food"<<endl;
    
   

    }
    
                
        return 0;
    }

void con(){
    cout<<"Press enter to continue..."<<endl;
    cin.ignore();
}

