
#include<iostream>
using namespace std;
class Dog {
public:
 string name;
	int age;
};
Dog test_dog() {
    //---- WRITE YOUR CODE BELOW THIS LINE----
    Dog spot;
    spot.name = "Spot";
    spot.age = 5;
    cout << spot.name << endl;
    cout << spot.age << endl;
    //---- WRITE YOUR CODE ABOVE THIS LINE----
    //---- DO NOT CHANGE THE CODE BELOW----
    return spot;
}

int main() {
    test_dog();

    return 0;
}