#include <iostream>
using namespace std;

class Dog{
    public:
        string Breed, Color, Height, Weight;

        bool Shake(){
            return true;
        }

        bool Sit(){
            return true;
        }

        bool LayDown(){
            return true;
        }

        bool IsGoodBoy(){
            return true;
        }
};

int main(){
    Dog Beagle;
    Beagle.Breed = "Hound";
    Beagle.Color = "Brown";
    Beagle.Height = "2 feet";
    Beagle.Weight = "60 pounds";
    return 0; 
}