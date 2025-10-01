#include <iostream>

/*
        Namespaces.
        A namespace is a container that holds a set of identifiers (names) and allows the organization of code into logical groups.
        In C++, the standard library is contained within the "std" namespace. This is why we use "std::cout" instead of just "cout".
        We can also use the "using namespace std;" directive to avoid having to prefix standard library identifiers with "std::".
        However, this is not recommended in larger projects as it can lead to name conflicts.
*/

// using namespace std; // Uncommenting this line would allow us to use cout, endl, string, etc. without the std:: prefix.

namespace myNamespaceA {
    int o = 42;
}

namespace myNamespaceB {
    int o = 100;
}

int main() {

    int o = 27;

    // If we don't use namespaces, we can access the variable "o" in the current scope.
    std::cout << o << '\n'; // Outputs 27
    std::cout << myNamespaceA::o << '\n'; // Outputs 42
    // The two '::' are called the scope resolution operator.
    std::cout << myNamespaceB::o << '\n'; // Outputs 100

    /*
        Entities can have the same name, as long as they are in different namespaces.
        If we declare "using namespace myNamespaceA;" here, then we can access "o" from myNamespaceA without the prefix.    

        A safer way to use namespaces is to use the "using" directive for specific identifiers, like this:
        using std::cout; // Now we can use cout without the std:: prefix and still avoid name conflicts with the large amount of identifiers in the std namespace.
    */





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