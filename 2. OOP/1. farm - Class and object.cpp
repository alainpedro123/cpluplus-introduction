#include <iostream>

using namespace std;

class Animal
{
    public:
        string species;
        string name;
    	int age;

        void add_animal()
        {
    		cout << endl << "Adding new animal to the database: " <<endl;
            cout << "Enter species: ";
            cin >> species;
            
            cout << "Add name: ";
            cin >> name;
            
            cout << "Add age: ";
            cin >> age;
    	}
    		
        void add_voice()
        {
            if (species == "cat")   
                cout << name << " " << age << " year " << ": Miau!";

            else if (species == "goat")  
                cout << name << " " << age << " year " << ": Beeeee!";

            else if (species == "cow") 
                cout << name << " " << age << " year " << ": Muuuuu!";

            else 
                cout << "Unknown species!";
        }
};

int main()
{
    Animal z1;
    z1.add_animal();
    z1.add_voice();

    animal z2;
    z2.add_animal();
    z2.add_voice();

    return 0;
}