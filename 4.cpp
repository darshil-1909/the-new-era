#include<iostream>
using namespace std;

class data{
private:

       int emp_id;
       char emp_name[100];
	   char emp_role[100]; 
       int emp_age;
       int emp_salary;
       int emp_experience;
       char emp_city[100];
       char emp_comapany_name[100];

public:

       void setter(){

       	cout<<"Enter id : ";	
       	cin>>emp_id;

       	cout<<"Enter Name : ";	
       	cin>>emp_name;

       	cout<<"Enter Role : ";	
       	cin>>emp_role;

       	cout<<"Enter Age : ";	
       	cin>>emp_age;

       	cout<<"Enter Salary : ";	
       	cin>>emp_salary;

       	cout<<"Enter Experince : ";	
       	cin>>emp_experience;

       	cout<<"Enter City Name : ";
       	cin>>emp_city;

       	cout<<"Enter Comapany Name : ";	
       	cin>>emp_comapany_name;


}
	 void getter(){

	 	cout<<"your Value of ID : "<<emp_id<<endl;
	 	cout<<"your Value of ID : "<<emp_name<<endl;
	 	cout<<"your Value of ID : "<<emp_role<<endl;
	 	cout<<"your Value of ID : "<<emp_age<<endl;
	 	cout<<"your Value of ID : "<<emp_salary<<endl;
	 	cout<<"your Value of ID : "<<emp_experience<<endl;
	 	cout<<"your Value of ID : "<<emp_city<<endl;
	 	cout<<"your Value of ID : "<<emp_comapany_name<<endl;
}	      
};

main(){

	data a,b,c,d,e;

	a.setter();
	a.getter();
	b.setter();
	b.getter();
	c.setter();
	c.getter();
	d.setter();
	d.setter();
	e.getter();
	e.setter();


}#include<iostream>

using namespace std;

class information{

    private:

    int car_id;
    char car_company_name[100];
    char car_color[100];
    int car_model;
    int car_release_year;


	public:

	void setter(){

		cout<<"Enter id : ";
		cin>>car_id;

		cout<<"Enter company name : ";
		cin>>car_company_name;

		cout<<"Enter color : ";
		cin>>car_color;

		cout<<"Enter model : ";
		cin>>car_model;

		cout<<"Enter release_year : ";
		cin>>car_release_year;

	}     	

	void getter(){

		cout<<"Your value of id : "<<car_id<<endl;	
		cout<<"Your value of company name : "<<car_company_name<<endl;	
		cout<<"Your value of color : "<<car_color<<endl;	
		cout<<"Your value of model : "<<car_model<<endl;	
		cout<<"Your value of release year : "<<car_release_year<<endl;	

	}
};

main(){

	information i;

	i.setter();
	i.getter();



}
