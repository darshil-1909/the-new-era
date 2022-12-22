#include<iostream>

using namespace std;

class data{
	
   private:
     int a;
	 int b;
   public:
   	void setter (int a,int b){
   		this->a=a;
   		this->b=b;
   	}
   	void getter (){
   		cout<<"your value of a:"<<a<<endl;
   		cout<<"your value of b:
		   
		   
		   
		   
		   
		   
		   
		   "<<b<<endl;
	   }
};


main(){
	data d;
	 int y,z;
	 
	 cout<<"enter a:";
	 cin>>y;
	 cout<<"enter b:";
	 cin>>z;
	 
	 d.setter(y,z);
	 d.getter();	
	
	
}
	   
	 

	
  	
	






