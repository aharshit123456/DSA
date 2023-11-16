#include <iostream>
#include <numeric>
#include <ctime>
#include <cmath>
#include <limits>

using namespace std;

//
//class Shape{
//public:
//    virtual double Area() = 0;
//};
//
//class Circle : public Shape{
//protected:
//    double width;
//public:
//    Circle(double w){
//        width = w;
//    }
//    double Area() override{
//        return 3.14159 * pow((width/2),2);
//    }
//
//};
//
//int imGlobal = 0;
//const double PI = 3.141;
//
//void ShowArea(Shape& shape);


struct Shape{
    double length, width;
    Shape(double l=1, double w =1){
        length = l;
        width = w;
    }
    double Area(){
        return length * width;
    }

private:
    int id;
};

struct Circle : Shape{
    // Override the constructor
    // You also use this with structs
    Circle(double width){
        this->width = width;
    }

    // Override Area()
    double Area(){
        return 3.14159 * pow((width / 2), 2);
    }
};

int main(int argc, char** argv)
{
    // Create a struct
    Shape shape(10, 10);

    // Call a Struct function
    cout << "Square Area : " << shape.Area()
            << endl;

    // Create a struct
    Circle circle(10);

    // Call a Struct function
    cout << "Circle Area : " << circle.Area()
            << endl;

//    cout << "Hello world!" << endl;
//    bool married = true;
//    char myGrade = 'A';
//
//    cout << "Min float " <<
//            numeric_limits<float>::min()
//            << endl;

//    cout << "int Byte: " << sizeof(float) << endl;
//
//    printf( "%c %d %5d %.3f %s \n", 'A', 10, 5, 3.124, 'Hi');
//    string q1 = "Enter a number: ";
//    string num1, num2;
//    cout << q1;
//    cin >> num1;
//    cout << "Enter another number: ";
//    cin >> num2;
//    int nNum1 = stoi(num1);
//    int nNum2 = stoi(num2);
//    printf("%d + %d = %d \n", nNum1, nNum2, (nNum1+nNum2));


//    Circle circle(10);
//    ShowArea(circle);


    return 0;
}
//
//void ShowArea(Shape& shape){
//    cout << "Area : " << shape.Area() << endl;
//}

