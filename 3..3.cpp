#include<iostream>

using namespace std;

class data{


   	private:
   		
   		int emp_id;
   		char emp_name[100];
   		char emp_roll[100];
   		int emp_age;
   		int emp_salary;
   		int emp_experience;
   		char emp_city[100];
   		char emp_company_name[100];
   	
   		
   		public:
   			
   			void setter(){
   				
   				cout<<"enter id:";
   				cin>>emp_id;
   				
   				cout<<"enter name:";
   				cin>>emp_name;
   				
   				cout<<"enter roll";
   				cin>>emp_roll;
   				
   				cout<<"enter age:";
   				cin>>emp_age;
   				
   				cout<<"enter salary:";
   				cin>>emp_salary;
   				
   				cout<<"enter experience:";
   				cin>>emp_experience;
   				
   				cout<<"enter city:";
   				cin>>emp_city;
   				
   				cout<<"enter company_name emp_age:";
   				cin>>emp_company_name;
   				
   			}
   			void getter(){
   				
   				cout<<"your value id="<<emp_id<<endl;
   				cout<<"you value name="<<emp_name<<endl;
   				cout<<"your value roll="<<emp_roll<<endl;
   				cout<<"your value age="<<emp_age<<endl;
   				cout<<"your value salary="<<emp_salary<<endl;
   				cout<<"your value experience="<<emp_experience<<endl;
   				cout<<"your value city="<<emp_city<<endl;
				cout<<"your valuecompany_name emp_age="<<emp_company_name<<endl ;  				
   				
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
	 d.getter();
	 
	 e.setter();
	 e.getter();
	
}
	


    
   				
   				
   		

