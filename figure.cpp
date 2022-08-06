//
// Created by Sg on 03.08.2022.
//

#include "figure.h"
template<typename T>
void enterValue(T &n, T min, T max)
{
    n = max / 2;
    do
    {
        if(!cin || (n < min || n > max))
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(),'\n');
            cout << "-------------------Error----------------\n";
            cout << min << " < number diapason < " << max;
            cout << "\n-----------------------------------------\n";
            cout << "Repeat enter:";
        }

        cin>>n;
    }
    while(!cin || (n < min || n > max));
}
Figure::Figure()
{
    cout << "---Figure initialization---" << endl;
    cout << "Enter coordinates of the centre figure:" << endl;
    cout << "-Enter X:";
    enterValue(x);
    cout << "-Enter Y:";
    enterValue(y);
    while(true)
    {
        string s;
        cout << "Choose color: red, green, blue, yellow, black, brawn or white" << endl;
        cout << "-Enter figure color:";
        cin >> s;
        if(s == "red" || s == "green" || s == "blue" || s == "yellow" || s == "brawn" || s == "white")
        {
            color = s;
            break;
        }
    }
}
Circle::Circle() {
    cout << "Enter circle radius:";
    enterValue(R,0.0);
}
Square::Square() {
    cout << "Enter square side:";
    enterValue(a,0.0);
}
Rectangle::Rectangle() {
    cout << "Enter rectangle height:";
    enterValue(a,0.0);
    cout << "Enter rectangle length:";
    enterValue(b,0.0);
}
EquilateralTriangle::EquilateralTriangle() {
    cout << "Enter triangle side:";
    enterValue(a,0.0);
}
double Circle::square() const {
    return R*R*3.14;
}
double Circle::squareRectangle() const {
    return (R+R) * (R+R);
}

void Circle::showInfo() {
    cout << "Circle, radius " << R << endl;
    Figure::showInfo();
}

double Rectangle::square() const {
    return a * b;
}
double Rectangle::squareRectangle() const {
    return a * b;
}

void Rectangle::showInfo() {
    cout << "Rectangle " << a <<"x" << b << endl;
    Figure::showInfo();
}

double Square::square() const {
    return a * a;
}
double Square::squareRectangle() const {
    return a * a;
}

void Square::showInfo() {
    cout << "Square, side " << a << endl;
    Figure::showInfo();
}

double EquilateralTriangle::square() const {
    return a * a * sqrt(3) / 4;
}
double EquilateralTriangle::squareRectangle() const {
    return a * a * sqrt(3) / 2;
}

void EquilateralTriangle::showInfo() {
    cout << "Equilateral triangle, side " << a << endl;
    Figure::showInfo();
}

double Figure::square() const {
    return 0;
}
double Figure::squareRectangle() const {
    return 0;
}
void Figure::showCoordinatesCentre() const {
    cout << "Centre coordinates X:" << x << " Y:" << y << endl;
}
void Figure::showColor() const {
    cout << "Color:" << color << endl;
}
void Figure::showSquare() const {
    cout<<"Square:" << square() << endl;
}
void Figure::showSquareRectangle() const {
    cout<<"Rectangle square:" << squareRectangle() << endl;
}
void Figure::showInfo() {
    showCoordinatesCentre();
    showColor();
    showSquare();
    showSquareRectangle();
}
void someFigure::showInfo() {
    if (myFigure == nullptr) return;
    myFigure->showInfo();
}
void someFigure::setFigureType(Figure *myF) {
        myFigure = myF;
}

bool someFigure::empty() {
    if(myFigure == nullptr)
        return true;
    return false;
}
