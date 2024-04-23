#include <fstream>
#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

class Student
{
    public:
        void personal_caller(char flag)
        {
            if(flag == 'A')
            {
                add_student(flag);
            }
            else if(flag == 'B')
            {
                view_data();
            }
            else if(flag == 'C')
            {
                edit_student(flag);
            }
            else if(flag == 'D')
            {
                delete_student();
            }
        }
        
        void add_student(char flag)
        {
            Table.clear();
            Column.clear();
            
            ifstream READ("DATA.txt");
            int counter = 6;
            string text, place;
            
            getline(READ, text);

            while(!READ.eof())
            {
                
                for(int i = 0; i < text.length(); i++)
                {
                    if(text[i] != '*')
                    {
                        switch(counter)
                        {
                            case 6:
                                place += text[i];
                                break;
                            case 5:
                                place += text[i];
                                break;
                            case 4:
                                place += text[i];
                                break;
                            case 3:
                                place += text[i];
                                break;
                            case 2:
                                place += text[i];
                                break;
                            case 1:
                                place += text[i];
                                counter = 6;
                                break;
                        }
                    }
                    else
                    {
                        Column.push_back(place);
                        place = "";
                        counter--;
                    }
                }
                
                Table.push_back(Column);
                Column.clear();
                getline(READ, text);

            }
            
            READ.close();
            
            for(int i = 0; i < Table.size(); i++)
            {
                for(int j = 0; j < 6; j++)
                {   
                    switch(j)
                    {
                        case 0:
                            name = Table[i][j];
                            break;
                        case 1:
                            gender = Table[i][j];
                            break;
                        case 2:
                            matric = Table[i][j];
                            break;
                        case 3:
                            hp = Table[i][j];
                            break;
                        case 4:
                            dob = Table[i][j];
                            break;
                        case 5:
                            address = Table[i][j];
                            break;
                            
                    }

                    
                }
                
               cout << setw(30) << name 
                    << setw(10) << gender
                    << setw(25) << matric 
                    << setw(20) << hp 
                    << setw(20) << dob 
                    << setw(50) << address << endl;                

            }
            
            ofstream WRITE("DATA.txt");
            WRITE.close();
            
            while(flag != 'N')
            {
                
                Column.clear();
                
                cout << "\nENTER NAME: ";
                cout << "";
                getline(cin, name);
                Column.push_back(name);
                
                cout << "ENTER GENDER: ";
                cout << "";
                getline(cin, gender);
                Column.push_back(gender);
                
                cout << "ENTER MATRIC: ";
                cout << "";
                getline(cin, matric);
                Column.push_back(matric);
                
                cout << "ENTER HP: ";
                cout << "";
                getline(cin, hp);
                Column.push_back(hp);
                
                cout << "ENTER DOB: ";
                cout << "";
                getline(cin, dob);
                Column.push_back(dob);
                
                cout << "ENTER ADDRESS: ";
                cout << "";
                getline(cin, address);
                Column.push_back(address);
                
                Table.push_back(Column);
                
                cout << "\nDO YOU WANT TO ADD MORE? (Y/N): ";
                cin >> flag;
                cin.ignore();

            }
            
            WRITE.open("DATA.txt");

            for(int i = 0; i < Table.size(); i++)
            {
                for(int j = 0; j < 6; j++)
                {
                    WRITE << Table[i][j] << '*';
                }
                
                WRITE << endl;
                
            }
            
 
            WRITE.close();
            
        }
        
        void view_data()
        {
            Table.clear();
            Column.clear();
            ifstream READ("DATA.txt");
            int counter = 6;
            string text, place;
            
            getline(READ, text);

            while(!READ.eof())
            {
                
                for(int i = 0; i < text.length(); i++)
                {
                    if(text[i] != '*')
                    {
                        switch(counter)
                        {
                            case 6:
                                place += text[i];
                                break;
                            case 5:
                                place += text[i];
                                break;
                            case 4:
                                place += text[i];
                                break;
                            case 3:
                                place += text[i];
                                break;
                            case 2:
                                place += text[i];
                                break;
                            case 1:
                                place += text[i];
                                counter = 6;
                                break;
                        }
                    }
                    else
                    {
                        Column.push_back(place);
                        place = "";
                        counter--;
                    }
                }
                
                Table.push_back(Column);
                Column.clear();
                getline(READ, text);

            }
            
            READ.close();
            
            for(int i = 0; i < Table.size(); i++)
            {
                for(int j = 0; j < 6; j++)
                {   
                    switch(j)
                    {
                        case 0:
                            name = Table[i][j];
                            break;
                        case 1:
                            gender = Table[i][j];
                            break;
                        case 2:
                            matric = Table[i][j];
                            break;
                        case 3:
                            hp = Table[i][j];
                            break;
                        case 4:
                            dob = Table[i][j];
                            break;
                        case 5:
                            address = Table[i][j];
                            break;
                            
                    }

                    
                }
                
               cout << setw(30) << name 
                    << setw(10) << gender
                    << setw(25) << matric 
                    << setw(20) << hp 
                    << setw(20) << dob 
                    << setw(50) << address << endl;                

            }
            
            Table.clear();
            Column.clear();

        }
        
        void edit_student(char flag)
        {
            Table.clear();
            Column.clear();
            
            ifstream READ("DATA.txt");
            int counter = 6;
            string text, place;
            
            getline(READ, text);

            while(!READ.eof())
            {
                
                for(int i = 0; i < text.length(); i++)
                {
                    if(text[i] != '*')
                    {
                        switch(counter)
                        {
                            case 6:
                                place += text[i];
                                break;
                            case 5:
                                place += text[i];
                                break;
                            case 4:
                                place += text[i];
                                break;
                            case 3:
                                place += text[i];
                                break;
                            case 2:
                                place += text[i];
                                break;
                            case 1:
                                place += text[i];
                                counter = 6;
                                break;
                        }
                    }
                    else
                    {
                        Column.push_back(place);
                        place = "";
                        counter--;
                    }
                }
                
                Table.push_back(Column);
                Column.clear();
                getline(READ, text);

            }
            
            READ.close();
            
            for(int i = 0; i < Table.size(); i++)
            {
                for(int j = 0; j < 6; j++)
                {   
                    switch(j)
                    {
                        case 0:
                            name = Table[i][j];
                            break;
                        case 1:
                            gender = Table[i][j];
                            break;
                        case 2:
                            matric = Table[i][j];
                            break;
                        case 3:
                            hp = Table[i][j];
                            break;
                        case 4:
                            dob = Table[i][j];
                            break;
                        case 5:
                            address = Table[i][j];
                            break;
                            
                    }

                    
                }
                
               cout << setw(30) << name 
                    << setw(10) << gender
                    << setw(25) << matric 
                    << setw(20) << hp 
                    << setw(20) << dob 
                    << setw(50) << address << endl;                

            }
            
            ofstream WRITE("DATA.txt");
            WRITE.close();
            
            cout << "ENTER MATRIC NUMBER YOU WANT TO EDIT: " << endl;
            cin >> matric;
            cin.ignore();
            
            for(int i = 0; i < Table.size(); i++)
            {
                if(Table[i][2] != matric)
                    edit.push_back(Table[i]);
            }
            
            for(int i = 0; i < edit.size(); i++)
            {
                for(int j = 0; j < 6; j++)
                {   
                    switch(j)
                    {
                        case 0:
                            name = edit[i][j];
                            break;
                        case 1:
                            gender = edit[i][j];
                            break;
                        case 2:
                            matric = edit[i][j];
                            break;
                        case 3:
                            hp = edit[i][j];
                            break;
                        case 4:
                            dob = edit[i][j];
                            break;
                        case 5:
                            address = edit[i][j];
                            break;
                    }
                }
                
               cout << setw(30) << name 
                    << setw(10) << gender
                    << setw(25) << matric 
                    << setw(20) << hp 
                    << setw(20) << dob 
                    << setw(50) << address << endl;                

            }            
            
            while(flag != 'N')
            {
                
                Column.clear();
                
                cout << "\nENTER NAME: ";
                cout << "";
                getline(cin, name);
                Column.push_back(name);
                
                cout << "ENTER GENDER: ";
                cout << "";
                getline(cin, gender);
                Column.push_back(gender);
                
                cout << "ENTER MATRIC: ";
                cout << "";
                getline(cin, matric);
                Column.push_back(matric);
                
                cout << "ENTER HP: ";
                cout << "";
                getline(cin, hp);
                Column.push_back(hp);
                
                cout << "ENTER DOB: ";
                cout << "";
                getline(cin, dob);
                Column.push_back(dob);
                
                cout << "ENTER ADDRESS: ";
                cout << "";
                getline(cin, address);
                Column.push_back(address);
                
                edit.push_back(Column);
                
                cout << "EDIT SUCCESSFULLY!";
                flag = 'N';
                
            }
            
            WRITE.open("DATA.txt");

            for(int i = 0; i < edit.size(); i++)
            {
                for(int j = 0; j < 6; j++)
                {
                    WRITE << edit[i][j] << '*';
                }
                
                WRITE << endl;
                
            }
            
            WRITE.close();
            Table.clear();
            edit.clear();
            
        }
        
        void delete_student()
        {
            Table.clear();
            Column.clear();
            edit.clear();
            
            ifstream READ("DATA.txt");
            int counter = 6;
            string text, place;
            
            getline(READ, text);

            while(!READ.eof())
            {
                
                for(int i = 0; i < text.length(); i++)
                {
                    if(text[i] != '*')
                    {
                        switch(counter)
                        {
                            case 6:
                                place += text[i];
                                break;
                            case 5:
                                place += text[i];
                                break;
                            case 4:
                                place += text[i];
                                break;
                            case 3:
                                place += text[i];
                                break;
                            case 2:
                                place += text[i];
                                break;
                            case 1:
                                place += text[i];
                                counter = 6;
                                break;
                        }
                    }
                    else
                    {
                        Column.push_back(place);
                        place = "";
                        counter--;
                    }
                }
                
                Table.push_back(Column);
                Column.clear();
                getline(READ, text);

            }
            
            READ.close();
            
            for(int i = 0; i < Table.size(); i++)
            {
                for(int j = 0; j < 6; j++)
                {   
                    switch(j)
                    {
                        case 0:
                            name = Table[i][j];
                            break;
                        case 1:
                            gender = Table[i][j];
                            break;
                        case 2:
                            matric = Table[i][j];
                            break;
                        case 3:
                            hp = Table[i][j];
                            break;
                        case 4:
                            dob = Table[i][j];
                            break;
                        case 5:
                            address = Table[i][j];
                            break;
                            
                    }
                    
                }
                
               cout << setw(30) << name 
                    << setw(10) << gender
                    << setw(25) << matric 
                    << setw(20) << hp 
                    << setw(20) << dob 
                    << setw(50) << address << endl;                

            }
            
            ofstream WRITE("DATA.txt");
            WRITE.close();
            
            cout << "ENTER MATRIC NUMBER YOU WANT TO DELETE: ";
            cin >> matric;
            cin.ignore();
            
            for(int i = 0; i < Table.size(); i++)
            {
                if(Table[i][2] != matric)
                    edit.push_back(Table[i]);
            }
            
            for(int i = 0; i < edit.size(); i++)
            {
                for(int j = 0; j < 6; j++)
                {   
                    switch(j)
                    {
                        case 0:
                            name = edit[i][j];
                            break;
                        case 1:
                            gender = edit[i][j];
                            break;
                        case 2:
                            matric = edit[i][j];
                            break;
                        case 3:
                            hp = edit[i][j];
                            break;
                        case 4:
                            dob = edit[i][j];
                            break;
                        case 5:
                            address = edit[i][j];
                            break;
                    }
                }
                
               cout << setw(30) << name 
                    << setw(10) << gender
                    << setw(25) << matric 
                    << setw(20) << hp 
                    << setw(20) << dob 
                    << setw(50) << address << endl;                

            }
   
        }
        
    private:
        string name = "", dob = "", address = "", hp = "", matric = "", gender = "";
        vector<string> Column;
        vector<vector<string>> Table;
        vector<vector<string>> edit;

};

int main()
{
    int choice;
    char flag = 'X';
    Student e;
    
    cout << "\n************" << endl;	
	cout << "* PERSONAL MANAGEMENT SYSTEM *" << endl;
	cout << "************" << endl;
	cout << "MENU : \n" << endl;
	cout << "PERSONAL DATA\t [1]" << endl;
	cout << "REPORT CARD\t [2]" << endl;
	cout << "SCHEDULE\t [3]" << endl;
	cout << "EXIT \t\t [4]\n" << endl;
	cout << "ENTER YOUR CHOICE : ";
	cin >> choice;
	
	while(choice != 4)
	{
        
        if(choice == 999)
        {
            cout << "\n****************************" << endl;	
	        cout << "* PERSONAL MANAGEMENT SYSTEM *" << endl;
	        cout << "******************************" << endl;
	        cout << "MENU : \n" << endl;
	        cout << "PERSONAL DATA\t [1]" << endl;
	        cout << "REPORT CARD\t [2]" << endl;
	        cout << "SCHEDULE\t [3]" << endl;
	        cout << "EXIT \t\t [4]\n" << endl;
	        cout << "ENTER YOUR CHOICE : ";
	        cin >> choice;
	    }
        else if(choice == 1)
        {
            cout << "\nPERSONAL DATA : \n" << endl;
			cout << "ADD RECORD \t\t [A]" << endl;
			cout << "VIEW RECORD \t\t [B]" << endl;
			cout << "EDIT RECORD \t\t [C]" << endl;
			cout << "DELETE RECORD \t\t [D]" << endl;
			cout << "SAVE \t\t\t [E]" << endl;
			cout << "\nENTER YOUR CHOICE : ";
			cin >> flag;
			cin.ignore();
			
			if(flag == 'E')
		        choice = 999;
			
			e.personal_caller(flag);
			
        }
        
	}
    
    return 0;
}

