// 1) Write and save something in the file

string name, suname;
int phoneNumber;

int main()
{
    cout << "Enter your name: ";            cin>>name;
    cout << "Enter your suname: ";          cin>>suname;
    cout << "Enter your phone number: ";    cin>>phoneNumber;

    fstream file;
    file.open("business_card.txt",ios::out);

    file<<name<<endl;
    file<<suname<<endl;
    file<<phoneNumber<<endl;

    file.close();

    return 0;
}


// 2) Write and save something in the file

string name, suname;
int phoneNumber;

int main()
{
    cout << "Enter your name: ";            cin>>name;
    cout << "Enter your suname: ";          cin>>suname;
    cout << "Enter your phone number: ";    cin>>phoneNumber;

    fstream file;
    file.open("business_card.txt",ios::out | ios::app);

    file<<name<<endl;
    file<<suname<<endl;
    file<<phoneNumber<<endl;

    file.close();

    return 0;
}