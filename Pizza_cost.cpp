#include <iostream>
using namespace std;


const double pi = 3.14159;

int main()
{
    double pizza_size;
    double num_slices;
    float pizza_cost;
    float unit_price;
    double diameter;
    float pizz_sq;
    float pizz_surface;
    float slice_cost;


    cout << "Please enter the diameter of the pizza ";
    cin >> pizza_size;
    diameter = (pizza_size / 2 );

    cout << "Please enter the Number of pizza slices ";
    cin >> num_slices;

    cout << "And finally please enter the pizza cost ";
    cout << "$";
    cin >> pizza_cost;

    pizz_surface = ((diameter * diameter) * pi);
    pizz_sq = pizz_surface / num_slices;
    slice_cost = pizza_cost / num_slices;
    unit_price = pizza_cost / num_slices / pizz_sq * 100;

    //cout << "result: " << pizz_surface << "\n" << pizz_sq << "\n" << slice_cost << "\n" << unit_price; 


    cout << "A Pizza that is " << pizza_size << " inches in diameter and costs $" << pizza_cost << " has a unit price of " << unit_price << " cents per square inch and costs $" << slice_cost << " per slice. Each slice is " << pizz_sq << " sq. in." << endl << endl;

    cout << "Thank you for using Harrison Lane's cost calculator. Enjoy eatting your pizza and don't forget to share." << endl << endl;

}
