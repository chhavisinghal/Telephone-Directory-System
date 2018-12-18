#include<fstream.h>
#include<conio.h>
#include<process.h>
#include<stdio.h>
#include<string.h>
#include<dos.h>
#include<ctype.h>
class directory
{
 private:
 char name[30];//for name
 char address[50];// for residence
 char phno[10];//for phone number
 int  ch1,ch2;//for asking the choice
 int valid;//for validation
 char yn;//for asking yes or no
 char a,b,c,d,e,f;//password variables

 public:
 void intro();//for introduction of the project
 void mainmenu();// for main menu
 void user();//for user level
 void admin();//for administrator level
 void getdata(); //for getting the information
 void showdata(); //for displaying the information
 void add_record();//for adding the record
 void report();//for displaying the record
 void no_of_records();//for total no. of records
 void delete_record();//for deleting the record
 void update_record();//for updating the record
 void search_phone();//for searching by phone no.
 void search_name();//for searching by name
 void password();//for password
 void startagain();//for starting again
 void std_isd();//for STD/ISD codes

}d1;


 void directory::intro()
 {

	clrscr();

	gotoxy(15,10);
	cout<<"**************** W E L C O M E  *********************** ";
	gotoxy(15,12);
	cout<<"*** S T. M A R K ' S  S R.  S E C. P U B L I C  S C H O O L *** ";
	gotoxy(20,14);
	textcolor(YELLOW);
	cputs(" T E L E P H O N E  D I R E C T O R Y  S Y S T E M  ");
	gotoxy(30,16);
	cout<<" M A D E  B Y :-  ";
	gotoxy(30,18);
	cout<<" C H H A V I  S I N G H A L ";

	gotoxy(40,20);
	textcolor(CYAN);
	cputs(" * PRESS ENTER TO CONTINUE * ");
	getch();

 }

  //###################################################################//
  //                       M A I N  M E N U                            //
  //###################################################################//

 void directory::mainmenu()
 {

   clrscr();

   gotoxy(10,5);
   cout<<"\t\t \n\t\t         M A I N  M E N U \n";
   cout<<"\t\t \n\t\t    (1)  U S E R  L E V E L ";
   cout<<"\t\t \n\t\t    (2)  A D M I N I S T R A T O R   L E V E L";
   cout<<"\t\t \n\t\t    (3)  S T D / I S D  C O D E S ";
   cout<<"\t\t \n\t\t    (4)  E X I T     \n\n      " ;
   cout<<" \t\t\n\t\t    Enter your choice  :";
   cin>>ch1;


     switch(ch1)
     {
	    case 1 : clrscr();
		     d1.user();
		     break;

	    case 2 : clrscr();
		     d1.admin();
		     break;

	    case 3 : clrscr();
		     d1.std_isd();
		     break;

	    case 4 : exit(0);
		     break;

	    default : cout<<" \n Wrong choice ";
		      break;
    }
 }

//####################################################################//
//                          U S E R  L E V E L                        //
//####################################################################//

  void directory::user()
  {
	  clrscr();

	  cout<<"\t\t\t \n\t\t\t    U S E R  L E V E L "<<endl;
	  cout<<"\t\t\t \n\t\t    (1) Report ";
	  cout<<"\t\t\t \n\t\t    (2) No of Records";
	  cout<<"\t\t\t \n\t\t    (3) Search By Phone No ";
	  cout<<"\t\t\t \n\t\t    (4) Search By Name ";
	  cout<<"\t\t\t \n\t\t    (5) Main Menu";
	  cout<<"\t\t\t \n\t\t    (6) Exit "<<endl;

	  cout<<"\t\t\t \n\t\t\t Enter your choice  :";
	  cin>>ch2;

	  switch(ch2)
	  {

	    case 1:  clrscr();
		     d1.report();
		     break;

	    case 2:  clrscr();
		     d1.no_of_records();
		     break;

	    case 3:  clrscr();
		     d1.search_phone();
		     break;

	    case 4:  clrscr();
		     d1.search_name();
		     break;

	    case 5:  clrscr();
		     d1.mainmenu();
		     break;

	    case 6:  exit(0);
		     break;

	    default: cout<<" \n\t\t Wrong choice";
		     break;
	  }
   }

//################################################################//
//                A D M I N I S T R A T O R  L E V E L            //
//################################################################//

 void directory::admin()
 {
	  clrscr();

	  gotoxy(23,10);

	  //######### CALLING PASSWORD FUNCTION ##############//

	  d1.password();

	  clrscr();
	  cout<<"\n\n\n\t\t A D I M I N I S T R A T E R  L E V E L ";
	  cout<<"\t\t\t\n\t  (1) Add the record  ";
	  cout<<"\t\t\t\n\t  (2) Update the record ";
	  cout<<"\t\t\t\n\t  (3) Delete the record ";
	  cout<<"\t\t\t\n\t  (4) Main menu ";
	  cout<<"\t\t\t\n\t  (5) Exit"<<endl;

	  cout<<"\n\t\t\t Enter your choice  :";
	  cin>>ch2;


	  switch(ch2)
	  {


	    case 1:  d1.add_record();
		     break;

	    case 2:  clrscr();
		     d1.update_record();
		     break;

	    case 3:  clrscr();
		     d1.delete_record();
		     break;

	    case 4:  clrscr();
		     d1.mainmenu();
		     break;

	    case 5:  exit(0);
		     break;

	    default: cout<<" \n Wrong choice";
		     break;
       }
  }


 //################################################################//
 //                    To enter the details                        //
 //################################################################//

  void directory::getdata()
  {
	     clrscr();
	     gotoxy(23,10);

	     cout<<" \n Enter the name : ";
	     gets(d1.name);
	     cout<<" \n Enter the address  :";
	     gets(d1.address);
	     do
	     {
		valid=1;

		cout<<" \n Enter phone number  :";
		gets(d1.phno);

		if(strlen(d1.phno)!=10)
		{
		  valid=0;
		  cout<<"\n\t Enter a valid 10-digit phone number \n";
		  getch();
		}
		else
		{
		  for(int i=0;i<10;i++)
		  {
		    if(!isdigit(d1.phno[i]))
		    {
		      cout <<"\n\t Enter phone number containing digits only \n ";
		      valid=0;
		      break;
		    }
		  }
		}

	     }while(!valid);

   }




//##################################################################//
//                         To show data                             //
//##################################################################//

   void directory::showdata()

   {
	cout<<"\n Name :"<<d1.name<<"\n";
	cout<<"\n Address :"<<d1.address<<"\n";
	cout<<"\n Phone No :"<<d1.phno<<"\n";
	cout<<"----------------------------------------" ;
	getch();
   }


   //#########################################################//
   //               REPORT OF ALL THE RECORDS                 //
   //#########################################################//

   void directory::report()
   {
		     fstream f1;
		     cout<<" \n List of Telephone Directory : ";
		     cout<<" \n ------------------------------";
		     cout<<" \n Press enter to view next record ";
		     cout<<" \n ------------------------------";

		     f1.open("ghar.dat",ios::in|ios::binary);

		      while(!f1.eof()&&f1.read((char*)&d1,sizeof(d1)))
		      {
			d1.showdata();
		      }
		      f1.close();

		     d1.startagain();
   }

   //#######################################################//
   //                  NUMBER OF RECORDS                    //
   //#######################################################//

	     void directory::no_of_records()
	     {
			fstream f1;
			f1.open("ghar.dat",ios::in|ios::binary);
			f1.seekg(0,ios::end);
			int n;
			n=f1.tellg()/sizeof(d1);
			gotoxy(10,5);
			cout<<"\t\t\n Number of Records = "<<n;
			getch();
			d1.startagain();
	      }


	    //########################################################//
	    //                  SEARCH BY PHONE NUMBER                //
	    //########################################################//

	       void directory::search_phone()
	       {
		       fstream f1;
		      cout<<" \n Search By Phone No : ";
		      cout<<" \n ---------------------";
		      char phno1[10],flag1='n';

		      cout<<"\n Enter Phone No : ";
		      gets(phno1);

		      f1.open("ghar.dat",ios::in|ios::binary);


			while(!f1.eof()&&f1.read((char*)&d1,sizeof(d1)))
			{
			     if(strcmpi(phno1,d1.phno)==0)
			     {
			       flag1='y';
			       cout<<"\n\t Record found !!! \t\n";
			       d1.showdata();
			       break;
			     }
			}

		      f1.close();

		      if (flag1=='n')
		      {
		       cout<<"\n\t\t\n------Record not found-----\n";
		      }

		      d1.startagain();
	   }

	    //############################################//
	    //              Searching by name             //
	    //############################################//

	       void directory::search_name()
	       {
		       fstream f1;
		       cout<<" \n Search By Name : ";
		       cout<<" \n -----------------";
		       char name1[30],flag2='n';

		       cout<<"\n Enter Name : ";
		       gets(name1);

		       f1.open("ghar.dat",ios::in|ios::binary);


		       while(!f1.eof() && f1.read((char*)&d1,sizeof(d1)))
		       {
			    if(strcmpi(name1,d1.name)==0)
			    {
			       cout<<"\n\t Record found !!! \n ";
			       d1.showdata();
			       flag2='y';
			       break;

			    }
		       }

		       f1.close();

		       if(flag2=='n')
		       {
			 cout<<"\n\t\t\n------Record not found-----\n";
		       }
		       d1.startagain();
	     }
	    //###################################################//
	    //                   ADD THE RECORD                  //
	    //###################################################//
	     void directory::add_record()
	     {
		      fstream f2;
		      cout<<" \n Add the record  ";
		      clrscr();
		      cout<<"\n\n\n\t\t Add the record ";
		      cout<<"\n\n\t\t Accessing........ ";
		      delay(2000);

		      f2.open("ghar.dat",ios::app|ios::binary);

		      d1.getdata();

		      f2.write((char*)&d1,sizeof(d1));

		      cout<<"\n\t Record added successfully !!!";

		      f2.close();

		      d1.startagain();
       }


		//#################################################//
		//                UPDATE THE RECORD                //
		//#################################################//

	       void directory::update_record()
	       {
		     fstream f2;
		     cout<<" \n Update the record ";
		     cout<<" \n ---------------------";
		     char phno2[10],flag3='n';
		     int record=0;

		     f2.open("ghar.dat",ios::in|ios::out|ios::binary);

		     cout<<"\n Enter Phone No : ";
		     gets(phno2);

		     while(!f2.eof() && f2.read((char*)&d1,sizeof(d1)))
		     {
			 record++;
			 if(strcmpi(phno2,d1.phno)==0)
			 {
			   cout<<"\n Record found !!! ";

			   f2.seekg((record-1)*sizeof(d1));
			   d1.showdata();
			   cout<<" \n Are you sure you want to update(y/n) :";
			   cin>>yn;
			   if(yn!='y')
			   {
			     cout<<"\n Don't want to update ";
			     cout<<"\n (1) Press 1 to exit \n (2) Press 2 to return to main menu \n (3) Press 3 to return to administrator level ";
			     cin>>ch1;
			     if(ch1==1)
			      exit(0);
			     else if(ch1==2)
			      d1.mainmenu();
			     else if(ch1==3)
			      d1.admin();
			   }
			    else if(yn=='y')
			   {
			    cout<<"\n Enter the new record ------";
			    delay(1500);
			    d1.getdata();
			    f2.write((char*)&d1,sizeof(d1));
			    flag3='y';
			    cout<<"\n Record updated succesfully----";
			    break;

			   }
			 }

		     }

		     f2.close();

		     if(flag3=='n')
		     cout<<"\n------ Record not found --------\n";
		     getch();

		     d1.startagain();
	}

	 //####################################################//
	 //                 DELETE THE RECORD                  //
	 //####################################################//

	    void directory::delete_record()
	    {
		    fstream f2,f3;
		    cout<<" \n Delete the record by Phone No : ";
		    cout<<" \n ---------------------";
		    char phno3[10],flag4='n';

		    f2.open("ghar.dat",ios::in|ios::binary);
		    f3.open("ghartemp.dat",ios::app|ios::binary);

		    cout<<"\n Enter Phone No : ";
		    gets(phno3);

		    while(!f2.eof() && f2.read((char*)&d1,sizeof(d1)))
		    {
			if(strcmpi(phno3,d1.phno)==0)
			{
			  flag4='y';
			  d1.showdata();
			  cout<<" \n Are you sure you want to delete(y/n) :";
			  cin>>yn;
			  if(yn!='y')
			  {
			    f3.write((char*)&d1,sizeof(d1));
			  }
			  else
			  {
			    cout<<"\n The record is deleted successfully \n";
			  }
			}
			else
			{
			  f3.write((char*)&d1,sizeof(d1));
			}
		    }
		    f2.close();
		    f3.close();

		    remove("ghar.dat");
		    rename("ghartemp.dat","ghar.dat");

		    if(flag4=='n')
		    cout<<"\n------- Record Not Found --------\n";

		    getch();

		    d1.startagain();
	  }
//###################################################################//
//                          PASSWORD PROGRAM                         //
//###################################################################//

  void directory::password()
  {
	cout<<" Enter the password  :";
	a=getch();
	cout<<" * ";
	b=getch();
	cout<<" * ";
	c=getch();
	cout<<" * ";
	d=getch();
	cout<<" * ";
	e=getch();
	cout<<" * ";
	f=getch();
	cout<<" * ";
    if(a=='c'&&b=='h'&&c=='h'&&d=='a'&&e=='v'&&f=='i')
    {
     cout<<"\n\n\t\t The password is correct \n\t\t Accessing.......";
     delay(2000);

    }
    else
    {
      cout<<" \n\n\t\t Password is incorrect \n";
      cout<<" \n\n\t\t Do you wish to continue ? (y/n) :";
      cin>>yn;
      if(yn=='y')
      {
	cout<<" \n\t\t Press enter to re-enter the password ";
	getch();

	d1.admin();
      }
      else
      {
       exit(0);
      }
    }
  }


   void directory::startagain()
   {
		   cout<<" \n Do you want to exit (y/n) ";
		   cin>>yn;
		   if(yn=='y')
		   {
		     exit(0);
		   }
		   else
		   {
		     d1.mainmenu();
		   }
   }

   //####################################################################//
   //                     S T D / I S D  C O D E S                       //
   //####################################################################//

  void directory::std_isd()
  {

  cout<<"\t\t\t  City STD Code \n\n ";
  cout<<"\t Ahmedabad - 079 "<<"\t\t Bangalore - 080 \n "<<"\t Bhopal - 0755 ";
  cout<<"\t\t\t Kolkata - 033 \n "<<"\t Chennai - 044 "<<"\t\t\t Delhi - 011 \n ";
  cout <<"\t Hyderabad -  040 "<<"\t\t Indore - 0731 \n "<<"\t Mumbai - 022 ";
  cout<<"\t\t\t Vadodara - 0265\n"<<"\t Calcutta  - 33 "<<"\t\t Chandigarh - 172\n ";
  cout<<"\t Chennai - 44"<<"\t\t\t Gandhinagar  - 2712\n "<<"\t Gurgaon  - 124 ";
  cout<<"\t\t Guwahati  - 361\n"<<"\t Hyderabad  - 40 "<<"\t\t Jaipur  - 141\n "<<"\t Jammu  -191" ;
  cout<<"\t\t\t Lucknow  -522\n "<<"\t Ludhiana -161 "<<"\t\t\t Mumbai  22\n"<<"\t Patna  -612 "<<"\t\t\t Pune  - 20 \n";

  cout<<"\t\t\t   ISD code\n";
  cout<<"\t Australia - 61"<<"\t\t\t Canada - 1\n"<<"\t Germany -49 ";
  cout<<"\t\t\t India - 91\n "<<"\t Italy  - 39"<<"\t\t\t Japan  -81\n";
  cout<<"\t New zealand  - 64 "<<"\t\t Pakistan - 92\n"<<"\t Russia - 7";
  cout<<"\t\t\t South Africa - 27\n"<<"\t Sri Lanka - 94"<<"\t\t\t UAE  - 971\n ";
  cout<<"\t United Kingdom - 44"<<"\t\t USA -  1\n "<<"\t Zimbabwe  - 263\n";

  d1.startagain();
  getch();

  }

  void main()
  {

    clrscr();

    d1.intro();
    d1.mainmenu();
    getch();

  }








