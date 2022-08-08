//
// Created by Sg on 03.08.2022.
//
#include <string>
#include <iostream>
#include <cmath>
#include <limits>
#pragma once
using namespace std;

template<typename T>
void enterValue(T &n, T min = numeric_limits<T>::min(), T max = numeric_limits<T>::max());

class Figure
{
    string color;
    int x = 0;
    int y = 0;
    void showCoordinatesCentre() const;
    void showColor() const;
    void showSquare() const;
    void showSquareRectangle() const;
    virtual double square() const;
    virtual double squareRectangle() const;

public:
    Figure();

    virtual void showInfo();
};
class Circle:public Figure
{
    double R = 0;
    double square() const override;
    double squareRectangle() const override;
public:
    void showInfo() override;

    Circle();
};
class Rectangle:public Figure
{
    double a = 0;
    double b = 0;
    double square() const override;
    double squareRectangle() const override;
public:
    void showInfo() override;

    Rectangle();

};
class Square:public Figure{
    double a = 0;
    double square() const override;
    double squareRectangle() const override;
public:
    void showInfo() override;

    Square();
};
class EquilateralTriangle:public Figure{
    double a = 0;
    double square() const override;
    double squareRectangle() const override;
public:
    void showInfo() override;

    EquilateralTriangle();
};
class someFigure{
    Figure* myFigure = nullptr;
public:
    void showInfo();
    bool empty();
    void setFigureType(Figure* myF);
    ~someFigure(){
        delete myFigure;
        myFigure = nullptr;
    }
};
