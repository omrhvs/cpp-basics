#include <iostream>

int main() {

    // This is a comment
    /*
         This is a 
         multi-line
         comment
    */

    std::cout << "Hello, World!" << std::endl;
    std::cout << "My name is Omar." << std::endl;

    // Variable declaration
    int x;
    // Variable assignation
    x = 27;
    std::cout << x << '\n';

    // Variable declaration and assignation
    int y = 3;
    std::cout << y << '\n';

    int sum = x + y;
    std::cout << sum << '\n';

    /*
        Data types in C++:
    */

    // Integers (whole numbers)
    int age = 22;
    std::cout << "Age: " << age << '\n';
    
    // String (text)
    std::string name = "Omar";
    std::cout << "Name: " << name << '\n';  
    
    // Floating point numbers (decimal numbers)
    float gpa = 3.5;
    std::cout << "GPA: " << gpa << '\n';
    
    // Double (more precise floating point numbers)
    double gpa2 = 3.5555555555;
    std::cout << "GPA2: " << gpa2 << '\n';
    
    // Character (single letters and symbols)
    char grade = 'A';
    std::cout << "Grade: " << grade << '\n';
    
    // Boolean (true or false)
    bool isMale = true;
    std::cout << "isMale: " << isMale << '\n';
    
    std::cout << name << " is " << age << " years old. He has a GPA of " << gpa << ", " <<  gpa2 << " specifically. His Grade is " << grade << "." << '\n';

    /*
        Constants.

        A constant is a variable that cannot be changed after it is assigned. (readly only variable)
    */
    const float PI = 3.14; // PI cannot be changed after this line. Also, constants are usually written in uppercase letters.
    float radius = 5.0;
    float circumference = 2 * PI * radius;
    std::cout << "Circumference is " << circumference << "cm." << '\n';


    // So, constants are variables that cannot be changed after they are assigned. Like formula constants, screen resolution, etc.
    const int SCREEN_WIDTH = 800;
    const int SCREEN_HEIGHT = 600;
    std::cout << "Screen resolution is " << SCREEN_WIDTH << "x" << SCREEN_HEIGHT << "." << '\n';
    

    return 0;
}