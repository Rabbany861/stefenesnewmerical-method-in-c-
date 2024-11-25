
#include <iostream>
#include <cmath>
#define tol .0001

using namespace std;

// Function for which we are finding the root
double f(double x)
{
    return x * x*x - x - 1;
}

// Steffensen's method implementation
double steffensen(double x)
 {
    int i = 0;
    while (abs(f(x)) >= tol){
        i++;
        double fx = f(x);
        double f1 = f(x + fx);
        double denominator = f1 - fx;
        //if(denominator == 0){
           // cout << "Division by zero encountered." << endl;
        //}
        double x_new = x - (fx * fx) / denominator;
        x = x_new;
    }
    cout << "Approximate root: " << x << endl;//return x;
}

int main()
{
   double initial_guess;

    cout << "Enter initial guess: ";
    cin >> initial_guess;

    steffensen(initial_guess);


    return 0;
}
