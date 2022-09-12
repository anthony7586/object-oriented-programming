//anthony ruiz
//CPSC 121 Lab 7
// 03/25/19

/*this is a simulation of a video game where two gladiators fight*/

#include<iostream>
#include<iomanip>
#include<random>
#include<string>
using namespace std;






struct gladiator {
  string name;
  double maxHealth;
  double currentHealth;
  double evasion;
  double critical;
  double minDamage;
  double damageRange;
};









int main()
{

//variables
string gladiator1, gladiator2;
int rStatsOk=0;
int playerOneStats=1,playerTwoStats=1;
int rematch;
int newfightergame;

//prototypes
gladiator createGladiator(string);
void showStats(gladiator);
gladiator taketurn(gladiator attacker, gladiator &defender);
//end of prototypes


//tags for the strucrture
gladiator gladiatorOne;
gladiator gladiatorTwo;
gladiator rematchCharacterTwo;
gladiator rematchCharacterOne;
//end of tags for structures




cout << "You're about to host a fight! good luck!\n";

cout << "what will be the name of your first gladiator?"<< endl;//gladiator 2
getline(cin,gladiator1);//gets name
cout<< endl;
gladiatorOne = createGladiator(gladiator1);//assigns stats to gladiator 1
rematchCharacterOne = gladiatorOne;//makes a copy of the structure to be used in rematch
cout<<endl;


cout << "what will be the name of your second gladiator?"<<endl;//gladiator 1
getline(cin,gladiator2);//gets name
cout<< endl;
gladiatorTwo = createGladiator(gladiator2);//assigns stats to gladiator 2
rematchCharacterTwo = gladiatorTwo;//makes a copy of the structure to be used in rematch
//insert function to display stats
cout<<endl;


showStats(gladiatorOne);
showStats(gladiatorTwo);
cout<< endl;


//cheching if player stats are ok
do{
cout<< "Are the stats for "<< gladiatorOne.name<< " ok?\n";
cout<< "(0 = Yes ,1 = No )\n";
cin >>rStatsOk;
playerOneStats= rStatsOk;
    if (rStatsOk == 1)
    {
      gladiatorOne = createGladiator(gladiator1);
      rematchCharacterOne = gladiatorOne;
    }
cout << endl;

cout<< "Are the stats for "<< gladiatorTwo.name<< " ok?\n";
cout<< "(0 = Yes ,1 = No )\n";
cin >>rStatsOk;
playerTwoStats=rStatsOk;
    if (rStatsOk == 1)
    {
      gladiatorTwo = createGladiator(gladiator2);
      rematchCharacterTwo = gladiatorTwo;
    }

cout << "\nYour new stats are...\n";
showStats(gladiatorOne);
showStats(gladiatorTwo);
}while (playerOneStats == 1 || playerTwoStats==1);//loops until players are satisfied with stats.

/********************************************************
                    both of the gladiators have been created
*********************************************************/

cout<<"\n\n";
cout<<"   ******  *   *******  *    *  ********   **\n";
cout<<"   *       *   *        *    *     **      **\n";
cout<<"   ******  *   *   ***  ******     **      **\n";
cout<<"   *       *   *     *  *    *     **      **\n";
cout<<"   *       *   *******  *    *     **        \n";
cout<<"                                           **\n\n\n";

do {
taketurn(gladiatorOne, gladiatorTwo);
showStats(gladiatorTwo);
if (gladiatorTwo.currentHealth <= 0)
{
  break;
}

taketurn(gladiatorTwo, gladiatorOne);
showStats(gladiatorOne);


}while(gladiatorOne.currentHealth > 0 && gladiatorTwo.currentHealth > 0);


cout<< "\n\n would you like a rematch? With the same characters?( 1 = yes,2 = no)";
cin >> rematch;
cout << "\nwould you like a game with new fighters?(1=yes, 2=no)\n";
cin >> newfightergame;
cout << endl;
//starting a new game with different fighters
//start of new fighter loop
while (newfightergame == 1){
cout << "what will be the name of your first gladiator?"<< endl;//gladiator 2
getline(cin,gladiator1);//gets name
cout<< endl;
gladiatorOne = createGladiator(gladiator1);//assigns stats to gladiator 1
rematchCharacterOne = gladiatorOne;//makes a copy of the structure to be used in rematch
cout<<endl;


cout << "what will be the name of your second gladiator?"<<endl;//gladiator 1
getline(cin,gladiator2);//gets name
cout<< endl;
gladiatorTwo = createGladiator(gladiator2);//assigns stats to gladiator 2
rematchCharacterTwo = gladiatorTwo;//makes a copy of the structure to be used in rematch
//insert function to display stats
cout<<endl;


showStats(gladiatorOne);
showStats(gladiatorTwo);
cout<< endl;


//cheching if player stats are ok
do{
cout<< "Are the stats for "<< gladiatorOne.name<< " ok?\n";
cout<< "(0 = Yes ,1 = No )\n";
cin >>rStatsOk;
playerOneStats= rStatsOk;
    if (rStatsOk == 1)
    {
      gladiatorOne = createGladiator(gladiator1);
      rematchCharacterOne = gladiatorOne;
    }
cout << endl;

cout<< "Are the stats for "<< gladiatorTwo.name<< " ok?\n";
cout<< "(0 = Yes ,1 = No )\n";
cin >>rStatsOk;
playerTwoStats=rStatsOk;
    if (rStatsOk == 1)
    {
      gladiatorTwo = createGladiator(gladiator2);
      rematchCharacterTwo = gladiatorTwo;
    }

cout << "\nYour new stats are...\n";
showStats(gladiatorOne);
showStats(gladiatorTwo);
}while (playerOneStats == 1 || playerTwoStats==1);//loops until players are satisfied with stats.

/********************************************************
                    both of the gladiators have been created
*********************************************************/

cout<<"\n\n";
cout<<"   ******  *   *******  *    *  ********   **\n";
cout<<"   *       *   *        *    *     **      **\n";
cout<<"   ******  *   *   ***  ******     **      **\n";
cout<<"   *       *   *     *  *    *     **      **\n";
cout<<"   *       *   *******  *    *     **        \n";
cout<<"                                           **\n\n\n";

do {
taketurn(gladiatorOne, gladiatorTwo);
showStats(gladiatorTwo);
if (gladiatorTwo.currentHealth <= 0)
{
  break;
}

taketurn(gladiatorTwo, gladiatorOne);
showStats(gladiatorOne);


}while(gladiatorOne.currentHealth > 0 && gladiatorTwo.currentHealth > 0);


cout<< "\n\n would you like a rematch? With the same characters?( 1 = yes,2 = no)";
cin >> rematch;
cout << "\nwould you like a game with new fighters?(1=yes, 2=no)\n";
cin >> newfightergame;
cout << endl;

}//end of new fighter loop


//ending of new fighter game



while(rematch == 1)//this will be the rematch
{

  cout<<"\n\n";
  cout<<"   ******  *   *******  *    *  ********   **\n";
  cout<<"   *       *   *        *    *     **      **\n";
  cout<<"   ******  *   *   ***  ******     **      **\n";
  cout<<"   *       *   *     *  *    *     **      **\n";
  cout<<"   *       *   *******  *    *     **        \n";
  cout<<"                                           **\n\n\n";

  do {
  taketurn(rematchCharacterOne, rematchCharacterTwo);
  showStats(rematchCharacterTwo);
    if (rematchCharacterTwo.currentHealth <= 0)
    {
      break;
    }
  taketurn(rematchCharacterTwo, rematchCharacterOne);
  showStats(rematchCharacterOne);

}while(rematchCharacterOne.currentHealth > 0 && rematchCharacterTwo.currentHealth > 0);


  cout<< "\n\n would you like a rematch? With the same characters?( 1 = yes,2 = no)";
  cin >> rematch;


}









return 0;
}



/**********************************************************************
                      start of function defenitions
***********************************************************************/


gladiator createGladiator(string gladname)
{
  gladiator gladiatorOne;//structure tag.
/* random number generator */
  default_random_engine myEngine {random_device{}()};
  uniform_int_distribution<int> onetothreeDistribution {1,3};
  uniform_int_distribution<int> eighttoforteenDistribution {8,14};
  uniform_int_distribution<int> sixttwentDistribution {16,22};
/* end of the  random number generator*/

 //temorary structure variable
int randomNum;//stores a random number

/*****************************************************************************/
                                //getting name
gladiatorOne.name = gladname;//passing the name to the structure
/*****************************************************************************/
                                //getting health
randomNum = onetothreeDistribution(myEngine);//generates a random number to pick health
  if (randomNum==3){ gladiatorOne.maxHealth = 250;}//picks a health
  if (randomNum==2){ gladiatorOne.maxHealth = 200;}//picks a health
  if (randomNum==1){ gladiatorOne.maxHealth = 150;}//picks a health
gladiatorOne.currentHealth = gladiatorOne.maxHealth;
/*****************************************************************************/
                                //getting crit
randomNum = onetothreeDistribution(myEngine);//gets new random number
  if(randomNum == 1){ gladiatorOne.critical = 5;}//picks a percentage of critical damage
  if(randomNum == 2){ gladiatorOne.critical = 10;}//picks a percentage of critical damage
  if(randomNum == 3){ gladiatorOne.critical = 15;}//picks a percentage of critical damage
  /*****************************************************************************/
                                  //getting min damage
gladiatorOne.minDamage = eighttoforteenDistribution(myEngine);
/*****************************************************************************/
                                //getting damage range
gladiatorOne.damageRange = sixttwentDistribution(myEngine);
return  gladiatorOne; //returns the temporary strucrture variable where everything is stored
}






/*****************************************************************************
                            end of create gladiator function
*****************************************************************************/

/*****************************************************************************
                            start of show stats function
*****************************************************************************/






void showStats(gladiator TempStruct)
{

cout <<"Stats for: " << endl;

cout <<"Name: "<< TempStruct.name << endl;
cout <<"Health: "<< TempStruct.currentHealth <<endl;
cout <<"Critical: "<< TempStruct.critical <<"%"<< endl;
cout <<"Min Damage: "<<TempStruct.minDamage << endl;
cout <<"Damage Range: "<<TempStruct.damageRange <<endl;
cout <<"\n\n";
}
/*****************************************************************************/
                            //end of show stats function
/*****************************************************************************/
gladiator taketurn(gladiator attacker, gladiator &defender)
{
default_random_engine myEngine {random_device{}()};
uniform_int_distribution<int> onetotwoDistribution {1,2};
uniform_int_distribution<int> hundredDistribution {1,100};

int evaluator;//this willl evaluate what happns
int actualDamage; //holds value of the damage about to be inflicted
int numberOneToHundred;//holds a value from one to one hundred
evaluator = onetotwoDistribution(myEngine);


if (evaluator == 1)//you will miss
{
  cout<< endl<< attacker.name <<"! You missed!\n";

}
if (evaluator == 2)//you will hit
{
numberOneToHundred = hundredDistribution(myEngine);

      if (numberOneToHundred <=  attacker.critical)
      {
      actualDamage = attacker.minDamage * 2;
      defender.currentHealth = defender.currentHealth - actualDamage;
      cout << "Its a hit!\n";
      if (defender.currentHealth <= 0)
      {
        cout << attacker.name <<" you win!!\n";
      }
      }

      else
      {
        cout << "Its a hit!\n";
        defender.currentHealth = defender.currentHealth - attacker.minDamage;
        if (defender.currentHealth <= 0)
        {
          cout << attacker.name <<" you win!!\n";
        }
      }

}




return defender;
}
