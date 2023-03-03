//Header Files

#include<iostream>
#include<string.h>
#include<conio.h>
#include<fstream>
#include<dos.h>
#define clrscr() system("cls");

//Using Namespace std
using namespace std;

//Function Declaration

void file();
void front();

void password();
void mainMenu();
void FirstScreen();
void Delay(int x=2);


//Classes
class PassStore
{
	public:
		int Fileswitch;
		char password[10];
}ob8;


//Gloabal Variables
int count;


// 2nd Class for student record
class student
{
	public:
	long int hregrn,bdn; //Hostel Registration Number and Bed number
	char regrn[20];		//Registration Number for student
	char name[22];		//Name of Student
	char fname[20];		//Name of Students Father
	int sem;			//Current Semester of Student
	char roll[20];		//Roll Number of Student
	char address[50];	//Address of Student
	char branch[20];	//Branch of Student
	int age,bt;			//Age of Studen and bt used as a flag


/* Information of room*/
	long int roomn,bedn1,bedn2,bedn3,roomtype,acnac;
	public:
	student()
	{
	bedn1=bedn2=bedn3=0;
	}
	void get()
	{
		char fscreen[500];
		char vv[20];
		strcpy(fscreen,"\n\tEnter the Registration Number...........:");
		int l=strlen(fscreen);
		for(int i=0;i<l;i++)
		{
			cout<<fscreen[i];
			Delay(5);
		}
		gets(regrn);
		strcpy(fscreen,"\tEnter the Father's Name.................:");
		l=strlen(fscreen);
		for(int i=0;i<l;i++)
		{
			cout<<fscreen[i];
			Delay(5);
		}
		gets(fname);
		strupr(fname);
		strcpy(fscreen,"\tEnter the Semester of Student in Integer:");
		l=strlen(fscreen);
		for(int i=0;i<l;i++)
		{
			cout<<fscreen[i];
			Delay(5);
		}
		gets(vv);
		sscanf(vv,"%d",&sem);
		strcpy(fscreen,"\tEnter the Roll Number of the Student....:");
		l=strlen(fscreen);
		for(int i=0;i<l;i++)
		{
			cout<<fscreen[i];
			Delay(5);
		}
		gets(roll);
		strcpy(fscreen,"\tEnter the Address of the Student........:");
		l=strlen(fscreen);
		for(int i=0;i<l;i++)
		{
			cout<<fscreen[i];
			Delay(5);
		}
		gets(address);
		strupr(address);
		strcpy(fscreen,"\tEnter the Branch of the Student.........:");
		l=strlen(fscreen);
		for(int i=0;i<l;i++)
		{
			cout<<fscreen[i];
			Delay(5);
		}
		gets(branch);
		strupr(branch);
		strcpy(fscreen,"\tEnter the Age...........................:");
		l=strlen(fscreen);
		for(int i=0;i<l;i++)
		{
			cout<<fscreen[i];
			Delay(5);
		}
		gets(vv);
		sscanf(vv,"%d",&age);
	}
	void put()
	{
		roomn=hregrn%1000;
		roomtype=(hregrn/1000)%10;
		acnac=(hregrn/10000)%10;
		bdn=(hregrn/100000);
		if(strcmpi(roll,"0")!=0)
		{       bt=1;
			cout<<"\nInformation of Student:";
			Delay(5);
			cout<<"\n\n\tRegistration Number........:"<<regrn;
			Delay(5);
			cout<<"\n\tName.......................:"<<name;
			Delay(5);
			cout<<"\n\tFather's Name..............:"<<fname;
			Delay(5);
			cout<<"\n\tCurrent Semester...........:"<<sem;
			Delay(5);
			cout<<"\n\tRoll Number................:"<<roll;
			Delay(5);
			cout<<"\n\tAddress....................:"<<address;
			Delay(5);
			cout<<"\n\tBranch.....................:"<<branch;
			Delay(5);
			cout<<"\n\tAge:.......................:"<<age;
			Delay(5);
			cout<<"\n\n\tRoom Number................:"<<roomn;
			Delay(5);
			cout<<"\n\tHostel Registration Number:"<<hregrn;
			if(acnac==1)
			{
			if(roomtype==1)
			{
				cout<<"\n\tRoom Type......: Single";
				Delay(5);
				cout<<"\n\tAC / Non AC....: AC";
				Delay(5);
				cout<<"\n\tRoom Charges...: Rs.20,000";
			}
			if(roomtype==2)
			{
				cout<<"\n\tRoom Type....: Double";
				Delay(5);
				cout<<"\n\tAC / Non AC..: AC";
				Delay(5);
				cout<<"\n\tRoom Charges.: Rs.10,000";
			}
			if(roomtype==3)
			{
				cout<<"\n\tRoom Type....: Triple";
				Delay(5);
				cout<<"\n\tAC / Non AC..: AC";
				Delay(5);
				cout<<"\n\tRoom Charges.: Rs.5,000";
			}
		}
		if(acnac==2)
		{
			if(roomtype==1)
			{
				cout<<"\n\tRoom Type....: Single";
				Delay(5);
				cout<<"\n\tAC / Non AC..: Non AC";
				Delay(5);
				cout<<"\n\tRoom Charges.: Rs.10,000";
			}
			if(roomtype==2)
			{
				cout<<"\n\tRoom Type....: Double";
				Delay(5);
				cout<<"\n\tAC / Non AC..: Non AC";
				Delay(5);
				cout<<"\n\tRoom Charges.: Rs.5,000";
			}
			if(roomtype==3)
			{
				cout<<"\n\tRoom Type....: Triple";
				Delay(5);
				cout<<"\n\tAC / Non AC..: Non AC";
				Delay(5);
				cout<<"\n\tRoom Charges.: Rs.3,500";
			}

		}

		if(bdn==1)
		{
			cout<<"\n\tBed number.....:first";
		}
		if(bdn==2)
		{
			cout<<"\n\tBed number.....:Second";
		}
		if(bdn==3)
		{
			cout<<"\n\tBed number.....:Third";
		}

		
 }	}

//Class Member function for Available Beds in Hostel
       void avbl()
	{
		roomn=hregrn%1000;
		roomtype=(hregrn/1000)%10;
		acnac=(hregrn/10000)%10;
		bdn=(hregrn/100000);
		if(strcmpi(roll,"0")==0)
		{       bt=2;
			cout<<"\n\n\tRoom Number...............:"<<roomn;
			cout<<"\n\tHostel Registration Number:"<<hregrn;
			if(acnac==1)
			{
			if(roomtype==1)
			{
				cout<<"\n\tRoom Type......: Single";
				cout<<"\n\tAC / Non AC....: AC";
				cout<<"\n\tRoom Charges...: Rs.20,000";
			}
			if(roomtype==2)
			{
				cout<<"\n\tRoom Type....: Double";
				cout<<"\n\tAC / Non AC..: AC";
				cout<<"\n\tRoom Charges.: Rs.10,000";
			}
			if(roomtype==3)
			{
				cout<<"\n\tRoom Type....: Triple";
				cout<<"\n\tAC / Non AC..: AC";
				cout<<"\n\tRoom Charges.: Rs.5,000";
			}
		}
		if(acnac==2)
		{
			if(roomtype==1)
			{
				cout<<"\n\tRoom Type....: Single";
				cout<<"\n\tAC / Non AC..: Non AC";
				cout<<"\n\tRoom Charges.: Rs.10,000";
			}
			if(roomtype==2)
			{
				cout<<"\n\tRoom Type....: Double";
				cout<<"\n\tAC / Non AC..: Non AC";
				cout<<"\n\tRoom Charges.: Rs.5,000";
			}
			if(roomtype==3)
			{
				cout<<"\n\tRoom Type....: Triple";
				cout<<"\n\tAC / Non AC..: Non AC";
				cout<<"\n\tRoom Charges.: Rs.3,500";
			}

		}

		if(bdn==1)
		{
			cout<<"\n\tBed number.....:first";
		}
		if(bdn==2)
		{
			cout<<"\n\tBed number.....:Second";
		}
		if(bdn==3)
		{
			cout<<"\n\tBed number.....:Third";
		}

		getch();
	}
}
}ob1;

// 3rd class for registration number
class hregrn
{
	public:
	char name[20];
	long int hregrn;
	int bedn1,bedn2,bedn3;
	void reset()
	{
		bedn1=bedn2=bedn3=0;
	}
	void put()
	{
	cout<<"\nName:"<<name;
	cout<<"\nRegn:"<<hregrn;
	cout<<"\nBeds:"<<bedn1<<" "<<bedn2<<" "<<bedn3;
	}
}ob2;




//Main Function


int main()
{
clrscr();
file();
front();

password();
getch();
FirstScreen();
return 0;
}




//File Function to Creat File in Folder
void file()
{
	fstream t1;
	ob8.Fileswitch=5;
	t1.open("C:/hmrecord/doc1.txt",ios::in);
	t1.seekg(0);
	while(t1.read((char*)&ob8,sizeof(ob8)))
	{

	}
	t1.close();
	if(ob8.Fileswitch==5)
	{
        mkdir("C:/hmrecord");			//Directary Creat
    
		 //File creations
	    ofstream fstu("C:/hmrecord/doc3.txt"),fhregrn("C:/hmrecord/doc2.txt"),filetest("C:/hmrecord/doc1.txt"),expdata("Detail.html");
		
		t1.open("C:/hmrecord/doc1.txt",ios::in|ios::out|ios::ate);
		ob8.Fileswitch=1;
		char fscreen[200]="\n\t This is The First Time You Opening The Program\n\n\t\tTo Secure Your Data Enter A Five Digit Password :";
		int l=strlen(fscreen);
		for(int i=0;i<l;i++)
		{
			cout<<fscreen[i];
			Delay(5);
		}
		fgets(ob8.password,6,stdin);
		strcpy(fscreen,"\n\t\tYour Password is...: ");
		l=strlen(fscreen);
		for(int i=0;i<l;i++)
		{
			cout<<fscreen[i];
			Delay(5);
		}
		cout<<ob8.password;
		strcpy(fscreen," \n\t\tNext Time You Will  Need This Password To Open The Program");
		l=strlen(fscreen);
		for(int i=0;i<l;i++)
		{
			cout<<fscreen[i];
			Delay(5);
		}
		getch();
		t1.write((char*)&ob8,sizeof(ob8));
		t1.close();	
	}

}


void front()      /*Front page display*/
{
	clrscr();
	char temp[2000]="\t############################################################\n\n\t\t\t    WELCOME TO PROGRAM\n\n\t############################################################\n\n\t\t\t HOSTEL MANAGEMENT SYSTEM\n\t\t\t Created Date: 2018-06-07\n\n\n\n\n\n\n\n\n\n\nSUBMITED TO:\t\t\t\t\t\tSUBMITED BY:\n     Er.TEJINDER SHARMA\t\t\t\t\t     ABDHESH NAYAK\n     Er.PAVITAR SINGH\t\t\t\t\t     BIDHAN BABU GUPTA\n     Er.AMANPREET KAUR\t\t\t\t\t     NAVJIT KAUR\n";
	int l=strlen(temp);
	for(int i=0;i<l;i++)
	{
		cout<<temp[i];
		Delay();
	}
}






void password()   /*Password*/
{
	fstream t1;
	ob8.Fileswitch=5;
	t1.open("C:/hmrecord/doc1.txt",ios::in);
	t1.seekg(0);
	while(t1.read((char*)&ob8,sizeof(ob8)))
	{
	}
	t1.close();
	char password[10],ch,temp[10],temp2[10]={"close"};
	strcpy(temp,ob8.password);
	int i;
	start:

	printf("\nTo Open And Run the program Entre the password: \n");
	char dumm[]={"************"};
	int j;
	for(i=0;i <5;i++)
	{
		ch = getch();
		password[i] = ch;
		cout<<dumm[i];
		int a =	ch;
		if(a==8)
		{


			cout<<"\b\b  \b\b";
			if(0<i)
				i=i-2;
			else if(0==i)
				i=i-1;

		}
	}

	if((temp[0]==password[0])&&(temp[1]==password[1])&&(temp[2]==password[2])&&(temp[3]==password[3])&&(temp[4]==password[4]))
	{
		cout<<"\nPROGRAM IS OPENED....";
	}
	else if ((temp2[0]==password[0])&&(temp2[1]==password[1])&&(temp2[2]==password[2])&&(temp2[3]==password[3])&&(temp2[4]==password[4]))
	{
		exit(5);
	}
	else
	{
		clrscr();
		{
			cout<<"\nPassword is WRONG try again or type ( close ) to close";
			goto start;
		}
	}
}



//Gloabal Variables For Exporter Function
fstream t12;
char str[50],str2[50]; //Temparary Strings

//Exporter Function
void exporter()
{
	int length,i;
	count=0;
		for(i=0;i<12;i++)
		{
			count++;
			if(count==1)
			{
			strcpy(str,"</td><td>");
			strcpy(str2,ob1.name);
			strcat(str,str2);
			}
			
			if(count==2)
			{
			strcpy(str,"</td><td>");
			strcpy(str2,ob1.fname);
			strcat(str,str2);
			}
			if(count==3)
			{
			strcpy(str,"</td><td>");
			strcpy(str2,ob1.regrn);
			strcat(str,str2);
			}
			if(count==4)
			{
				sprintf(str2,"%d",ob1.sem);
			strcpy(str,"</td><td>");
			strcat(str,str2);
			}if(count==5)
			{
			strcpy(str,"</td><td>");
			strcpy(str2,ob1.roll);
			strcat(str,str2);
			}if(count==6)
			{
			strcpy(str,"</td><td>");
			strcpy(str2,ob1.address);
			strcat(str,str2);
			}if(count==7)
			{
			strcpy(str,"</td><td>");
			strcpy(str2,ob1.branch);
			strcat(str,str2);
			}if(count==8)
			{
				sprintf(str2,"%d",ob1.age);
			strcpy(str,"</td><td>");
			strcat(str,str2);
			}if(count==9)
			{
				sprintf(str2,"%d",ob1.roomn);
			strcpy(str,"</td><td>");
			strcat(str,str2);
			}if(count==10)
			{
			sprintf(str2,"%d",ob1.hregrn);
			strcpy(str,"</td><td>");
			strcat(str,str2);
			}
			if(count==11)
			{
				
			if(ob1.acnac==1)
			{
			if(ob1.roomtype==1)
			{
				strcpy(str2,"</td><td>Single</td><td>AC</td><td>Rs.20,000</td>");
			}
			if(ob1.roomtype==2)
			{
				strcpy(str2,"</td><td>Double</td><td>AC</td><td>Rs.10,000</td>");
			}
			if(ob1.roomtype==3)
			{
				strcpy(str2,"</td><td>Triple</td><td>AC</td><td>Rs.5,000</td>");
			}
		}
		if(ob1.acnac==2)
		{
			if(ob1.roomtype==1)
			{
				strcpy(str2,"</td><td>Single</td><td>Non AC</td><td>Rs.10,000</td>");
			}
			if(ob1.roomtype==2)
			{
				strcpy(str2,"</td><td>Double</td><td>Non AC</td><td>Rs.5,000</td>");
			}
			if(ob1.roomtype==3)
			{
				strcpy(str2,"</td><td>Triple</td><td>Non AC</td><td>Rs.3,500</td>");
			}

		}
		strcpy(str,str2);
}
if(count==12)
{

		if(ob1.bdn==1)
		{
			strcpy(str2,"<td>first</td></tr>");
		}
		if(ob1.bdn==2)
		{
			strcpy(str2,"<td>Second</td></tr>");
		}
		if(ob1.bdn==3)
		{
			strcpy(str2,"<td>Third</td></tr>");
		}
	strcpy(str,str2);
}
			length=strlen(str);
			t12.write((char*)&str,length);

}
	
}
	
	
				
//Function for Export all Data

void exportdataall()
{
	clrscr();
	fstream t11;
	int length,studentcount=0;
	remove("Detail.html");							//Deletion Of old file
	ofstream expdata("Detail.html");					//Creatation of New file
	t12.open("Detail.html",ios::in|ios::out|ios::ate);
	t11.open("C:/hmrecord/doc3.txt",ios::in);
	t11.seekg(0);
	
		strcpy(str,"<!DOCTYPE html><html><head><style>table {font-family: arial, sans-serif;border-collapse: collapsewidth: 100%;}td, th {border: 1px solid #dddddd;text-align: left;padding: 4px;}tr:nth-child(even) {background-color: #dddddd;}</style></head><body><h1 style=\"color=\"red\" align=\"center\";>ACET HOSTEL</h1><h2>Hostel Students Detail</h2><h3 align=\"right\">Contact : 98XXXXXXXX</h3><table><tr><th>SN.</th><th>Name</th><th>Father's Name</th><th>Registration No.</th><th>Sem</th><th>Roll No.</th><th>Address</th><th>Branch</th><th>Age</th><th>Room Number</th><th>Hostel Regn No.</th><th>Room Type</th><th>AC / Non AC</th><th>Room Charges</th><th>Bed number</th></tr><tr>");
		length=strlen(str);
		t12.write((char*)&str,length);
	while(t11.read((char*)&ob1,sizeof(ob1)))
	{
		ob1.put();
		if(strcmp(ob1.roll,"0")==0)
		{
			continue;
		}
		studentcount++;
		if((studentcount%21)==0)
		{
			strcpy(str,"</tr></table><h3 align=\"right\";><br><br>............................................<br>Hostel Incharge Signature</h3><br><h1 style=\"color=\"red\" align=\"center\";>ACET HOSTEL</h1><h2>Hostel Students Detail</h2><h3 align=\"right\">Contact : 98XXXXXXXX</h3><table><tr><th>SN.</th><th>Name</th><th>Father's Name</th><th>Registration No.</th><th>Sem</th><th>Roll No.</th><th>Address</th><th>Branch</th><th>Age</th><th>Room Number</th><th>Hostel Regn No.</th><th>Room Type</th><th>AC / Non AC</th><th>Room Charges</th><th>Bed number</th></tr><tr>");
	length=strlen(str);
	t12.write((char*)&str,length);
		}
		strcpy(str,"<td>");
		sprintf(str2,"%d",studentcount);
		strcat(str,str2);
		length=strlen(str);
		t12.write((char*)&str,length);
		exporter();	
	}
		
		
		
	if(ob1.bt==5)
	{
	cout<<"There is No Data Present";
	getch();
	}
	
	
	strcpy(str,"</tr></table><h3 align=\"right\";><br><br><br><br>............................................<br>Hostel Incharge Signature</h3></body></html>");
	length=strlen(str);
	t12.write((char*)&str,length);
	t12.close();
	t11.close();
	
	
}

//Exporter function of one student
void exportdataone()
{
	clrscr();
	fstream t11;
	int cc,pos,l,length;
	long int rn;
	char fscreen [50];
	char name1[20];
	int bh;	// Flag pointer
do{
m2:     clrscr();
	strcpy(fscreen,"Enter A Choice By Which You Want To Search Student\n1.By Name\n2.College Registration Number\n3.Hostel Registration Number\n4.Exit:\n\n\t\tEnter Your Choice:");
	l=strlen(fscreen);
		for(int i=0;i<l;i++)
		{
			cout<<fscreen[i];
			Delay(5);
		}
	char ttd[20]="";
	bh=10;
	gets(ttd);
	sscanf(ttd,"%d",&bh);
	
		remove("Detail.html");
	ofstream expdata("Detail.html");
	t12.open("Detail.html",ios::in|ios::out|ios::ate);
	t11.open("C:/hmrecord/doc3.txt",ios::in);
	t11.seekg(0);
	
	strcpy(str,"<!DOCTYPE html><html><head><style>table {font-family: arial, sans-serif;border-collapse: collapsewidth: 100%;}td, th {border: 1px solid #dddddd;text-align: left;padding: 4px;}tr:nth-child(even) {background-color: #dddddd;}</style></head><body><h1 style=\"color=\"red\" align=\"center\";>ACET HOSTEL</h1><h2>Hostel Students Detail</h2><h3 align=\"right\">Contact : 98XXXXXXXX</h3><table><tr><th>SN.</th><th>Name</th><th>Father's Name</th><th>Registration No.</th><th>Sem</th><th>Roll No.</th><th>Address</th><th>Branch</th><th>Age</th><th>Room Number</th><th>Hostel Regn No.</th><th>Room Type</th><th>AC / Non AC</th><th>Room Charges</th><th>Bed number</th></tr><tr><td>1</td>");
	length=strlen(str);
	t12.write((char*)&str,length);
	
switch(bh)
{
	case 1:
		clrscr();
		cout<<"\n\tEnter The Name..........................:";
		gets(name1);
		while(t11.read((char*)&ob1,sizeof(ob1)))
		{
			if(strcmpi(ob1.name,name1)==0)
			{
				cc=1;
				break;
			}
		}
		t11.clear();
		if(cc==0)
		{
			cout<<"\n\tNo Such Name Exist...";
			getch();
			t11.close();
			goto m2;
		}
		pos=t11.tellp();
		t11.seekp((pos-sizeof(ob1)));
		ob1.put();
		getch();
		exporter();
		t12.close();
		t11.close();
		cc=0;
	break;


	case 2:
		clrscr();
		cout<<"\n\tEnter The Registration Number:";
		gets(name1);
		while(t11.read((char*)&ob1,sizeof(ob1)))
		{
			if(strcmpi(ob1.regrn,name1)==0)
			{
				cc=1;
				break;
			}
		}
		t11.clear();
		if(cc==0)
		{
			cout<<"\n\tNo Such Registration Number Exist...";
			getch();
			t11.close();
			goto m2;
		}
		pos=t11.tellp();
		t11.seekp((pos-sizeof(ob1)));
		ob1.put();
		exporter();
		t12.close();
		t11.close();
		cc=0;
	break;

	case 3:
	clrscr();
		clrscr();
		cout<<"\n\tEnter Hostel Registration Number:";
		char ttg[20]="";
		rn=0;
		gets(ttg);
		sscanf(ttg,"%ld",&rn);
		while(t11.read((char*)&ob1,sizeof(ob1)))
		{
			if(ob1.hregrn==rn)
			{
				cc=1;
				break;
			}
		}
		t11.clear();
		if(cc==0)
		{
			cout<<"\n\tNo Such Registration Number Exist...";
			getch();
			t11.close();
			goto m2;
		}
		pos=t11.tellp();
		t11.seekp((pos-sizeof(ob1)));
		ob1.put();
		exporter();
		strcpy(str,"</tr></table><h3 align=\"right\";><br><br><br><br>............................................<br>Hostel Incharge Signature</h3></body></html>");
	length=strlen(str);
	t12.write((char*)&str,length);
	
		t12.close();
		t11.close();
		cc=0;
		cout<<"Record is Exported";
		getch();
		break;
}
}while(bh!=4);	
}

//Main Exporter Function
exportdata()
{
	int ch;
	char vv[10];
	password();
	clrscr();
	cout<<"Select a Option\n\t1.Export All Data\n\t2.Export Detail of a single student\n\t3.Exit\n\t\tEnter A Choice : ";
	do
	{
		gets(vv);
		sscanf(vv,"%d",&ch);
		if(ch==1)
		{
			exportdataall();
			clrscr();
			cout<<"\n\n\t\tAll Record Has Been Exported";
			getch();
			break;
		}
		else if(ch==2)
		{
			exportdataone();
			clrscr();
			cout<<"\n\n\t\tRecord Has Been Exported";
			getch();
			break;
		}
		else if(ch==3)
		{
			cout<<"goes to back";
			getch();
			break;
		}
		else
		{
		cout<<"Wrong Choice try again : ";
		getch();
		}
		}while(ch!=3);	

}



void FirstScreen()
{
	clrscr();
	int ch;
	char tt[20]="";
	do
	{
		clrscr();
		char fscreen[100]="Enter A Choice\n\t1.Open Program\n\t2.Remove All Folder\n\t3.Export\n\t4.Exit\n\n\t\tEnter A Choice:";
		int l=strlen(fscreen);
		for(int i=0;i<l;i++)
		{
			cout<<fscreen[i];
			Delay(5);
		}
		ch=0;
		gets(tt);
		sscanf(tt,"%d",&ch);
		if(ch==1)
			mainMenu();
		if(ch==2)
		{
			password();
		       remove("C:/hmrecord/doc2.txt");
			remove("C:/hmrecord/doc3.txt");
			cout<<"\nRemoved\n";
			ofstream fstu("C:/hmrecord/doc3.txt"),fhregrn("C:/hmrecord/doc2.txt");
			getch();
		}
		if(ch==3)
		{
			exportdata();
		}
	}while(ch!=4);
}






//Main Menu Function
void mainMenu()
{
char tt[20];
long int nac3=1,nac2=51,ac3=151,ac2=201,ac1=251,rn,bedn,roomtype,acnac,bd,A,B,C,D;
fstream t1,t2,t3,t4;
	int ch;
do
{       clrscr();
	int n,age,c=0,cc=0,pos,no_rec,pos1;
	char name1[20],name2[20];
	aa:
	char fscreen[1000]="\n\t-------------------------------\n\t   HOSTEL MANAGEMENT SYSTEM\n\t-------------------------------\n\t1.Add Detail Of New Room...\n\t2.Display The Detail All Students...\n\t3.Display A Single Record Of A Student...\n\t4.Modify A Record...\n\t5.Delete A Record....\n\t6.Availbility of Bed Resitered...\n\t7.Add Student In old Available Bed...\n\t8.Change Password.....\n\t9.Go To Main Menu...\n\n\tEnter Your Choice:";
		int l=strlen(fscreen);
		for(int i=0;i<l;i++)
		{
			cout<<fscreen[i];
			Delay();
		}	
	ch=0;
	gets(tt);
	sscanf(tt,"%d",&ch);
switch(ch)
{
case 1:
	char tta[20];
	ob2.reset();
	clrscr();
	strcpy(fscreen,"\n\tEnter The Type:\n\t1.AC\n\t2.Non AC\n\tChose Any Number 1 or 2:");
	l=strlen(fscreen);
		for(int i=0;i<l;i++)
		{
			cout<<fscreen[i];
			Delay(5);
		}
	acnac=0;
	gets(tta);
	sscanf(tta,"%ld",&acnac);

if(acnac==1)
{
	strcpy(fscreen,"\n\tEnter The Room Type: \n\t1.Single\n\t2.Double\n\t3.Triple:\nChoose Any Number 1,2 or 3:");
	l=strlen(fscreen);
		for(int i=0;i<l;i++)
		{
			cout<<fscreen[i];
			Delay(5);
		}
	char ttb[20]="";
	roomtype=5;
	gets(ttb);
	sscanf(ttb,"%ld",&roomtype);
	cout<<"\n\tEnter The Student Name..................:";
	gets(name1);
	strupr(name1);
if(roomtype==1)
{       bd=1;
	A=bd*100000;
	B=acnac*10000;
	C=roomtype*1000;
	D=ac1;
	rn=A+B+C+D;
	ob1.bedn1=ob2.bedn1=1;
	t1.open("C:/hmrecord/doc2.txt",ios::in|ios::out|ios::ate);
	t1.seekp(0);
	while(t1.read((char*)&ob2,sizeof(ob2)))
	{
		if(rn==ob2.hregrn)
		{
			rn++;
		}
	}
	t1.close();
	t1.open("C:/hmrecord/doc2.txt",ios::in|ios::out|ios::ate);
	strcpy(ob2.name,name1);
	ob2.hregrn=rn;
	ob2.bedn1=1;
}
else if(roomtype==2)
{       bd=1;
	A=bd*100000;
	B=acnac*10000;
	C=roomtype*1000;
	D=ac2;
	rn=A+B+C+D;
	ob1.bedn1=ob2.bedn1=1;
	t1.open("C:/hmrecord/doc2.txt",ios::in|ios::out|ios::ate);
	t1.seekp(0);
	while(t1.read((char*)&ob2,sizeof(ob2)))
	{
		if(rn==ob2.hregrn)
		{
			bd++;
			if(bd==3)
			{
				bd=1;
				ac2++;
			}
			A=bd*100000;
			B=acnac*10000;
			C=roomtype*1000;
			D=ac2;
			rn=A+B+C+D;
		}
	}
	t1.close();
	t1.open("C:/hmrecord/doc2.txt",ios::in|ios::out|ios::ate);
	strcpy(ob2.name,name1);
	ob2.hregrn=rn;
	ob2.reset();
	if(bd==1)
	{
	ob2.bedn1=1;
	}
	if(bd==2)
	{
	ob2.bedn2=1;
	}
}
else if(roomtype==3)
{       bd=1;
	A=bd*100000;
	B=acnac*10000;
	C=roomtype*1000;
	D=ac3;
	rn=A+B+C+D;
	ob1.bedn1=ob2.bedn1=1;
	t1.open("C:/hmrecord/doc2.txt",ios::in|ios::out|ios::ate);
	t1.seekp(0);
	while(t1.read((char*)&ob2,sizeof(ob2)))
	{
		if(rn==ob2.hregrn)
		{
			bd++;
			if(bd==4)
			{
				bd=1;
				ac3++;
			}
			A=bd*100000;
			B=acnac*10000;
			C=roomtype*1000;
			D=ac3;
			rn=A+B+C+D;
		}
	}
	t1.close();
	t1.open("C:/hmrecord/doc2.txt",ios::in|ios::out|ios::ate);
	strcpy(ob2.name,name1);
	ob2.hregrn=rn;
	ob2.reset();
	if(bd==1)
	{
	ob2.bedn1=1;
	}
	if(bd==2)
	{
	ob2.bedn2=1;
	}
	if(bd==3)
	{
	ob2.bedn3=1;
	}
}
else
{
cout<<"Wrong Choice";
getch();
goto aa;
}

}


//for non ac


else if(acnac==2)
{	strcpy(fscreen,"\n\tEnter The Room Type \n\t2.Double\n\t3.Triple:\nChoose Any Number 1,2 or 3:");
	l=strlen(fscreen);
		for(int i=0;i<l;i++)
		{
			cout<<fscreen[i];
			Delay(5);
		}
	char ttc[20]="";
	roomtype=5;
	gets(ttc);
	sscanf(ttc,"%ld",&roomtype);
	cout<<"\n\tEnter the Student Name.................:";
	gets(name1);
	strupr(name1);
if(roomtype==2)
{       bd=1;
	A=bd*100000;
	B=acnac*10000;
	C=roomtype*1000;
	D=nac2;
	rn=A+B+C+D;
	ob1.bedn1=ob2.bedn1=1;
	t1.open("C:/hmrecord/doc2.txt",ios::in|ios::out|ios::ate);
	t1.seekp(0);
	while(t1.read((char*)&ob2,sizeof(ob2)))
	{
		if(rn==ob2.hregrn)
		{
			bd++;
			if(bd==3)
			{
				bd=1;
				nac2++;
			}
			A=bd*100000;
			B=acnac*10000;
			C=roomtype*1000;
			D=nac2;
			rn=A+B+C+D;
		}
	}
	t1.close();
	t1.open("C:/hmrecord/doc2.txt",ios::in|ios::out|ios::ate);
	strcpy(ob2.name,name1);
	ob2.hregrn=rn;
	ob2.reset();
	if(bd==2)
	{
	ob2.bedn1=1;
	}
	if(bd==3)
	{
	ob2.bedn2=1;
	}
}
else if(roomtype==3)
{       bd=1;
	A=bd*100000;
	B=acnac*10000;
	C=roomtype*1000;
	D=nac3;
	rn=A+B+C+D;
	ob1.bedn1=ob2.bedn1=1;
	t1.close();
	t1.open("C:/hmrecord/doc2.txt",ios::in|ios::out|ios::ate);
	t1.seekp(0);
	while(t1.read((char*)&ob2,sizeof(ob2)))
	{
		if(rn==ob2.hregrn)
		{
			bd++;
			if(bd==4)
			{
				bd=1;
				nac3++;
			}

			A=bd*100000;
			B=acnac*10000;
			C=roomtype*1000;
			D=nac3;
			rn=A+B+C+D;
		}
	}
	t1.close();
	t1.open("C:/hmrecord/doc2.txt",ios::in|ios::out|ios::ate);
	strcpy(ob2.name,name1);
	ob2.hregrn=rn;
	ob2.reset();
	if(bd==1)
	{
	ob2.bedn1=1;
	}
	if(bd==2)
	{
	ob2.bedn2=1;
	}
	if(bd==3)
	{
	ob2.bedn3=1;
	}
}

else
{
cout<<"Wrong Choice";
getch();
goto aa;
}


}
else
{
cout<<"Wrong Choice";
getch();
goto aa;
}
	
	t1.write((char*)&ob2,sizeof(ob2));
	t1.close();
	t1.open("C:/hmrecord/doc3.txt",ios::in|ios::out|ios::ate);
	strcpy(ob1.name,name1);
	ob1.hregrn=rn;
	ob1.get();
	t1.write((char*)&ob1,sizeof(ob1));
	t1.close();

	t1.open("C:/hmrecord/doc3.txt",ios::in|ios::out|ios::ate);
	t1.read((char*)&ob2,sizeof(ob2));
	{
	    ob1.put();
	}
	    t1.close();
	    getch();
break;
case 2:
clrscr();
	ob1.bt=5;
	t1.open("C:/hmrecord/doc3.txt",ios::in);
	t1.seekg(0);
	while(t1.read((char*)&ob1,sizeof(ob1)))
	{
		ob1.put();
		getch();
	}
	if(ob1.bt==5)
	{
	cout<<"There is No Data Present";
	getch();
	}
	t1.close();
break;
case 3:
	clrscr();
	int bh;
do{
m2:     clrscr();
	strcpy(fscreen,"Enter A Choice By Which You Want To Search Student\n1.By Name\n2.College Registration Number\n3.Hostel Registration Number\n4.Exit:\n\n\t\tEnter Your Choice:");
	l=strlen(fscreen);
		for(int i=0;i<l;i++)
		{
			cout<<fscreen[i];
			Delay(5);
		}
	char ttd[20]="";
	bh=10;
	gets(ttd);
	sscanf(ttd,"%d",&bh);
switch(bh)
{
	case 1:
		clrscr();
		cout<<"\n\tEnter The Name..........................:";
		gets(name1);
		t1.open("C:/hmrecord/doc3.txt",ios::in|ios::out|ios::ate);
		t1.seekg(0);
		while(t1.read((char*)&ob1,sizeof(ob1)))
		{
			if(strcmpi(ob1.name,name1)==0)
			{
				cc=1;
				break;
			}
		}
		t1.clear();
		if(cc==0)
		{
			cout<<"\n\tNo Such Name Exist...";
			getch();
			t1.close();
			goto m2;
		}
		pos=t1.tellp();
		t1.seekp((pos-sizeof(ob1)));
		ob1.put();
		getch();
		t1.close();
		cc=0;
	break;


	case 2:
		clrscr();
		cout<<"\n\tEnter The Registration Number:";
		gets(name1);
		t1.open("C:/hmrecord/doc3.txt",ios::in|ios::out|ios::ate);
		t1.seekg(0);
		while(t1.read((char*)&ob1,sizeof(ob1)))
		{
			if(strcmpi(ob1.regrn,name1)==0)
			{
				cc=1;
				break;
			}
		}
		t1.clear();
		if(cc==0)
		{
			cout<<"\n\tNo Such Registration Number Exist...";
			getch();
			t1.close();
			goto m2;
		}
		pos=t1.tellp();
		t1.seekp((pos-sizeof(ob1)));
		ob1.put();
		getch();
		t1.close();
		cc=0;
	break;

	case 3:
	clrscr();
		clrscr();
		cout<<"\n\tEnter Hostel Registration Number:";
		char ttg[20]="";
		rn=0;
		gets(ttg);
		sscanf(ttg,"%ld",&rn);
		t1.open("C:/hmrecord/doc3.txt",ios::in|ios::out|ios::ate);
		t1.seekg(0);
		while(t1.read((char*)&ob1,sizeof(ob1)))
		{
			if(ob1.hregrn==rn)
			{
				cc=1;
				break;
			}
		}
		t1.clear();
		if(cc==0)
		{
			cout<<"\n\tNo Such Registration Number Exist...";
			getch();
			t1.close();
			goto m2;
		}
		pos=t1.tellp();
		t1.seekp((pos-sizeof(ob1)));
		ob1.put();
		getch();
		t1.close();
		cc=0;
		break;
}
}while(bh!=4);
break;

case 4:
	clrscr();
	int bh1;
do{
m4:     clrscr();
	strcpy(fscreen,"Enter A Choice By Which You Want To Search Student To Upbate Details\n1.By Name\n2.College Registration Number\n3.Hostel Registration Number\n4.Exit:\n\n\t\tEnter Your Choice:");
	l=strlen(fscreen);
		for(int i=0;i<l;i++)
		{
			cout<<fscreen[i];
			Delay(5);
		}
	char ttm[20]="";
	bh1=0;
	gets(ttm);
	sscanf(ttm,"%d",&bh1);
switch(bh1)
{
	case 1:
		clrscr();
		cout<<"\n\tEnter The Name...........................:";
		gets(name1);
		t1.open("C:/hmrecord/doc3.txt",ios::in|ios::out|ios::ate);
		t1.seekp(0);
		while(t1.read((char*)&ob1,sizeof(ob1)))
		{
			if(strcmpi(ob1.name,name1)==0)
			{
				c=1;
				break;
			}
		}
		t1.clear();
		if(c==0)
		{
			cout<<"\n\tNo Such Name Exist..";
			getch();
			t1.close();
			goto m4;
		}
		pos1=t1.tellp();
		t1.seekp(pos1-sizeof(ob1));
		cout<<"\n\tEnter The Student Name.................:";
		gets(name1);
		strupr(name1);
		strcpy(ob1.name,name1);

		ob1.get();
		t1.write((char*)&ob1,sizeof(ob1));
		cout<<"\n\tRecord has been modified.";
		getch();
		t1.close();
		break;


	case 2:

		clrscr();
		cout<<"\n\tEnter the College Registration Number:";
		gets(name1);
		t1.open("C:/hmrecord/doc3.txt",ios::in|ios::out|ios::ate);
		t1.seekp(0);
		while(t1.read((char*)&ob1,sizeof(ob1)))
		{
			if(strcmpi(ob1.regrn,name1)==0)
			{
				c=1;
				break;
			}
		}
		t1.clear();
		if(c==0)
		{
			cout<<"\n\tNo Such Registration Number Exist..";
			getch();
			t1.close();
			goto m4;
		}
		pos1=t1.tellp();
		t1.seekp(pos1-sizeof(ob1));
		cout<<"\n\tEnter The Student Name";
		gets(name1);
		strupr(name1);
		strcpy(ob1.name,name1);

		ob1.get();
		t1.write((char*)&ob1,sizeof(ob1));
		cout<<"\n\tRecord has been Modified.";
		getch();
		t1.close();
		break;

	case 3:

		clrscr();
		cout<<"\n\tEnter the Hostel Registraion Number:";
		char ttp[20]="";
		rn=0;
		gets(ttp);
		sscanf(ttp,"%ld",&rn);
		t1.open("C:/hmrecord/doc3.txt",ios::in|ios::out|ios::ate);
		t1.seekp(0);
		while(t1.read((char*)&ob1,sizeof(ob1)))
		{
			if(ob1.hregrn==rn)
			{
				c=1;
				break;
			}
		}
		t1.clear();
		if(c==0)
		{
			cout<<"\n\tNo Such Reg Number Exist..";
			getch();
			t1.close();
			goto m4;
		}
		pos1=t1.tellp();
		t1.seekp(pos1-sizeof(ob1));
		cout<<"\n\tEnter The Student Name.................:";
		gets(name1);
		strupr(name1);
		strcpy(ob1.name,name1);
		ob1.get();
		t1.write((char*)&ob1,sizeof(ob1));
		strcpy(fscreen,"\n\tRecord has been Modified.");
		l=strlen(fscreen);
		for(int i=0;i<l;i++)
		{
			cout<<fscreen[i];
			Delay(5);
		}
		getch();
		t1.close();
		break;
	}
	}while(bh1!=4);
	break;

case 5:
       clrscr();
	int bh8;
do{
m5:     clrscr();
	strcpy(fscreen,"Enter A Choice By Which You Want To Search Student To Delete\n1.By Name\n2.College Registration\n3.Hostel Registration Number\n4.Exit:\n\n\t\tEnter Your Choice:");
	l=strlen(fscreen);
		for(int i=0;i<l;i++)
		{
			cout<<fscreen[i];
			Delay(5);
		}
	char ttt[20]="";
	bh8=0;
	gets(ttt);
	sscanf(ttt,"%d",&bh8);
switch(bh8)
{
	case 1:
		clrscr();
		cout<<"\n\tEnter the Name..........................:";
		gets(name1);
		t1.open("C:/hmrecord/doc3.txt",ios::in|ios::out|ios::ate);
		t1.seekp(0);
		while(t1.read((char*)&ob1,sizeof(ob1)))
		{
			if(strcmpi(ob1.name,name1)==0)
			{
				c=1;
				break;
			}
		}
		t1.clear();
		if(c==0)
		{
			cout<<"\n\tNo Such Name Exist..";
			getch();
			t1.close();
			goto m5;
		}
		pos1=t1.tellp();
		t1.seekp(pos1-sizeof(ob1));
		strcpy(ob1.roll,"0");
		t1.write((char*)&ob1,sizeof(ob1));
		cout<<"\n\tRecord has been Deleted.";
		getch();
		t1.close();
		break;


	case 2:

		clrscr();
		cout<<"\n\tEnter the College Registration Number:";
		gets(name1);
		t1.open("C:/hmrecord/doc3.txt",ios::in|ios::out|ios::ate);
		t1.seekp(0);
		while(t1.read((char*)&ob1,sizeof(ob1)))
		{
			if(strcmpi(ob1.regrn,name1)==0)
			{
				c=1;
				break;
			}
		}
		t1.clear();
		if(c==0)
		{
			cout<<"\n\tNo Such Reg Number Exist..";
			getch();
			t1.close();
			goto m5;
		}
		pos1=t1.tellp();
		t1.seekp(pos1-sizeof(ob1));
		strcpy(ob1.roll,"0");
		t1.write((char*)&ob1,sizeof(ob1));
		cout<<"\n\tRecord has been Deleted.";
		getch();
		t1.close();
		break;

	case 3:

		clrscr();
		cout<<"\n\tEnter the Hostel Registration Number:";
		char ttts[20]="";
		rn=0;
		gets(ttts);
		sscanf(ttts,"%ld",&rn);
		t1.open("C:/hmrecord/doc3.txt",ios::in|ios::out|ios::ate);
		t1.seekp(0);
		while(t1.read((char*)&ob1,sizeof(ob1)))
		{
			if(ob1.hregrn==rn)
			{
				c=1;
				break;
			}
		}
		t1.clear();
		if(c==0)
		{
			cout<<"\n\tNo Such Registration Number Exist..";
			getch();
			t1.close();
			goto m5;
		}
		pos1=t1.tellp();
		t1.seekp(pos1-sizeof(ob1));
		strcpy(ob1.roll,"0");
		t1.write((char*)&ob1,sizeof(ob1));
		cout<<"\n\tRecord has been Deleted.";
		getch();
		t1.close();
		break;
	}
	}while(bh8!=4);
	break;


case 6:

clrscr();
	cout<<"\n\n\tBed Available List\n";
	t1.open("C:/hmrecord/doc3.txt",ios::in);
	t1.seekg(0);
	while(t1.read((char*)&ob1,sizeof(ob1)))
	{
		ob1.avbl();
	}
	t1.close();
break;

case 7:
clrscr();
		cout<<"\n\tEnter the Available Hostel Registration Number:";
		char ttta[20];
		rn=0;
		gets(ttta);
		sscanf(ttta,"%ld",&rn);
		t1.open("C:/hmrecord/doc3.txt",ios::in|ios::out|ios::ate);
		t1.seekp(0);
		while(t1.read((char*)&ob1,sizeof(ob1)))
		{
			if((ob1.hregrn==rn)&&((strcmpi(ob1.roll,"0")==0)))
			{
				c=1;
				break;
			}
		}
		t1.clear();
		if(c==0)
		{
			cout<<"\n\tNo Such Registration Number Exist In Old Available list..";
			getch();
			t1.close();
			clrscr();
			goto aa;
		}
		pos1=t1.tellp();
		t1.seekp(pos1-sizeof(ob1));
		cout<<"\n\tEnter the Name..........................:";
		gets(name1);
		strupr(name1);
		strcpy(ob1.name,name1);
		ob1.get();
		t1.write((char*)&ob1,sizeof(ob1));
		cout<<"\n\tRecord has been Added.";
		getch();
		t1.close();
		break;

case 8:
	
		t1.open("C:/hmrecord/doc1.txt",ios::in|ios::out|ios::ate);
		strcpy(fscreen,"\n\tEnter Your New Password :");
		l=strlen(fscreen);
		for(int i=0;i<l;i++)
		{
			cout<<fscreen[i];
			Delay(5);
		}
		fgets(ob8.password,6,stdin);
		strcpy(fscreen,"\n\t\tYour Password is...: ");
		l=strlen(fscreen);
		for(int i=0;i<l;i++)
		{
			cout<<fscreen[i];
			Delay(5);
		}
		cout<<ob8.password;
		t1.write((char*)&ob8,sizeof(ob8));
		t1.close();	
		strcpy(fscreen," \n\t\tNext Time You Will  Need This Password To Open The Program");
		l=strlen(fscreen);
		for(int i=0;i<l;i++)
		{
			cout<<fscreen[i];
			Delay(5);
		}
		getch();
		break;
case 9:
strcpy(fscreen,"\n\tThankyou........");
l=strlen(fscreen);
		for(int i=0;i<l;i++)
		{
			cout<<fscreen[i];
			Delay(5);
		}
getch();
clrscr();
break;


default:
cout<<"\n\t Invalid option..";
getch();

}
}while(ch!=9);
}




void Delay(int x)
{ int m=0,s=0,ms=0,mms=0,h=0;
while(h<2)
{
	mms++;

	if(mms==5){
		mms=0;
		ms++;
	if(ms==59){
		ms=0;
		s++;
		if(s==59){
			s=0;
			m++;
			if(m==59){
				m=0;
				h++;
			}
		}
	}
	}
}
}

