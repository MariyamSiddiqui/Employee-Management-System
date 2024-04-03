#include<iostream>
#include<string>
#include<conio.h>
#include<windows.h>

using namespace std;

struct emp
{
	string id, firstname, lastname, department, address, gender, email;
	int salary, age;
	double contact;

};

int total=0;
emp e[100];

void empdata()
{
	int user=0;
	cout << "\n\t\t\t\t\t-------------------------------" << endl;
    cout << "\t\t\t\t\t>>  Entering  Employee  Data   <<" << endl;
    cout << "\t\t\t\t\t-------------------------------" << endl;
    
	cout<<"How many employees data do you want to enter??"<<endl;
	cin>>user;
	for(int i=total;i<total+user;i++)
	{
		
		cout<<"Enter data of employee "<<i+1<<endl<<endl;

		cout<<"Enter employee ID No: ";
		cin>>e[i].id;
		cout<<"\n----------------------------------";
		cout<<"\nEnter first name: ";
		cin>>e[i].firstname;
		cout<<"\n----------------------------------";
		cout<<"\nEnter Last name: ";
		cin>>e[i].lastname;
		cout<<"\n----------------------------------";
		cout<<"\nEnter the address(no space allowed): ";
		cin>>e[i].address;
		cout<<"\n----------------------------------";
		cout<<"\nEnter the department: ";
		cin>>e[i].department;
		cout<<"\n----------------------------------";
		cout<<"\nEnter the Age: ";
		cin>>e[i].age;
		cout<<"\n----------------------------------";
		cout<<"\nEnter the gender: ";
		cin>>e[i].gender;
		cout<<"\n----------------------------------";
		cout<<"\nEnter the Email Address(no space allowed): ";
		cin>>e[i].email;
		cout<<"\n----------------------------------";
		cout<<"\nEnter the contact: ";
		cin>>e[i].contact;
		cout<<"\n----------------------------------";
		cout<<"\nEnter the salary: ";
		cin>>e[i].salary;
		cout<<"\n----------------------------------";

	}
	total=total+user;
}

void show()
{

	if(total!=0)
	{
		for(int i=0;i<total;i++)
		{
			cout << "\n\t\t\t\t\t-------------------------------" << endl;
	    	cout << "\t\t\t\t\t>>  Viewing  Employee  Data   <<" << endl;
	    	cout << "\t\t\t\t\t-------------------------------" << endl;
	    	
			cout<<"Data of employee "<<i+1<<endl;
			
			cout<<"\nEmployee ID: "<<e[i].id;
			cout<<"\n----------------------------------";
			cout<<"\nFirst Name: "<<e[i].firstname;
			cout<<"\n----------------------------------";
			cout<<"\nLast Name: "<<e[i].lastname;
			cout<<"\n----------------------------------";
			cout<<"\nDepartment: "<<e[i].department;
			cout<<"\n----------------------------------";
			cout<<"\nEnter the Age: "<<e[i].age;
			cout<<"\n----------------------------------";
			cout<<"\nAddress: "<<e[i].address;
			cout<<"\n----------------------------------";
			cout<<"\nGender: "<<e[i].gender;
			cout<<"\n----------------------------------";
			cout<<"\nEmail Address: "<<e[i].email;
			cout<<"\n----------------------------------";
			cout<<"\nContact: "<<e[i].contact;
			cout<<"\n----------------------------------";
			cout<<"\nSalary: "<<e[i].salary;
			cout<<"\n----------------------------------";
		
			}

    }

    else
	{

    	cout<<"No data is entered"<<endl;

	}

}

void search()
{
	if(total!=0)
	{
		string id;
		cout << "\n\t\t\t\t\t-------------------------------" << endl;
    	cout << "\t\t\t\t\t>>  Searching  Employee  Data   <<" << endl;
    	cout << "\t\t\t\t\t-------------------------------" << endl;
    	
		cout<<"Enter id of employee which you want to search"<<endl;
		cin>>id;

		for(int i=0;i<total;i++)
		{

			if(e[i].id==id){

			cout<<"Data of employee "<<i+1<<endl;
			
			cout<<"\n----------------------------------";
			cout<<"\nEmployee ID: "<<e[i].id;
			cout<<"\n----------------------------------";
			cout<<"\nFirst Name: "<<e[i].firstname;
			cout<<"\n----------------------------------";
			cout<<"\nLast Name: "<<e[i].lastname;
			cout<<"\n----------------------------------";
			cout<<"\nDepartment: "<<e[i].department;
			cout<<"\n----------------------------------";
			cout<<"\nEnter the Age: "<<e[i].age;
			cout<<"\n----------------------------------";
			cout<<"\nAddress: "<<e[i].address;
			cout<<"\n----------------------------------";
			cout<<"\nGender: "<<e[i].gender;
			cout<<"\n-----------------------------------";
			cout<<"\nEmail Address: "<<e[i].email;
			cout<<"\n----------------------------------";
			cout<<"\nContact: "<<e[i].contact;
			cout<<"\n----------------------------------";
			cout<<"\nSalary: "<<e[i].salary;
			cout<<"\n----------------------------------";
	

			}

			if(i==total-1)
			{

				cout<<"No such record found"<<endl;

			}
		}
	}

else
	{

		cout<<"No data is entered"<<endl;

	}

}

void update(){

	if(total!=0)
	{
		string id;
		cout << "\n\t\t\t\t\t-------------------------------" << endl;
    	cout << "\t\t\t\t\t>>  Modifying  Employee  Data   <<" << endl;
    	cout << "\t\t\t\t\t-------------------------------" << endl;
    	
		cout<<"Enter id of employee which you want to update"<<endl;
		cin>>id;

	for(int i=0;i<total;i++){

		if(e[i].id==id)
		{
			
			cout<<"\n-------------------------------";
			cout<<"\nOld data of employee "<<i+1;
			cout<<"\n-------------------------------";
			cout<<"\nID: "<<e[i].id;
			cout<<"\n-------------------------------";
			cout<<"\nFirst Name: "<<e[i].firstname;
			cout<<"\n-------------------------------";
			cout<<"\nLast Name: "<<e[i].lastname;
			cout<<"\n-------------------------------";
			cout<<"\nDepartment: "<<e[i].department;
			cout<<"\n-------------------------------";
			cout<<"\nEnter the Age: "<<e[i].age;
			cout<<"\n----------------------------------";
			cout<<"\nAddress: "<<e[i].address;
			cout<<"\n-------------------------------";
			cout<<"\nGender: "<<e[i].gender;
			cout<<"\n-------------------------------";
			cout<<"\nEmail Address: "<<e[i].email;
			cout<<"\n-------------------------------";
			cout<<"\nContact: "<<e[i].contact;
			cout<<"\n-------------------------------";
			cout<<"\nSalary: "<<e[i].salary;
			cout<<"\n-------------------------------";
			cout<<"\n\t\t\t\t\t-------------------------------";

			cout<<"\nEnter new data"<<endl;
			cout<<"\n-------------------------------";
			cout<<"\nEnter id: ";
			cin>>e[i].id;
			cout<<"\n-------------------------------";
			cout<<"\nFirst Name: ";
			cin>>e[i].firstname;
			cout<<"\n-------------------------------";
			cout<<"\nLast Name: ";
			cin>>e[i].lastname;
			cout<<"\n-------------------------------";
			cout<<"\nDepartment: ";
			cin>>e[i].department;
			cout<<"\n-------------------------------";
			cout<<"\nEnter the Age: ";
			cin>>e[i].age;
			cout<<"\n----------------------------------";
			cout<<"\nEnter address: ";
			cin>>e[i].address;
			cout<<"\n-------------------------------";
			cout<<"\nGender: ";
			cin>>e[i].gender;
			cout<<"\n-------------------------------";
			cout<<"\nEmail Address: ";
			cin>>e[i].email;
			cout<<"\n-------------------------------";
			cout<<"\nEnter contact: ";
			cin>>e[i].contact;
			cout<<"\n-------------------------------";
			cout<<"\nEnter salary: ";
			cin>>e[i].salary;
			cout<<"\n-------------------------------";

		break;

		}

		if(i==total-1){

			cout<<"No such record found"<<endl;

		}

	}

}
	else
	{
		cout<<"No data is entered"<<endl;

	}

}

void del()
{
	if(total!=0)
	{

		int press;
		cout<<"Press 1 to delete specific record"<<endl;
		cout<<"Press 2 to delete full record"<<endl;
		cin>>press;
		if(press==1){
		string id;
		cout << "\n\t\t\t\t\t-------------------------------" << endl;
    	cout << "\t\t\t\t\t>>  Removing  Employee  Data   <<" << endl;
    	cout << "\t\t\t\t\t-------------------------------" << endl;
    	
		cout<<"Enter id of employee which you want to delete"<<endl;
		cin>>id;
		cout<<"\t\t\t\t\t-------------------------------";

		for(int i=0;i<total;i++)
		{

			if(e[i].id==id)
			{
				e[i].id=e[i+1].id;
				e[i].firstname=e[i+1].firstname;
				e[i].lastname=e[i+1].lastname;
				e[i].department=e[i+1].department;
				e[i].age=e[i+1].age;
				e[i].address=e[i+1].address;
				e[i].gender=e[i+1].gender;
				e[i].email=e[i+1].email;	
				e[i].contact=e[i+1].contact;
				e[i].salary=e[i+1].salary;

				total--;

				cout<<"Your required record is deleted"<<endl;

				break;

			}

			if(i==total-1){

			cout<<"No such record found"<<endl;

		}

		}

	}

	else if(press==2)
		{
			total=0;
			cout<<"All record is deleted"<<endl;

		}

	else
		{
			cout<<"Invalid Input"<<endl;

		}

}
	else
	{
		cout<<"No data is entered"<<endl;

	}

}

int main()
{

	cout << "\n\t\t\t\t\t-------------------------------" << endl;
    cout << "\t\t\t\t\t>> EMPLOYEE MANAGEMENT SYSTEM <<" << endl;
    cout << "\t\t\t\t\t-------------------------------" << endl;
	
	string username,password;
	cout<<"\n\t\t\t\t\t-------------------------------";
    cout<<"\n\n\t\t\t\t\t\t******Signup******"<<endl;
    cout<<"\t\t\t\t\t-------------------------------";
	
	cout<<"\n\t\t\t\t\tEnter new username: ";
	cin>>username;
	cout<<"\n\t\t\t\t\tEnter new password: ";
	cin>>password;
	cout<<"\t\t\t\t\t-------------------------------";
	
	cout<<"\n\t\t\tYour new id is creating please wait";
	for(int i=0;i<6;i++)
	{

		cout<<".";
		Sleep(500);

	}
	cout<<"\n\t\t\tYour id created successfully";
	Sleep(2000);
	start:
	system("CLS");
	string usrn,pswd;

	cout << "\n\t\t\t\t\t-------------------------------" << endl;
    cout << "\t\t\t\t\t>> EMPLOYEE MANAGEMENT SYSTEM <<" << endl;
    cout << "\t\t\t\t\t-------------------------------" << endl;
	cout<<"\n\n\t\t\t\t\t   LOGIN"<<endl;
	cout<<"\t\t\t\t\t-------------------------------";
	cout<<"\n\t\t\t\t\tEnter username: ";
	cin>>usrn;
	cout<<"\n\t\t\t\t\tEnter password: ";
	cin>>pswd;
	cout<<"\t\t\t\t\t-------------------------------";
	if(usrn==username&&pswd==password)
	{
		system("CLS");
		char ch;
		while(1)
		{
			cout<<"\n\t\t\t>>>>>>>>>  EMPLOYEE MANAGEMENT SYSTEM  <<<<<<<<<";
                cout<<"\n";
                cout<<"\n\t\t\t------------------------------------------------";
                cout<<"\n\t\t\tENTER   1:   To Enter Data of Employees";
                cout<<"\n\t\t\t------------------------------------------------";
                cout<<"\n\t\t\tENTER   2:   To  View List of Employees";
                cout<<"\n\t\t\t------------------------------------------------";
                cout<<"\n\t\t\tENTER   3:   To Search The Data of Employees";
                cout<<"\n\t\t\t------------------------------------------------";
                cout<<"\n\t\t\tENTER   4:   To Modify Existing Employee Details";
                cout<<"\n\t\t\t------------------------------------------------";
                cout<<"\n\t\t\tENTER   5:   To Remove an Employee Details";
                cout<<"\n\t\t\t------------------------------------------------";
                cout<<"\n\t\t\tENTER   6:   To Logout     ";
                cout<<"\n\t\t\t------------------------------------------------";
                cout<<"\n\t\t\tENTER   7:   To Exit     ";
                cout<<"\n\t\t\t------------------------------------------------";
                cout<<"\n\n\t\t\t   Please Enter Your Choice: ";
		
		ch=getch();
	
		system("CLS");
	
		switch(ch)
			{
				case '1':
					empdata();
		
					break;
		
				case '2':
		
					show();
		
					break;
		
				case '3':
		
					search();
		
					break;
		
				case '4':
		
					update();
		
					break;
		
				case '5':
		
					del();
		
					break;
		
				case '6':
		
					goto start;
		
					break;
		
				case '7':
		
					exit(0);
		
					break;
		
				default:
		
					cout<<"\aInvalid Input"<<endl;
		
					break;

		}

	}
		
	return 0;
}

  else if(usrn!=username)
  {
  	cout<<"\n\t\t\aInvalid username please try again";
  	Sleep(3000);
  	goto start;
  }

  else if(pswd!=password)
  {
  	cout<<"\n\t\t\aInvalid password please try again";
  	Sleep(3000);
  	goto start;
  }

  else
  {
  	cout<<"\n\t\t\aInvalid username and password";
  	Sleep(3000);
  	goto start;

  }
  
  }