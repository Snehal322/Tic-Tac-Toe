
// Tic tac game for two hum users


# include<iostream>

using namespace std;

//global variables

// char space[3][3] = {{'*'}};
char space[3][3] = {{'a', 'b', 'c'}, {'d', 'e', 'f'}, {'g', 'h', 'i'}};
int row;
int column;
char token = 'X';
bool draw = false;
string s1 = " ";
string s2 = " ";

void gameSpace()
{
    // creating 2d array for creating the diagram to play the game

    //int space[3][3] = {{'*', '*', '*'}, {'*', '*', '*'}, {{'*','*', '*'}};

    //string s1;
    //string s2;
    
    // creating structure fir the game

    cout << "       |       |       \n";
    cout << "   "<<space[0][0] << "   |   "<<space[0][1]<<"   |  "<<space[0][2]<<"    \n";
    cout << "       |       |       \n";
    cout << " --------------------- \n";
    cout << "       |       |       \n";
    cout << "   "<<space[1][0] << "   |   "<<space[1][1]<<"   |  "<<space[1][2]<<"    \n";
    cout << "       |       |       \n";
    cout << " --------------------- \n";
    cout << "       |       |       \n";
    cout << "   "<<space[2][0] << "   |   "<<space[2][1]<<"   |  "<<space[2][2]<<"    \n";
    cout << "       |       |       \n"<<endl;

}

void functionisValid()
{
    int digit;
    // Taking input from players

    if(token == 'X' )
    {
        cout<< s1 << " Please select your choice (1-9): " << endl;
        cin>> digit;
    }

    if(token == 'O' )
    {
        cout<< s2 << " Please select your choice (1-9) : " << endl;
        cin>> digit;
    }
    
    if( digit == 1)
    {
        row = 0;
        column = 0;

    }

    if( digit == 2)
    {
        row = 0;
        column = 1;

    }

    if( digit == 3)
    {
        row = 0;
        column = 2;

    }

    if( digit == 4)
    {
        row = 1;
        column = 0;

    }

    if( digit == 5)
    {
        row = 1;
        column = 1;

    }

    if( digit == 6)
    {
        row = 1;
        column = 2;

    }

    if( digit == 7)
    {
        row = 2;
        column = 0;

    }
    if( digit == 8)
    {
        row = 2;
        column = 1;

    }
    if( digit == 9)
    {
        row = 2;
        column = 2;

    }

    else if(digit <1 || digit >9)
    {
        cout << "Invalid ...! " <<endl;
    }

    // check if any empty space is present and replace it with X or O

    if(token =='X' && space[row][column]!='X' && space[row][column] !='O')
    {
        space[row][column] = 'X';

        token = 'O';
    }

    else if(token == 'O' && space[row][column] != 'X' && space[row][column] != 'O')
    {
        space[row][column] = 'O';

        token = 'X';
    }
    else
    {           // if no empty space
        cout << " There is no empty space .. " << endl;
        
        functionisValid();
        
    }
    gameSpace();

 }   // check if game is in progress and specify condition to win game

bool isGameon()
{
    for( int i =0; i<3; i++)
    {
            // check horizontal rows && vertical columns
        if( ((space[i][0] == space[i][1]) && ( space[i][0] == space[i][2]) ) || ( (space[0][i] == space[1][i]) && ( space[0][i] == space[2][i])) )
        {
            return true;
        }
    }

            // check for diagonal elements

    if( ( space[0][0] == space[1][1] && space[1][1] == space[2][2]) || ( space[0][2] == space[1][1] && space[1][1] == space[2][0]))
    {
        return true;
    }

        // check if game in process and all positions are occupied
    for( int i =0; i<3; i++)
    {
        for( int j =0; j<3; j++)
        {
            if( space[i][j] != 'X' && space[i][j] != 'O')
            { 
                return false;
            }
        }
    }

    // check if the game is tie
    draw = true;

    return false;
        
}


int main()
{
    cout<< " Enter the name of first player: \n";
    getline(cin, s1);

    cout<< " Enter the bame of second player : \n";
    getline(cin, s2);

    cout << s1 << " is player1 so they will get chance to play first"  << endl;

    cout << s2 << " is player2 so they will get chance to play after player1" <<endl;


    // the loop will iterate until the game is in progress 
    while(!isGameon())
    {
        //gameSpace();
        functionisValid();
        isGameon();

    }

    if( token == 'O' && draw == false )
    {
        cout <<  " Player" + s1 +" wins .. " << endl;
    }

    else if( token == 'X' && draw == false)
    {
        cout << " Player" + s2 + " wins .. " << endl;
    }
    else
    {
        cout<< " It is a tie .. " << endl;

    }
}



