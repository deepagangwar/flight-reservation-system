#include<iostream>
  #include<string>
  #include<string.h>
  #include<conio.h>
  #include<windows.h>
  using namespace std;
  string getorigin();
  string getdestination();
  string getdate();
  string flightdetails(string a, string b, string c);
  string bookticket(string a, string b);
  string ticketA(string a, string b);
  string ticketB(string a, string b);
  string ticketC(string a, string b);
  string ticketD(string a, string b);
  string ticketE(string a, string b);
  string view_ticket();
  void meal();
  void further_options();
  void view_all_bookings();
  class numberofpassenger{
    public:
    string firstname, middlename, contact, age, gender, lastname, address, email, bclass, meal, aadhar, food_choice,payment;
  };
  class numberofpassenger x;
  int main(){
    system("cls");
    int f;
    cout<<"PRESS 1 IF U WANT TO BOOK TICKETS"<<endl;
    cout<<"PRESS 2 IF U WANT TO VIEW ALL BOOKINGS"<<endl;
    cin>>f;
    if(f==1){
      string departure = getorigin();
    string arrival = getdestination();
    string date = getdate();
    flightdetails(departure, arrival, date);
    }
    else if(f==2){
      view_all_bookings();
    }
  return 0;
  }

string getorigin(){
      string departure;
      cout<<"\n\n\t\t\t\t ENTER THE DEPARTURE FROM THE FOLLOWING PLACE"<<endl;
      cout<<"\n\n\t\t\t\t\t\t\t\t\t 1. DELHI \n\n\t\t\t\t\t\t\t\t\t 2. Mumbai \n\n\t\t\t\t\t\t\t\t\t 3. Goa \n\n\t\t\t\t\t\t\t\t\t 4. Varanasi \n\n\t\t\t\t\t\t\t\t\t 5. Dehradun"<<endl;
      cout<<"Enter the place of departure : ";
      cin>>departure;
      return departure;
  }
string getdestination(){
      string destination;
      cout<<"\n\n\t\t\t ENTER THE ARRIVAL DESTINATION FROM THE FOLLOWING PLACES "<<endl;
      cout<<"\n\n\t\t\t\t\t\t\t\t\t 1. JAIPUR \n\n\t\t\t\t\t\t\t\t\t 2. Lucknow \n\n\t\t\t\t\t\t\t\t\t 3. Chennai \n\n\t\t\t\t\t\t\t\t\t 4. Srinagar \n\n\t\t\t\t\t\t\t\t\t 5. Kolkata"<<endl;
      cout<<"Enter the place of arrival : ";
      cin>>destination;
      return destination;
}
string getdate() {
  string date;
  cout<<"Enter the date of journey : ";
  cin>>date;
  return date;
}
string flightdetails(string a, string b, string c){
  if(a=="Delhi"||a=="delhi"||a=="DELHI"||a=="Mumbai"||a=="mumbai"||a=="MUMBAI"||a=="Goa"||a=="goa"||a=="GOA"||a=="Varanasi"||a=="varanasi"||a=="VARANASI"||a=="Dehradun"||a=="dehradun"||a=="DEHRADUN") {
    if(b=="Jaipur"||b=="jaipur"||b=="JAIPUR") {
      ticketA(a, b);
      
    }
    else if(b=="Lucknow"||b=="lucknow"||b=="LUCKNOW"){
      ticketB(a, b);
      
    }
    else if(b=="Chennai"||b=="chennai"||b=="CHENNAI"){
      ticketC(a, b);
      
    }
    else if(b=="Srinagar"||b=="srinagar"||b=="SRINAGAR"){
      ticketD(a, b);
      
    }
    else if(b=="Kolkata"||b=="kolkata"||b=="KOLKATA"){
      ticketE(a, b);
      
    }
    else{
      cout<<"Please Enter A Valid Destination !\n";
      getdestination();
    }
  }
  else{
    cout<<"Please Enter A Valid Origin !\n";
    getorigin();
  }
}
string ticketA(string a, string b){
    cout<<" ____________________________________________________________________________________________________________________________________________________________________\n\n";
    cout<<"\t\t\t\t\t\t\t\t      FLIGHTS TO "<<b<<"\t\t\t\t    \n";
    cout<<"\t\t\t\t\tIndigo Airways\t\t\t\t\t\t\t   Direct\t    \n\n";
    cout<<"\t\t\t\t\t11:45 - 1:10\t\t\t\t\t\t\t   1h 25m\t   \n\n";
    cout<<"\t\t\t\t\t"<<a<<" - "<<b<<"\t\t\t\t\t\t\t   Rs3,625\t    \n";
    cout<<"_____________________________________________________________________________________________________________________________________________________________________\n\n";
    char d;
      cout<<"Do You Want To Book The Ticket (Y/N) : ";
      d=getch();
      cout<<"\n";
      if(d=='y'||d=='Y') {
         x.payment="Rs.7000";
      bookticket(a, b);
      }
      else{
        return a;
    }
    string payment;
   
};
string ticketB(string a, string b){
    cout<<" ____________________________________________________________________________________________________________________________________________________________________\n\n";
    cout<<"\t\t\t\t\t\t\t\t      FLIGHTS TO "<<b<<"\t\t\t\t    \n";
    cout<<"\t\t\t\t\tIndigo Airways\t\t\t\t\t\t\t   Direct\t    \n\n";
    cout<<"\t\t\t\t\t5:15 - 7:10\t\t\t\t\t\t\t   1h 55m\t   \n\n";
    cout<<"\t\t\t\t\t"<<a<<" - "<<b<<"\t\t\t\t\t\t\t   Rs4,603\t    \n\n";
    cout<<"_____________________________________________________________________________________________________________________________________________________________________\n";
    char d;
      cout<<"Do You Want To Book The Ticket (Y/N) : ";
      d=getch();
      cout<<"\n";
      if(d=='y'||d=='Y') {
        x.payment="Rs.9000";
      bookticket(a, b);
      }
      else{
        return a;
    }
    
};
string ticketC(string a, string b){
  cout<<" ____________________________________________________________________________________________________________________________________________________________________\n\n";
    cout<<"\t\t\t\t\t\t\t\t      FLIGHTS TO "<<b<<"\t\t\t\t    \n";
    cout<<"\t\t\t\t\tIndigo Airways\t\t\t\t\t\t\t   Direct\t    \n\n";
    cout<<"\t\t\t\t\t3:50 - 5:15\t\t\t\t\t\t\t   1h 40m\t   |\n\n";
    cout<<"\t\t\t\t\t"<<a<<" - "<<b<<"\t\t\t\t\t\t\t   Rs3,410\t    \n";
    cout<<"_____________________________________________________________________________________________________________________________________________________________________\n\n";
    char d;
      cout<<"Do You Want To Book The Ticket (Y/N) : ";
      d=getch();
      cout<<"\n";
      if(d=='y'||d=='Y') {
        x.payment="Rs.8000";
      bookticket(a, b);
      }
      else{
        return a;
    }
    
};
string ticketD(string a, string b){
  cout<<" ____________________________________________________________________________________________________________________________________________________________________\n\n";
    cout<<"\t\t\t\t\t\t\t\t      FLIGHTS TO "<<b<<"\t\t\t\t    \n";
    cout<<"\t\t\t\t\tIndigo Airways\t\t\t\t\t\t\t   Direct\t    \n\n";
    cout<<"\t\t\t\t\t6:30 - 12:15\t\t\t\t\t\t\t   5h 45m\t   \n\n";
    cout<<"\t\t\t\t\t"<<a<<" - "<<b<<"\t\t\t\t\t\t\t   Rs12,184\t    \n\n";
    cout<<"_____________________________________________________________________________________________________________________________________________________________________\n";
    char d;
      cout<<"Do You Want To Book The Ticket (Y/N) : ";
      d=getch();
      cout<<"\n";
      if(d=='y'||d=='Y') {
        x.payment="Rs.10,000";
      bookticket(a, b);
      }
      else{
        return a;
    }
    
};
string ticketE(string a, string b){
    cout<<" ____________________________________________________________________________________________________________________________________________________________________\n\n";
    cout<<"\t\t\t\t\t\t\t\t      FLIGHTS TO "<<b<<"\t\t\t\t    \n";
    cout<<"\t\t\t\t\tIndigo Airways\t\t\t\t\t\t\t   Direct\t    \n\n";
    cout<<"\t\t\t\t\t5:55 - 4:15\t\t\t\t\t\t\t   6h 00m\t   \n\n";
    cout<<"\t\t\t\t\t"<<a<<" - "<<b<<"\t\t\t\t\t\t\t   Rs12,957\t    \n\n";
    cout<<"_____________________________________________________________________________________________________________________________________________________________________\n";
    char d;
      cout<<"Do You Want To Book The Ticket (Y/N) : ";
      d=getch();
      cout<<"\n";
      if(d=='y'||d=='Y') {
        x.payment="Rs.11,000";
      bookticket(a, b);
      }
      else{
        return a;
    }
   
};
     
string bookticket(string a, string b) {
    
    cout<<"Enter Your First Name : ";
    cin>>x.firstname;
    cout<<"Enter Your middle Name : ";
    cin>>x.middlename;
    cout<<"Enter Your last Name : ";
    cin>>x.lastname;
    cout<<"Enter Your Contact Number : +91-";
    cin>>x.contact ;
    cout<<"Enter Your Age : ";
    cin>>x.age;
    cout<<"Enter Your Gender (M/F): ";
    cin>>x.gender;
    cout<<"Enter Your Address : ";
    cin>>x.address;
    cout<<"Enter Your Email : ";
    cin>>x.email;
    cout<<"Enter Your Bclass : ";
    cin>>x.bclass;
    cout<<"Do You Want Meal (Y/N) : ";
    cin>>x.meal;
    cout<<"Enter Your Aadhar : ";
    cin>>x.aadhar;
     meal();

};void meal(){
  string meall;
cout<<"ENTER CHOICE:\n1.PRESS V FOR VEG FOOD \n2.PRESS NV FOR NON VEG FOOD\n";
cin>>meall;
string food_choice;
if(meall=="v"||meall=="V")
{
  cout<<"______________________________________"<<endl;
  cout<<"|  SANDWICH        |    Rs.500       |"<<endl;
  cout<<"|  PURI SABZI      |    Rs.800       |"<<endl;
  cout<<"|  PANEER RICE     |    Rs.700       |"<<endl;
  cout<<"|  IDLI            |    Rs.400       |"<<endl;
  cout<<"|  MOMOS           |    Rs.300       |"<<endl;
  cout<<"|  PASTA           |    Rs.300       |"<<endl;
  cout<<"|__________________|_________________|"<<endl;
  cout<<"\n\nENTER THE NAME OF FOOD YOU WANT TO EAT : ";
  cin>>x.food_choice;

}
if(meall=="nv"||meall=="nV"||meall=="NV"||meall=="Nv"){
 cout<<" _______________________________________"<<endl;
 cout<<"|   CHICKEN BIRYANI |    Rs.800       |"<<endl;
 cout<<"|   MUTTON KORMA    |    Rs.900       |"<<endl;
 cout<<"|   BUTTER CHICKEN  |    Rs.1000      |"<<endl;
 cout<<"|   CHICKEN CURRY   |    Rs.600       |"<<endl;
 cout<<"|    EGG CURRY      |    Rs.500       |"<<endl;
 cout<<"|     OMLETTE       |    Rs.300       |"<<endl;
 cout<<"|___________________|_________________|"<<endl;
 cout<<"\n\nENTER THE NAME OF THE FOOD YOU WANT TO EAT : ";
 cin>>x.food_choice;
} char r;
cout<<"PLEASE MAKE A PAYMENT OF "<<x.payment<<endl;
cout<<"PRESS Y IF PAYMENT IS DONE"<<endl;
r=getch();
if(r=='y'|| r=='Y'){
view_ticket();
}
}
string view_ticket(){
  cout<<"_________________________________________________________________________________________"<<endl;
  cout<<"                                                                                        "<<endl;
  cout<<"                     NAME  :  "<<x.firstname<<x.middlename<<x.lastname<<"                                                                       "<<endl;
  cout<<"                                                                                        "<<endl;
  cout<<"                     PHN.NO:  "<< x.contact<<"                                                                                 "<<endl;
  cout<<"                                                                                        "<<endl;
  cout<<"                      AGE  :  "<<x.age<<"                                                                                "<<endl;
  cout<<"                                                                                        "<<endl;
  cout<<"                    GENDER :  "<<x.gender<<"                                                                           "<<endl;
  cout<<"                                                                                        "<<endl;
  cout<<"                    ADDRESS:  "<<x.address<<"                                                                      "<<endl;
  cout<<"                                                                                        "<<endl;
  cout<<"                    EMAIL  :  "<<x.email<<"                                                                       "<<endl;
  cout<<"                                                                                        "<<endl;
  cout<<"                    BCLASS :  "<<x.bclass<<"                                                                     "<<endl;
  cout<<"                                                                                        "<<endl;
  cout<<"                    AADHAR :  "<<x.aadhar<<"                                                                       "<<endl;
  cout<<"                                                                                        "<<endl;
  cout<<"                FOOD CHOICE:  "<<x.food_choice<<"                                                                   "<<endl;
  cout<<"________________________________________________________________________________________"<<endl;
  further_options();
}
void further_options(){
  int ch;
  cout<<"PRESS 1 TO EXIT"<<endl;
  cout<<"PRESS 2 TO CANCEL THE TICKETS"<<endl;
  cin>>ch;
  if(ch==1){
    cout<<"THANK YOU,HAVE A NICE DAY"<<endl;

  }
  else if(ch==2){
    cout<<"ALL YOUR BOOKINGS ARE CANCELLED"<<endl;
  }
}
void view_all_bookings(){
  cout<<"     _____________________________________________________"<<endl;
  cout<<"     |   -------------------        -------------------  |"<<endl;
  cout<<"     |1- |  #  |  #  |  C  |        |  D  |  #  |  F  |  |"<<endl;
  cout<<"     |   -------------------        -------------------  |"<<endl;
  cout<<"     |   -------------------        -------------------  |"<<endl;
  cout<<"     |2- |  A  |  B  |  C  |        |  D  |  #  |  #  |  |"<<endl;
  cout<<"     |   -------------------        -------------------  |"<<endl;
  cout<<"     |   -------------------        -------------------  |"<<endl;
  cout<<"     |3- |  A  |  B  |  C  |        |  D  |  E  |  F  |  |"<<endl;
  cout<<"     |   -------------------        -------------------  |"<<endl;
  cout<<"     |   -------------------        -------------------  |"<<endl;
  cout<<"     |4- |  A  |  B  |  C  |        |  D  |  E  |  F  |  |"<<endl;
  cout<<"     |   -------------------        -------------------  |"<<endl;
  cout<<"     |   -------------------        -------------------  |"<<endl;
  cout<<"     |5- |  #  |  #  |  C  |        |  D  |  E  |  F  |  |"<<endl;
  cout<<"     |   -------------------        -------------------  |"<<endl;
  cout<<"     |   -------------------        -------------------  |"<<endl;
  cout<<"     |6- |  A  |  B  |  C  |        |  D  |  E  |  F  |  |"<<endl;
  cout<<"     |   -------------------        -------------------  |"<<endl;
  cout<<"     |   -------------------        -------------------  |"<<endl;
  cout<<"     |7- |  A  |  B  |  C  |        |  D  |  E  |  F  |  |"<<endl;
  cout<<"     |   -------------------        -------------------  |"<<endl;
  cout<<"     |   -------------------        -------------------  |"<<endl;
  cout<<"     |8- |  A  |  B  |  #  |        |  #  |  E  |  F  |  |"<<endl;
  cout<<"     |   -------------------        -------------------  |"<<endl;
  cout<<"     |   -------------------        -------------------  |"<<endl;
  cout<<"     |9- |  A  |  B  |  C  |        |  D  |  E  |  F  |  |"<<endl;
  cout<<"     |   -------------------        -------------------  |"<<endl;
  cout<<"     |   -------------------        -------------------  |"<<endl;
  cout<<"     |10-|  A  |  B  |  C  |        |  D  |  E  |  F  |  |"<<endl;
  cout<<"     |   -------------------        -------------------  |"<<endl;
  cout<<"     |   -------------------        -------------------  |"<<endl;
  cout<<"     |11-|  A  |  B  |  C  |        |  D  |  E  |  F  |  |"<<endl;
  cout<<"     |   -------------------        -------------------  |"<<endl;
  cout<<"     |   -------------------        -------------------  |"<<endl;
  cout<<"     |12-|  A  |  B  |  #  |        |  D  |  #  |  F  |  |"<<endl;
  cout<<"     |   -------------------        -------------------  |"<<endl;
  cout<<"     |   -------------------        -------------------  |"<<endl;
  cout<<"     |13-|  A  |  B  |  C  |        |  D  |  E  |  F  |  |"<<endl;
  cout<<"     |   -------------------        -------------------  |"<<endl;
  cout<<"     |   -------------------        -------------------  |"<<endl;
  cout<<"     |14-|  A  |  #  |  #  |        |  #  |  #  |  #  |  |"<<endl;
  cout<<"     |   -------------------        -------------------  |"<<endl;
  cout<<"     |   -------------------        -------------------  |"<<endl;
  cout<<"     |15-|  A  |  B  |  C  |        |  D  |  E  |  F  |  |"<<endl;
  cout<<"     |   -------------------        -------------------  |"<<endl;
  cout<<"     |___________________________________________________|"<<endl;
cout<<"\n\n\t\t\t\tPLACES WITH # ARE ALREADY BOOKED"<<endl;
int f;
    cout<<"PRESS 1 IF U WANT TO BOOK TICKETS"<<endl;
    cout<<"PRESS 2 IF U WANT TO EXIT"<<endl;
    cin>>f;
    if(f==1){
      string departure = getorigin();
    string arrival = getdestination();
    string date = getdate();
    flightdetails(departure, arrival, date);
    }
    else if(f==2){
      cout<<"THANK YOU , HAVE A NICE DAY"<<endl;
    }
      
}