#include<iostream>
#include<stdio.h>
#include<string>
#include<cmath>
#include<cstdlib>
#include<ctime>

//
using namespace std;

//các struct của xúc xắc (mẫu)
struct dice 
{
    int number;
    void print()
    {
        switch (number)
    {
    case 1:
        cout << "*\n";
        break;
    case 2:
        cout << "* *\n";
        break;
    case 3:
        cout << "* * *\n";
        break;
    case 4:
        cout << "* *\n"
             << "* *\n";
        break;
    case 5:
        cout << "* *\n"
             << " * \n"
             << "* *\n";
        break;
    case 6:
        cout << "* *\n"
             << "* *\n"
             << "* *\n";
        break;
    }
};

struct attackerdice
{
    int atktype;
    int atkpts;
    void print()
    {
        switch (atktype);
        {
        case 1:
            cout<<"Berserker";
            break;
        case 2:
            cout<<"Archer";
            break;
        }
        case 3:
            cout<<"Cannon";
            break;
    }
};

struct defenderdice
{
    int deftype;
    int defpts;
    void print()
    {
        switch (deftype)
        {
        case 1:
            cout<<"Swordman";
            break;
        
        case 2:
            cout<<"Shield";
            break;
        }
        case 3:
            cout<<"Defensive Tower";
            break;
    }
};

void ClashGame()//cho vào file txt
{
    cout<<endl;
    cout<<"Demo CLASH"<<endl<<endl<<endl;
    cout<<"--------------------------"<<endl<<endl;
    cout<<"MENU"<<endl<<endl;
    cout<<"1.Instructions"<<endl;
    cout<<"2.Play"<<endl<<endl;
    cout<<"--------------------------"<<endl;
    cout<<"Type a number to choose: ";
}

void Print_Instructions() //cho vào file txt
{
    cout<<"Instructions"<<endl;
    cout<<"----------------------------"<<endl;
    cout<<"This is a small Turn-based game between 2 players (Person vs Computer)."<<endl;
    cout<<"You will have 4 dices to roll once per turn."<<endl;
    cout<<"The first dice is a three-face dice called -Attacker Recruit-.This one will recruit an attacker randomly in order to attack enemy base or defender."<<endl;
    cout<<"The second dice is a three-face dice called -Defender Recruit-.This one will recruit a defender randomly so you can fight against enemy attacker."<<endl<<endl;
    cout<<"And 2 more dices with a number from 1 to 6 symbolized by - * - will decide how much attacking damage and defensive damage you will have."<<endl;
    cout<<"----------------------------"<<endl;
    cout<<"Recruit dice instructions"<<endl<<endl;
    cout<<"There are 3 types of attacker you can recruit: Berserker,Archer and Cannon."<<endl;
    cout<<"And there are also 3 types of defender you may have: Swordman,Shield and Defensive Tower."<<endl<<endl;
    cout<<"The Berserker is a mad drengr (viking) using axes who can only be stopped by Swordman."<<endl;
    cout<<"The Archer use bow to attack from distance which can be blocked by Sheild."<<endl;
    cout<<"Defensive Tower is built to prevent massive damage from the Cannon."<<endl;
    //Đang viết dở
}
int main()
{
    ClashGame();
    int choose;
    cin>>choose;
    if(choose==2)
    {
        Print_Instructions();
        char is_back;
        cout<<"Back to menu?(y/n) : ";
        cin>>is_back;
        if(is_back=='y'||is_back=='Y')
        {
            ClashGame();
            continue;
        }
    }
    if(choose==1)
    {
        char is_continued;
        do
        {
            srand(time(0));
            playClash();
            cout<<"Do you want to play again?";
            cin>>is_continued;
        } while (is_continued=='y'||is_continued=='Y');
        ClashGame();
        continue;
    }
    //Có menu 2 chức năng:Đọc hướng dẫn và chơi.Nếu chơi xong hoặc đọc xong thì phải quay lại menu.
}
