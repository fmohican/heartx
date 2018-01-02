#include <iostream>
#include <cmath>
#include <cstdlib>
#include <clocale>
using namespace std;
int main()
{
    system("color 0D");
    double x, y, size=10;
    string acesta("You're my happiness");
    int print_line = 4;
    if (acesta.length() % 2 != 0) acesta += " ";
    for (x=0;x<size;x++)
    {
        for (y=0;y<=4*size;y++)
        {
            double dist1 = sqrt( pow(x-size,2) + pow(y-size,2) );
            double dist2 = sqrt( pow(x-size,2) + pow(y-3*size,2) );
            if (dist1 < size + 0.5 || dist2 < size + 0.5 ) {
                cout << "X";
            }
            else cout << ends;
        }
        cout<<"\n";
    }
    for (x=1;x<2*size;x++)
    {
        for(y=0;y<x;y++) cout << ends;
        for (y=0; y<4*size + 1 - 2*x; y++)
        {
            if (x >= print_line - 1 && x <= print_line + 1) {
                int temp = y - (4*size - 2*x - acesta.length()) / 2;
                if (temp < acesta.length() && temp >= 0) {
                    if (x == print_line) cout<<acesta[temp];
                    else cout << ends;
                }
                else cout << "X";
            }
            else cout << "X";
        }
        cout<<endl;
    }
    system("pause");
}
