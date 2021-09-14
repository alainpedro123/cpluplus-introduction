// Read from a File - output

string name, surname;
int phoneNumber;

int main()
{

    string line;
    int lineNumber=1;

    fstream file;
    file.open("business_card.txt", ios::in);

    if(file.good()==false) 
        cout<<"The gile can't be opened!";

    while (getline(file, line))
    {
        switch (lineNumber)
        {
            case 1: name=line; 
                break;
            case 2: surname=line; 
                break;
            case 3: phoneNumber=atoi(line.c_str()); 
                break;
        }
        lineNumber++;
    }

    file.close();

    cout<<"name: "<<name<<endl;
    cout<<"surname: "<<surname<<endl;
    cout<<"phone number: "<<phoneNumber<<endl;

    return 0;
}