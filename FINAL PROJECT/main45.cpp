#include<iostream>
#include<conio.h>
#include<cstdlib>
#include<cstdio>
#include<windows.h>
#include<string>
#include<fstream>
#include<iomanip>

using namespace std;

class student {

	// Utility functions
	void waitForEnter(void) {
		cout << "\n\n\n Press enter to go back \n\n";
		cin.get();
		cin.get();
	}

	// Functions to perform desired actions
	void listall(void) { //List of all courses
		system("cls");
		FILE* file;
		file = fopen("data1.txt", "r");
		cout << "\n CODE            |     SUBJECT              \n";
		cout << "------------------------------------------------\n";
		cout << "UW00202            ISLAM AND ASIAN CIVILISATION \n";
		cout << "UB06002            ENGLISH FOR CREATIVE COMMUNICATION \n";
		cout << "Exxxx3             CO-CURRICULUM\n";
		cout << "KS04403            CALCULUS I\n";
		cout << "KS06603            ENGINEERING PROGRAMMING\n";
		cout << "KS10503            ELECTRIC CIRCUIT ANALYSIS\n";
		cout << "KS10701            ENGINEERING WORKSHOP\n";
		cout << "UW00102            ETHNIC RELATIONS\n";
		cout << "UCxxx02            UNKNOWN\n";
		cout << "UB00402            ACADEMIC READING AND WRITING\n";
		cout << "KS05503            CALCULUS II\n";
		cout << "KS12003            ANALOG ELECTRONICS\n";
		cout << "KS14003            DISCRETE MATHEMATICS\n";
		cout << "KS16001            LABORATORY I\n";
		cout << "UW00302            FUNDAMENTALS OF ENTREPRENEURIAL ACCULTURATION\n";
		cout << "UB02002            ENGLISH FOR EMPLOYMENT\n";
		cout << "KS08803            ETHICS AND LAW FOR ENGINEERS\n";
		cout << "KS20503            LOGIC DESIGN\n";
		cout << "KS20703            DATA STRUCTURE AND ALGORITHMS\n";
		cout << "KS21303            DIFFERENTIAL EQUATIONS AND LINEAR EQUATIONS\n";
		cout << "KS21501            LABORATORY II\n";
		cout << "UB00502            ENGLISH FOR RESEARCH PURPOSES\n";
		cout << "KS09903            MANAGEMENT AND ACCOUNTING FOR ENGINEERS\n";
		cout << "KS21403            SOFTWARE ENGINEERING\n";
		cout << "KS21803            PROBABILITY AND RANDOM PROCESS\n";
		cout << "KS22042            ENGINEERING PHYSICS\n";
		cout << "KS22603            COMPUTATIONAL METHODS\n";
		cout << "KS22802            DESIGN PROJECT I\n";
		cout << "KS30903            MEASUREMENT AND INSTRUMENTATION\n";
		cout << "KS31303            SIGNALS AND SYSTEM\n";
		cout << "KS31503            MICROELECTRONICS\n";
		cout << "KS32303            MICROPROCESSORS\n";
		cout << "KS32503            EMBEDDED SYSTEMS\n";
		cout << "KS32702            DESIGN PROJECT II\n";
		cout << "KS30005            INDUSTRIAL TRAINING\n";
		cout << "KS30403            CONTROL SYSTEMS\n";
		cout << "KS31403            DIGITAL SIGNAL PROCESSING\n";
		cout << "KS31603            COMMUNICATION SYSTEMS ENGINEERING\n";
		cout << "KS32203            ELECTROMAGNETICS\n";
		cout << "KS32403            COMPUTER ARCHITECTURE\n";
		cout << "KS32603            DESIGN PROJECT III\n";
		cout << "KS40002            PROJECT I\n";
		cout << "KS41103            COMPUTER NETWORKS\n";
		cout << "KS41701            LABORATORY III\n";
		cout << "KS42903            POWER SYSTEMS FOR ELECTRONIC ENGINEERS\n";
		cout << "KA4XX03            ELECTIVE I\n";
		cout << "KS40004            PROJECT II\n";
		cout << "KS40803            OPERATING SYSTEMS\n";
		cout << "KS42803            IMAGE PROCESSING\n";
		cout << "KA4XX03            ELECTIVE II\n";
		cout << "KA4XX03            ELECTIVE III\n";
		waitForEnter();
	}


	void listcurrent(void) {
		char data[100],sem;
		cout << "What semester (in number) ?" << endl;
		string a,b,c,d,e,f,g,h;
		cin >> sem;
		
		ifstream ifile;
		
		switch (sem ) 
		{
		case '1':
			ifile.open("1.txt");
			cout << endl;
			if (!ifile)
			{
				cout << "Error in opening file..!!";
				getch();
				exit(0);
			}
			while (ifile.eof() == 0)
			{
				getline (ifile,a);
   			    cout << a<< endl;
			}
		waitForEnter();
		ifile.close();
		break;
		
		case '2':
			ifile.open("2.txt");
			cout << endl;
			if (!ifile)
			{
				cout << "Error in opening file..!!";
				getch();
				exit(0);
			}
			while (ifile.eof() == 0)
			{
				getline (ifile,b);
   			    cout << b<< endl;
			}
		system ("pause");
		break;
		
		case '3':
			ifile.open("3.txt");
			cout << endl;
			if (!ifile)
			{
				cout << "Error in opening file..!!";
				getch();
				exit(0);
			}
			while (ifile.eof() == 0)
			{
				getline (ifile,c);
   			    cout << c<< endl;
			}
		system ("pause");
		break;
		
		case '4':
			ifile.open("4.txt");
			cout << endl;
			if (!ifile)
			{
				cout << "Error in opening file..!!";
				getch();
				exit(0);
			}
			while (ifile.eof() == 0)
			{
				getline (ifile,d);
   			    cout << d<< endl;
			}
		system ("pause");
		break;
		
		case '5':
			ifile.open("5.txt");
			cout << endl;
			if (!ifile)
			{
				cout << "Error in opening file..!!";
				getch();
				exit(0);
			}
			while (ifile.eof() == 0)
			{
				getline (ifile,e);
   			    cout << e<< endl;
			}
		system ("pause");
		break;
		
		case '6':
			ifile.open("6.txt");
			cout << endl;
			if (!ifile)
			{
				cout << "Error in opening file..!!";
				getch();
				exit(0);
			}
			while (ifile.eof() == 0)
			{
				getline (ifile,f);
   			    cout << f<< endl;
			}
		system ("pause");
		break;
		
		case '7':
			ifile.open("7.txt");
			cout << endl;
			if (!ifile)
			{
				cout << "Error in opening file..!!";
				getch();
				exit(0);
			}
			while (ifile.eof() == 0)
			{
				getline (ifile,g);
   			    cout << g<< endl;
			}
		system ("pause");
		break;
		
		case '8':
			ifile.open("8.txt");
			cout << endl;
			if (!ifile)
			{
				cout << "Error in opening file..!!";
				getch();
				exit(0);
			}
			while (ifile.eof() == 0)
			{
				getline (ifile,h);
   			    cout << h<< endl;
			}
		system ("pause");
		break;
		}
	}

	void gpac(void) {
		system("cls");
		double p, p2, cgpa, sum, num;
		ifstream ifile;
		string data;
		ifile.open("cgpa.txt");
		cout << "Please enter your matric number: \n";
		getline (cin,num);
		cout << "Please enter your GPA for your first semester: \n";
		cin >> p;
		cout << "Please enter your GPA for the next semeseter : \n";
		cin >> p2;
		sum = p + p2;
		cgpa = sum / 2;
		ifile << cgpa << endl;
		cout << "YOUR CGPA IS :" << cgpa << endl<< endl;
		cout << "GOOD JOB !"<< endl;
		file.close();
		waitForEnter();

	}

public:
	// Function to serve as end point
	void options(void) { //menu
		int login(); //login declaration
		login();//login screen
		while (true) {
			system("cls");

			// Options to choose an action
			cout << "\n\t\t\tREPORT CARD: ";
			cout << "\n";
			cout << "\n\t\t\t------------------------------------------------";
			cout << "\n\t\t\tLIST ALL COURSES                             [1]";
			cout << "\n\t\t\t------------------------------------------------";
			cout << "\n\t\t\tLIST CURRENT SEMESTER COURSES                [2]";
			cout << "\n\t\t\t------------------------------------------------";
			cout << "\n\t\t\tGPA AND CGPA                                 [3]";
			cout << "\n\t\t\t------------------------------------------------";
			cout << "\n\t\t\tEXIT                                         [4] ";
			cout << "\n\t\t\t------------------------------------------------";
			cout << "\n\n\t\t\t ENTER YOUR CHOICE: ";

			// Taking the action input
			int choice;
			cin >> choice;
			// Calling relevant function as per choice
			switch (choice) {
			case 0:
				system("CLS");
				cout << "\n\nREPORT CARD \n\n";
				Sleep(10);
				return;
			case 1:
				listall();
				break;
			case 2:
				listcurrent();
				break;
			case 3:
				gpac();
				break;
			case 4:
				exit(0);
			default:
				cout << "\n Sorry! I don't understand that! \n";
				break;
			}

		}
	}
};

int main() {
	// Call the options function
	student e;
	e.options();
	return 0;
}

int login() { //login procedure
	cout << "\n\n\n\n\t\t\t\t\t\PERSONAL MANAGEMENT SYSTEM";
	cout << "\n\n\n\t\t\t\t\tAccess Granted!! \n\n\n";

	system("PAUSE");
	system("CLS");

}
