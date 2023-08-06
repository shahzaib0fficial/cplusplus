#include <iostream>
#include<math.h>

const float pi = 3.1415;

using namespace std;

class Shape
{
public:
    virtual void display(float){};
    virtual void display(float,float){};
    virtual float getArea() = 0;
    virtual float getVolume(){};
};

class TwoDimentionalShape : public Shape
{
public:
    void display(float Area)
    {
        cout<<"Area = "<<Area<<endl;
    }
};
class ThreeDimentionalShape : public Shape
{
public:
    void display(float Area,float Volume)
    {
        cout<<"Area = "<<Area<<endl;
        cout<<"Volume = "<<Volume<<endl;
    }
};

class Circle : public TwoDimentionalShape
{
    float radius,Area;
public:
    float getArea()
    {
        cout<<"Enter Radius: ";
        cin>>radius;
        Area = pi*(radius*radius);
        return Area;
    }
};
class Square : public TwoDimentionalShape
{
    float side,Area;
public:
    float getArea()
    {
        cout<<"Enter Side: ";
        cin>>side;
        Area = side*side;
        return Area;
    }
};
class Triangle : public TwoDimentionalShape
{
    float height,base,Area;
public:
    float getArea()
    {
        cout<<"Enter base: ";
        cin>>base;
        cout<<"Enter height: ";
        cin>>height;
        Area = (1/2.0)*(base*height);
        return Area;
    }
};

class Sphere : public ThreeDimentionalShape
{
    float Area,radius,Volume;
public:
    float getArea()
    {
        cout<<"Enter Radius: ";
        cin>>radius;
        Area = 4*pi*(radius*radius);
        return Area;
    }
    float getVolume()
    {
        cout<<"Enter Radius: ";
        cin>>radius;
        Volume = (4/3.0)*pi*(radius*radius*radius);
        return Volume;
    }
};
class Cube : public ThreeDimentionalShape
{
    float edge,Area,Volume;
public:
    float getArea()
    {
        cout<<"Enter Edge: ";
        cin>>edge;
        Area = 6*(edge*edge);
        return Area;
    }
    float getVolume()
    {
        cout<<"Enter Edge: ";
        cin>>edge;
        Volume = (edge*edge*edge);
        return Volume;
    }
};
class Tetrahedron : public ThreeDimentionalShape
{
    float edge,Area,Volume;
public:
    float getArea()
    {
        cout<<"Enter Edge: ";
        cin>>edge;
        Area = sqrt(3)*(edge*edge);
        return Area;
    }
    float getVolume()
    {
        cout<<"Enter Edge: ";
        cin>>edge;
        Volume = (1/(6*sqrt(2)))*(edge*edge*edge);
        return Volume;
    }
};

int main()
{
    Shape* arr[6];
    Circle c;
    Square s;
    Triangle t;
    Sphere sp;
    Cube cu;
    Tetrahedron te;

    float Area,Volume;

    arr[0] = &c;
    Area = arr[0]->getArea();
    arr[0]->display(Area);

    arr[1] = &s;
    Area = arr[1]->getArea();
    arr[1]->display(Area);

    arr[2] = &t;
    Area = arr[2]->getArea();
    arr[2]->display(Area);

    arr[3] = &sp;
    Area = arr[3]->getArea();
    Volume = arr[3]->getVolume();
    arr[3]->display(Area,Volume);


    arr[4] = &cu;
    Area = arr[4]->getArea();
    Volume = arr[4]->getVolume();
    arr[4]->display(Area,Volume);

    arr[5] = &te;
    Area = arr[5]->getArea();
    Volume = arr[5]->getVolume();
    arr[5]->display(Area,Volume);
}
