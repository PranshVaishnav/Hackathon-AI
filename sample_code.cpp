#include <iostream>
using namespace std;

class myClass {  // Should be PascalCase
public:
    int SomeVariable;    // OK
    int BadVariableName;  // Should be snake_case or camelCase
    
    void SomeFunction() {  // Should be camelCase or snake_case
        int* m_ptr = new int(42);  // Raw pointer usage
        cout << *m_ptr << endl;    
        delete m_ptr;              
    }
    void Another_Function_With_Very_Long_Name_That_Exceeds_One_Hundred_And_Twenty_Characters_Which_Is_Too_Long() {
     
        int m_variable_with_trailing_spaces = 5;
        
        char* buffer = (char*)malloc(100);  // Raw malloc
        free(buffer);                       // Raw free
    }
};

int GlobalConstant = 100;  // Should be UPPER_SNAKE_CASE

void global_function() {   // OK - snake_case
    // Function body
}
