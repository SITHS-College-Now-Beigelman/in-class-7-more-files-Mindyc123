//Mindy Chen 
//11.3.2024
//Lab 7 

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main ()
{
    ifstream inFile;
    ofstream outFile;

    //Set file variables

    double scoreOne;
    double scoreTwo;
    double scoreThree;
    double average;
    string player;

    //Set variable for all the scores and the player name

    inFile.open("game_scores.txt");
    outFile.open("statement.txt");

    for (int i = 0; i < 3; i++) //runs the code for three times
    {
        inFile >> player >> scoreOne >> scoreTwo >> scoreThree;

        average = ( scoreOne * 0.2 ) + ( scoreTwo * 0.3 ) + ( scoreThree * 0.5 );

        //Sets each score to the proper percent of total 

        outFile << player << ":" << endl;

        if ( average > 2000 )
            outFile << "Congrats! You are an Expert!" << endl;
        else if ( ( average > 1800) && ( average < 2000 ))
            outFile << "Master - Good Job!" << endl;
        else if ( ( average > 1500) && ( average < 1800 ))
            outFile << "Advanced - Good Job!" << endl;
        else if ( ( average > 1000) && ( average < 1500 ))
            outFile << "Intermediate" << endl;
        else if ( average < 1000 )
            outFile << "Beginner - Keep Practicing!" << endl;

        //Reads from the file and outputs the proper statements based on each average
    }
  
        inFile.close();
        outFile.close();

        //Closes both files

        return 0;
}
/*
Matt:
Intermediate
Soph:
Beginner - Keep Practicing!
Polly:
Beginner - Keep Practicing!
*/