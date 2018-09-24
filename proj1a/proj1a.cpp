/* @author Aureliano Yepez
* proj1a :  simple looping and testing.
*/
#include <iostream>
#include <limits>
#include <string>
#include <stdlib.h>

using namespace std; 

int input; 
int input2; 
int total = 0;
int subtotal = 0; 
int zero_count = 0; 
 
/* print_final_count:  prints total.*/
void print_final_count(int &total) {
    std::cout << "Total " << total << endl; 
}

/*print_subtotal: prints subtotal.*/
void print_subtotal(int &subtotal) {
    std::cout << "Subtotal " << subtotal << endl; 
}

/*handles all cases for main program*/
int main() { 
    while (true) {      
        std::cout << "Enter input: " << endl;
        std::cin >> input; 
        if (input == 0) { 
            print_subtotal(subtotal);
            total += subtotal;
            subtotal = 0; 
            std::cout << "Enter input: " << endl;
            std::cin >> input2; 
            if (input2 == 0) { 
                print_final_count(total);
                exit(0); 
            }
            else { 
                subtotal +=  input2; 
            }          
        }
        else { 
            subtotal += input; 
        }      
    }
    return 0;
}

