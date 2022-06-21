#include<iostream>
#include<limits>
#include<iomanip>
#include<string>

		//________________________________________________________//
		// __GLOBAL Variables_____// 
		//_____________________________________________________//

int choice,search,modify,del;
char again;
using namespace std;

		//________________________________________________//
		//________functions____________________________//
		//_______________________________________________//

void introduction();
void mainmenu();
void createrecord();
void searchrecord();
void displayrecord();
void modifyrecord();
void fullrecord();
void deleterecord();
void exit();
void agai();

		//______________________________________________//
		//___________________structure__________________//
		//____________________________________________//

struct student
{
    int rollnumber;
    string firstname,lastname;
    int ict;
    int pf;
    int english;
    int pst;
    double percentage;
    double totalmarks;
    float gpa;
};
student stu[500];
int student;
		
		//__________________________________________________//
		//________________________MAIN_____________________//
		//__________________________________________________//

int main()
	{ 
		//__________________________________________________//
		//_______Calling Introduction function in main_______//
		//__________________________________________________//
	
		introduction();
	
		return 0;
		
	}
	
		//__________________________________________________//
		//_______ Introduction function Defination_______//
		//__________________________________________________//
void introduction()
	{
		cout<<"					" <<"STUDENT REPORT CARD SYSTEM"<<endl;
		cout<<"					       "<<"Presented by"<<endl;
		cout<<"		  			   "<<"Hammad Rustam"<<endl;
		mainmenu();
	}
	
		//__________________________________________________//
		//_______ Main Menu function Defination_______//
		//__________________________________________________//
void mainmenu()
	{
		
		cout<<endl <<endl<<"--> WARNING: If you enter any invalid key you program will be exit. ";
		cout<<endl <<endl<<"		"<<"** Main Menu **" <<endl;
		cout<<"Here you can perform following task ";
		cout<<endl<<"1- Create Students Record " 
		<<endl<<"2- Display all Students Record "
		<<endl<<"3- Search Student Record" 
		<<endl<<"4- Modify Student Record"
		<<endl<<"5- Delete Student Record"
		<<endl<<"6- Exit "
		<<endl<<endl<<"What you want to do? ";
		ccc:
		cin>>choice;
		while(1)
		{
			if(cin.fail())
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(),'\n');	
			cout<<endl<<"Invalid Entry"<<endl <<"Enter Choice Again ";
			cin>>choice;
		}
		if(!cin.fail())
		break;
		}
		switch(choice)
		{
			case 1: createrecord(); break;		 //Create Record Call.
			case 2: displayrecord();break; 		//Display Record Call.
			case 3: searchrecord(); break; 		//Search Record Call.
			case 4: modifyrecord(); break; 		//MOdify Record Call.
			case 5: deleterecord(); break; 		//Delete Record Call.
			case 6: exit(); 		break; 			//Exit
			default: 
				cout<<"Invalid Choice";
				goto ccc;
		}				
	}
	
		//__________________________________________________________//
		//______________Create Record Function Defination__________________//
		//________________________________________________________//
void createrecord()
	{
		string firstname,lastname; int rollnumber,ict,english,pf,pst,phy; 
		cout<<"Enter number of students "; if(student > 0)
		{
			
		}
		cin>>student;
		while(1)
		{
			if(cin.fail())
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(),'\n');	
			cout<<endl<<"=>Invalid Entry"<<endl<<"Enter Number of Students Again ";
			cin>>student;
		}
		if(!cin.fail())
		break;
		}
		  if(student > 0) 
			{
		cout<<endl;
		for(int i=0;i<student;i++)
			{
			cout<<"->Enter roll number of student"<<" "<<i+1 <<" ";
			cin>>stu[i].rollnumber;	
		while(1)
		{
			if(cin.fail())
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(),'\n');	
			cout<<endl<<"Invalid Entry"<<endl <<"Enter Roll Number Again ";
			cin>>stu[i].rollnumber;
		}
		if(!cin.fail())
		break;
		}
				for (int j=0; j<i; j++)
				{
				if(stu[i].rollnumber==stu[j].rollnumber)
				{
					cout<<"Roll Number already chosen ";
					cout<<"Please Enter Again: ";
					cin>>stu[i].rollnumber;	
					if(stu[i].rollnumber==stu[j].rollnumber)
				{
					cout<<"Roll Number already chosen ";
					cout<<"Please Enter Again: ";
					cin>>stu[i].rollnumber;	
					if(stu[i].rollnumber==stu[j].rollnumber)
					{
						cout<<endl;
						cout<<"=>You Enter Same Roll Number twice. So Now you are again in Main Menu ";
						mainmenu();
						
					}
				}	
				}
				}
			cout<<"->Enter First name of student ";
			cin>>stu[i].firstname;
			cout<<"->Enter last name of student ";
            cin>>stu[i].lastname;
			cout<<"->Enter marks in Programming Fundamentals "; 			//Programming Marks
			cin>>stu[i].pf;
			while(1)
		{
			if(cin.fail())
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(),'\n');	
			cout<<endl<<"Invalid Entry"<<endl<<"Enter PF Marks Again ";
			cin>>stu[i].pf;
		}
		if(!cin.fail())
		break;
		}
			cout<<"->Enter marks in English ";				 //English Marks
			cin>>stu[i].english;
		while(1)
		{
			if(cin.fail())
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(),'\n');	
			cout<<endl<<"Invalid Entry"<<endl<<"Enter English Marks Again ";
			cin>>stu[i].english;
		}
		if(!cin.fail())
		break;
		}
			cout<<"->Enter marks in ICT "; 							//ICT Marks
			cin>>stu[i].ict;
		while(1)
		{
			if(cin.fail())
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(),'\n');	
			cout<<endl<<"Invalid Entry."<<endl<<"Enter ICT Marks Again ";
			cin>>stu[i].ict;
		}
		if(!cin.fail())
		break;
		}
			cout<<"->Enter marks in Pakistan Studies "; 				//P.st Marks
			cin>>stu[i].pst;
		while(1)
		{
			if(cin.fail())
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(),'\n');	
			cout<<endl<<"Invalid Entry"<<endl<<"Enter P.st Marks Again ";
			cin>>stu[i].pst;
		}
		if(!cin.fail())
		break;
		}
			cout<<endl;
		
	{
	float totalmarks,percentage;
	stu[i].totalmarks=stu[i].english+stu[i].ict+stu[i].pf+stu[i].pst;
	stu[i].percentage=stu[i].totalmarks/4;
	cout<<"Percentage is " <<stu[i].percentage <<"%" <<endl;
	 if(stu[i].percentage>=80)
                        {
                        	stu[i].gpa=4;
	                	}
	                	else if(stu[i].percentage>=70 && stu[i].percentage<80)
	                 	{
		            	    stu[i].gpa=3;
	                 	}
	                 	else if(stu[i].percentage>=60 && stu[i].percentage<70)
	                	{
		             	    stu[i].gpa=2;
	                 	}
	                	else if(stu[i].percentage>=50 && stu[i].percentage<60)
	                 	{
	             		    stu[i].gpa=1;
	                 	}
	                	else
	                	{
	            		cout<<"Fail"<<endl;
	                 	}
	                 	cout<<"GPA is:"<<stu[i].gpa<<endl;
	    
	    if (stu[i].gpa > 4)
		{
			cout<<"Invalid GPA. Please Enter Marks Again"<<endl;
			cout<<"->Enter marks in Programming Fundamentals ";
			cin>>stu[i].pf;
			cout<<"->Enter marks in English ";
			cin>>stu[i].english;
			cout<<"->Enter marks in ICT ";
			cin>>stu[i].ict;
			cout<<"->Enter marks in Pakistan Studies ";
			cin>>stu[i].pst;
			cout<<endl;
		}
		cout<<endl;
		
	
	}
			}
		}
		while (!student < -0 )
		cin>>student;
		 while(1)
		{
			if(cin.fail())
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(),'\n');	
			cout<<endl<<"=>Invalid Entry"<<endl<<"Enter Number of Students Again ";
			cin>>student;
		}
		if(!cin.fail())
		break;
		}		
		//__________________________________________________________//
		//______________Asking for Main Menu_______________________//
		//________________________________________________________//
				
		agai();
}

		//__________________________________________________________//
		//______________Display Record Function Defination_________________//
		//________________________________________________________//
void displayrecord()
{
		cout<<"\t\t\t\t ==> RECORD OF ALL STUDENTS <=="<<endl<<endl;
	for(int i=0;i<student;i++)
		{
			cout<<"________________________________________"<<endl;
			cout<<"Record of Student " <<1+i <<endl; 
			cout<<"________________________________________"<<endl;
    		cout<<"->Roll No: "<<stu[i].rollnumber<<endl;
    		cout<<"->First Name: "<<stu[i].firstname<<endl;
			cout<<"->Last Name: "<<stu[i].lastname<<endl;
			cout<<"->ICT Marks: "<<stu[i].ict<<endl;
			cout<<"->PF Marks: "<<stu[i].pf<<endl;
			cout<<"->English Marks: "<<stu[i].english<<endl;
			cout<<"->Pk.studies Marks: "<<stu[i].pst<<endl;
			cout<<"->Obtained marks: "<<stu[i].totalmarks<<endl;
			cout<<"->Percentage: "<<stu[i].percentage<<endl;
			cout<<"->gpa: "<<stu[i].gpa<<endl; 
		
		}
		
		//__________________________________________________________//
		//______________Asking for Main Menu_______________________//
		//________________________________________________________//
	agai();		
}

		//__________________________________________________________//
		//______________Search Record Function Defination________________//
		//________________________________________________________//
void searchrecord()
	{
		cout<<"Enter Roll Number to Search: "; //Searching Record
		cin>>search;
		while(1)
		{
			if(cin.fail())
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(),'\n');	
			cout<<endl<<"Invalid Entry"<<endl <<"Enter Roll Number Again to Search";
			cin>>search;
		}
		if(!cin.fail())
		break;
		}
		if(student == 0)
		{
				cout<<"First Enter some record "<<endl;
			}
		for(int i=0;i<student;i++)
		{
			 if(search == stu[i].rollnumber)
			{ 
				cout<<"________________________________________"<<endl;
				cout<<"->Roll Number: "<<stu[i].rollnumber<<endl;
				cout<<"First Name: "<<stu[i].firstname<<endl;
				cout<<"Last Name: "<<stu[i].lastname<<endl;
				cout<<"ICT Marks: "<<stu[i].ict<<endl;
				cout<<"Pf Marks: "<<stu[i].pf<<endl;
				cout<<"English Marks: "<<stu[i].english <<endl;
				cout<<"Pk.Studies Marks: "<<stu[i].pst<<endl;
				cout<<endl;
				cout<<"________________________________________"<<endl;
			}
		else if(search != stu[i].rollnumber)
		{
			cout<<"Record Not found";
		}
			}
		
		
		//__________________________________________________________//
		//______________Asking for Main Menu_______________________//
		//________________________________________________________//
		agai();		
}
void modifyrecord()
{
	cout<<"Enter Roll number of student to Modify Record "; 		//Modifying Record.
	cin>>modify;
	while(1)
		{
			if(cin.fail())
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(),'\n');	
			cout<<endl<<"Invalid Entry"<<endl <<"Enter Roll Number Again to Modify ";
			cin>>modify;
		}
		if(!cin.fail())
		break;
		}
		if(student == 0)
		{
			cout<<"Enter Some Record First";
		}
		else
	for(int i=0;i<student;i++)
	{
	
			stu[i].firstname=" ";
			stu[i].lastname=" ";
			stu[i].ict=0;
			stu[i].pf=0;
			stu[i].pst=0;
			stu[i].english=0;
			cout<<"->Enter first name of student ";
			cin>>stu[i].firstname;
			cout<<"->Enter Second name of student ";
			cin>>stu[i].lastname;
			cout<<"->Enter marks in Programming Fundamentals ";
			cin>>stu[i].pf;
			cout<<"->Enter marks in English ";
			cin>>stu[i].english;
			cout<<"->Enter marks in ICT ";
			cin>>stu[i].ict;
			cout<<"->Enter marks in Pakistan Studies ";
			cin>>stu[i].pst;
	
	}
		//__________________________________________________________//
		//______________Asking for Main Menu_______________________//
		//________________________________________________________//
	 	agai();
}
	//___________________________________________________________________//
	//______________________DELETE FUNCTION DIFINING__________________//
	//__________________________________________________________________//
	void deleterecord()
	{
		
	cout<<"Enter Roll Number of student Whoes data you want to delete "; //Delete Record.
	cin>>del;
	if(student == 0)
		{
			cout<<"Enter Some Record First";
		}
	else
	for(int i=0;i<student;i++)
	{
		if(del==stu[i].rollnumber)
		{
		stu[i].rollnumber=0;
		stu[i].firstname=" ";
		stu[i].lastname=" ";
		stu[i].ict=0;
		stu[i].pf=0;
		stu[i].english=0;
		stu[i].pst=0;
		stu[i].totalmarks=0;
		stu[i].gpa=0;
		stu[i].percentage=0;
		cout<<endl<<"->Record Deleted Sucessfully! ";
		}
	}	
		//__________________________________________________________//
		//______________Asking for Main Menu_______________________//  
		//________________________________________________________//
	agai();
}

		//__________________________________________________//
		//_______ Exit function Defination_______//
		//__________________________________________________//
void exit()
{
	exit(0);
} 

		//__________________________________________________//
		//_______ Asking For Main Menu	function Defination_____//
		//__________________________________________________//
void agai()
{
	
	
	cout<<endl<<" => Do you want to go back to main menu? ";
	bbb:
		cin>>again;
			while(1)
		{
			if(cin.fail())
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(),'\n');	
			cout<<endl<<"Invalid Entry"<<endl <<"Enter Again ";
			cin>>again;
		}
		if(!cin.fail())
		break;
		}
		if(again=='y' || again == 'Y')
		{
		mainmenu();
		cin>>choice;
		}
		else if(again=='N' || again == 'n')
		{
			
		exit(0);
		}
		else goto bbb;
		
}


