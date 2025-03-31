#include <iostream>
#include <string>
#include <cstring>
#include <cmath>

using namespace std;

class TinyCalculator { /// Declare our class: TinyCalculator
private:
    /// Create private double variables to be our two operands.
    double a, b;

public:
    /// Create public methods for performing arithmetic operations.

    void getter() { 
        /// The getter method prompts the user to input the desired value for the operands.
        cout << "Please enter your first operand: ";
        cin >> a;
        cout << "Please enter your second operand: ";
        cin >> b;
    }

    double Addition() { 
        /// The Addition method performs the addition operation on the user-defined variables.
        return a + b;
    }

    double Subtraction() { 
        /// The Subtraction method performs and returns the subtraction operation on the user-defined variables.
        return a - b;
    }

    double Multiplication() { 
        /// The multiplication method performs and returns the multiplication operation on the user-defined variables.
        return a * b;
    }

    double Division() { 
        /// The division method performs and returns the division operation on the user-defined variables.
        return a / b;
    }

    double Modulo() { 
        /// The Modulo method performs and returns the modulo operation on the user-defined variables.
        /// This method also casts the double type of the variables to int types for the modulo operation.
        return static_cast<int>(a) % static_cast<int>(b);
    }
};

int main() { 
    /// Main function that implements our calculator.

    int x;
    char y;

    /// Initialize ints to keep track of operations.
    int adds = 0, subs = 0, mul = 0, div = 0, mod = 0;
    
    TinyCalculator cal; /// Create TinyCalculator object.

    /// Print out full menu.  
    cout << "                  SIMPLE CALCULATOR                     \n";
    cout << "======================================================\n";
    cout << "| Welcome to the Tiny Calculator                     |\n";
    cout << "| Please select an operation from the menu.          |\n";
    cout << "|====================================================|\n";
    cout << "| 1. |+| Perform Addition Calculation.              |\n";
    cout << "| 2. |-| Perform Subtraction Calculation            |\n";
    cout << "| 3. |x| Perform Multiplication Calculation         |\n";
    cout << "| 4. |÷| Perform Division Calculation               |\n";
    cout << "| 5. |%| Perform Modulo Calculation                 |\n";
    cout << "| 6. Quit                                           |\n";

    bool done = false; 
    /// This boolean is used as an exit for our do-while loop.
    /// When this boolean is set to true, we break from our loop.

    do { 
        /// Beginning of do-while loop.
        cout << "======================================================\n";
        cout << "Please enter number choice: ";
        cin >> x;
        cout << "======================================================\n";

        /// This switch statement is the central portion of our program.
        /// It takes input, prints messages to the user, tests input, and determines output.  
        switch (x) {
            case 1: /// This case handles addition.
                cout << "You have selected the addition feature.\n";
                cal.getter();
                cout << "The answer is: " << cal.Addition() << endl;
                adds++; /// Increase adds count.
                break;
            
            case 2: /// This case handles subtraction.
                cout << "You have selected the subtraction feature.\n";
                cal.getter();
                cout << "The answer is: " << cal.Subtraction() << endl;
                subs++; /// Increase subs count.
                break;
            
            case 3: /// This case handles multiplication.
                cout << "You have selected the multiplication feature.\n";
                cal.getter();
                cout << "The answer is: " << cal.Multiplication() << endl;
                mul++; /// Increase mul count.
                break;
            
            case 4: /// This case handles division.
                cout << "You have selected the division feature.\n";
                cal.getter();
                cout << "The answer is: " << cal.Division() << endl;
                div++; /// Increase div count.
                break;
            
            case 5: /// This case handles modulo.
                cout << "You have selected the modulo feature.\n";
                cal.getter();
                cout << "The answer is: " << cal.Modulo() << endl;
                mod++; /// Increase mod count.
                break;
            
            case 6: /// This is our quit case.
                done = true;
                break;
            
            default:
                cout << "Invalid selection. Please choose a valid option.\n";
        }

        /// Asking the user if they want to perform another calculation.
        if (!done) {
            cout << "Would you like to do another problem? (y/n): ";
            cin >> y;
            if (y == 'n') {
                done = true;
            }
        }
    } while (x >= 1 && x <= 6 && !done); 
    /// This is the end of our do-while loop.
    /// It runs as long as the input is between 1 and 6, and as long as our 'done' boolean is set to false.

    /// Print out total operations performed throughout the entire program.
    cout << "\nTotal Number of Addition Operations: " << adds << endl;
    cout << "Total Number of Subtraction Operations: " << subs << endl;
    cout << "Total Number of Multiplication Operations: " << mul << endl;
    cout << "Total Number of Division Operations: " << div << endl;
    cout << "Total Number of Modulo Operations: " << mod << endl;

    return 0;
}
     

  
  


