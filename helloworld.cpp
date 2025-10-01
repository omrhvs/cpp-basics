#include <iostream>
#include <vector> // To explain typedefs and aliases.

typedef std::vector<std::pair<std::string, int>> // We can use typedefs to create a new name for a complex type. Notice, we dont end the line with a semicolon here.
    pairlist_t; // Now we can use StringIntPairList instead of writing the full type every time. We end the line with a semicolon here. Also notice the _t suffix, which is a common convention for typedefs and aliases.

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

    
    /*
        Typedefs and aliases.
        Reserved keywords that allow us to create new names (aliases) for existing types.
        A new identifier for an existing type that helps make code more readable and reduce type errors.
    */
    pairlist_t pairlist = { {"Omar", 22}, {"Alice", 23}, {"Bob", 24} }; // Now we can use pairlist_t instead of writing the full type every time.

    // A simpler example of typedefs and aliases:
    typedef std::string text_t;

    // Instead of writing std::string, we can now use text_t. This variable behaves exactly like a std::string.
    text_t city = "New York";
    std::cout << "City: " << city << '\n';

    // With integers:
    typedef int number_t;
    number_t luckyNumber = 7;
    std::cout << "Lucky Number: " << luckyNumber << '\n';

    // We can also use the "using" keyword to create type aliases, which is more modern and preferred in C++11 and later. Works better with templates.
    using decimal_t = double; // This creates a new name "decimal_t" for the type "double".
    using character_t = char; // This creates a new name "character_t" for the type "char".
    using boolean_t = bool; // This creates a new name "boolean_t" for the type "bool".
    using integer_t = int; // This creates a new name "integer_t" for the type "int". And so on.

    return 0;
}