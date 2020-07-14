#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <algorithm>
#include <iterator>
#include <cstdlib>
#include <limits>
#include <sstream>
#include <numeric>
#include <cmath>
#include <ctime>

using namespace std;

//tutorial for Snakeyboi on C++
//Most to all code inspired by Derek Banas's "C++ Programming" youtube videos and c++.com's tutorials.

int global = 0;

//functions
int yeet (string input) {
    cout<<"In this world, it's yeet or be yeeted, " << input <<"."<<endl;
}
void iamthesenate() {
    cout<<"I am the senate!"<<endl;
}

int main()
{
    int six = 6;
    int years_before_LU_comes_back=500;
    years_before_LU_comes_back+=six;
    string will_LU_come_back="maybe";
    string will_fans_never_stop_asking="yes";
    int nimbus_station = 1;
    int gnarly_forest = 2;
    int ninja_town = 3;
    int world = 1;
    int noob, pro, champion;

    //print out
    cout << "Hello there." << endl;
    cout << "Ah, General Kenobi." << endl;
    cout << " " << endl;

    //math
    cout << "66+21-47 = " << 66+21-47 <<endl;
    cout << "10/2 = " << 10/2 <<endl;
    cout << "10*2 = " << 10*2 <<endl;
    cout << " " << endl;

    //variables
    cout << six << endl;
    cout << years_before_LU_comes_back << endl;

    cout << "10/20 = " << (float) 10/20 <<endl;

    //Logic
    cout << "&& and || or ! not" << endl;
    cout <<"PERSOOOONA!" << endl;
    cout << " " << endl;

    //if-else
    if((will_LU_come_back=="maybe")&&(will_fans_never_stop_asking=="yes")){

        cout << "Lego Universe maybe will come back soon soon" << endl;
    } else {

        cout << "Lego Universe is ripperoni pepperoni" << endl;
    }

    cout << " " << endl;

    //switch
    switch(world){

    case 1:
        cout<<"Talk, shop, and chill."<<endl;
        break;
    case 2:
        cout<<"Be a pirate."<<endl;
        break;
    case 3:
        cout<<"Be a ninja."<<endl;
        break;

    default:
        cout<<"Fight Maelstrom"<<endl;
        break;
    }

    //ternaryoperater
    //variable = (condition) ? true : false
    int largest_num = (5>2) ? 5:2;
    int how_use_ternary_operator = (world==1) ? 2:3;
    cout << how_use_ternary_operator << endl;
    int how_use_ternary_operator_2 = (world==2) ? 2:3;
    cout << how_use_ternary_operator_2 << endl;
    cout << " " << endl;

    //arrays
    int numbers[5] = {1, 2, 3, 4, 5};
    cout<<"From an array:" <<numbers[0]<<endl;
    char words[4][8] ={{'Y','e', 'e', 't'},{'S','e','n','t','i','n','e','l'}};
    cout<<"[0][0]:"<<words[0][0]<<endl;
    cout<< "[1][0]:"<<words[1][0]<<endl;
    cout<< "[0][1]:"<<words[0][1]<<endl;
    for (int i = 5 - 1; i >= 0; i--){
    cout << numbers[i]<<endl;
}
    cout << " " << endl;
    cout<<"yeet";
    cout<<"pog"<<endl;

    //inputs
    //cin>>noob;
    //cin>>pro;
    //champion+=noob;
    //champion+=pro;
    //cout<<champion<<endl;
    //Works just don't feel like typing the input a million times

    //got bored
    cout<<"...............................\n"
    "...............................\n"
    "...............................\n"
    ".......  ..............  ......\n"
    "...............................\n"
    "..... .................... ....\n"
    "......                    .....\n"
    "...............................\n"
    "..............................."<<endl;

    float f1 =1.1111111;
    float f2 = 1.1111111;
    printf("Sum = %.7f\n", (f1 + f2));

    double f3 =1.1111111111111111;
    double f4 = 1.1111111111111111;
    printf("Sum = %.16f\n", (f3 + f4));

    cout << sizeof("Yeet") << endl;
    cout << sizeof("Lego Universe") << endl;

    //getline>cin apparently
    //string mrstring;
    //cout << "And who are you? ";
    //getline (cin, mrstring);
    //cout << "You're far away from your homeland, Mr." <<mrstring<< ".\n";

    //functions
    yeet("Mr. Bean");
    iamthesenate();

    return 0;
}
