#include <iostream>
#include "figure.h"

int main() {

    while (true)
    {
        string command;
        cout << "---Figures---" << endl;
        cout << "Valid command format: '1'  for choose figure;" << endl;
        cout << "                      '2'  for exit."<< endl;
        cout << "Enter the command:";
        cin  >> command;
        system("cls");

        if(command == "1")
        {
            while (true)
            {
                cout << "---Choose figure---" << endl;
                cout << "Valid command format: '1'  for choose circle;" << endl;
                cout << "                      '2'  for choose rectangle;" << endl;
                cout << "                      '3'  for choose square;" << endl;
                cout << "                      '4'  for choose equilateral triangle;" << endl;
                cout << "                      '5'  for go to start menu."<< endl;
                cout << "Enter the command:";
                cin  >> command;
                system("cls");

                if(command == "5")
                    break;

                someFigure myFigure;

                if (command == "1")
                    myFigure.setFigureType(new Circle());
                else if (command == "2")
                    myFigure.setFigureType(new Rectangle());
                else if (command == "3")
                    myFigure.setFigureType(new Square());
                else if (command == "4")
                    myFigure.setFigureType(new EquilateralTriangle());

                if(!myFigure.empty())
                {
                    system("cls");
                    cout << "---Figure information---" << endl;
                    myFigure.showInfo();
                    system("pause");
                    system("cls");
                    break;
                }
            }
        }
        else if(command == "2")
            break;
    }
    cout << "---Bye, bye---" << endl;
    system("pause");
    return 0;
}
