#include<iostream>

using namespace std;

class data{

    private:

    	char house_detail[100];
    	char room_detail[100];

    public:

	 	void read(){

	 		cout<<"Enter house detail : ";
	 		cin>>house_detail;

	 		cout<<"Enter room detail : ";
	 		cin>>room_detail;

	 	}

	 	void print(){

	 		cout<<"Your text of house detail : "<<house_detail<<endl;
	 		cout<<"Your text of room detail : "<<room_detail<<endl;

		 }	

 };

main (){

	data h;

	h.read();
	h.print();

	h.read();
	h.print
	();
}
#include<iostream>


using namespace std;

class data{

	private:
		int a;
		int b;

	public:
	    void read(){

	    	cout<<"ENTER A :- ";
	    	cin>>a;
	    	cout<<"ENTER B :- ";
	    	cin>>b;

}
	    void print(){

	    	cout<<"YOUR VALUE OF A :- "<<a<<endl;
	    	cout<<"YOUR VALUE OF B :- "<<b<<endl;
		}		
};

main(){

	data s;

	s.read();
	s.print();

}
