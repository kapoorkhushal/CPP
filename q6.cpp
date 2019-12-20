#include<iostream>
using namespace std;

typedef enum fuel{
	diesel=1,petrol
}fuel;

typedef enum cooling{
	air=1,liquid,oil
}cooling;

typedef enum wheel{
	alloys=1,spokes
}wheel;

class vehicle
{
	float mileage,price;
	public:
	class car{
		float ownership_cost;
		int warranty;
		float capacity;
		fuel type;
		public:
		class audi{
			char* model;
			public:
			void input(){
				getchar();
				model = new char(25);
				cout<<"Enter Model : ";
				fgets(model,25,stdin);
			}
			void output(){
				cout<<"Model : "<<model<<endl;
			}
		};
		class ford{
			char* model;
			public:
			void input(){
				getchar();
				model = new char(25);
				cout<<"Enter Model : ";
				fgets(model,25,stdin);
			}
			void output(){
				cout<<"Model : "<<model<<endl;
			}
		};
		audi a;
		ford f;
		void input(){
			int ip;
			cout<<"Enter Ownership Cost : ";
			cin>>ownership_cost;
			cout<<"Enter Warranty : ";
			cin>>warranty;
			cout<<"Enter Capacity : ";
			cin>>capacity;
			cout<<"Fuel Type : \n1. Diesel\n2. Petrol\nEnter : ";
			cin>>ip;
			if(1 == ip)
				type = diesel;
			else
				type = petrol;
		}
		void output(){
			cout<<"Ownership Cost : "<<ownership_cost<<endl;
			cout<<"Warranty : "<<warranty<<endl;
			cout<<"Capacity : "<<capacity<<endl;
			cout<<"Fuel Type : ";
			if(type == diesel)
				cout<<"Diesel"<<endl;
			else
				cout<<"Petrol"<<endl;
		}
	};

	class bike{
		int cylinders;
		int gears;
		cooling cool;
		wheel wstyle;
		float fuel_tank;
		public:
		class bajaj{
			char* model;
			public:
			void input(){
				getchar();
				model = new char(25);
				cout<<"Enter Model : ";
				fgets(model,25,stdin);
			}
			void output(){
				cout<<"Model : "<<model<<endl;
			}
		};
		class tvs{
			char* model;
			public:
			void input(){
				getchar();
				model = new char(25);
				cout<<"Enter Model : ";
				fgets(model,25,stdin);
			}
			void output(){
				cout<<"Model : "<<model<<endl;
			}
		};
		bajaj b;
		tvs t;
		void input(){
			int ip;
			cout<<"Enter Number of Cylinders : ";
			cin>>cylinders;
			cout<<"Enter Number of Gears : ";
			cin>>gears;
			cout<<"Enter Cooling Type : \n1. Air\n2. Liquid\n3. Oil\nEnter : ";
			cin>>ip;
			if(1 == ip)
				cool = air;
			else if(2 == ip)
				cool = liquid;
			else
				cool = oil;
			cout<<"Wheel Style : \n1. Alloys\n2. Spokes\nEnter : ";
			cin>>ip;
			if(1 == ip)
				wstyle = alloys;
			else
				wstyle = spokes;
			cout<<"Enter Fuel tank size (in inches) : ";
			cin>>fuel_tank;
		}
		void output(){
			cout<<"Number of Cylinders : "<<cylinders<<endl;
			cout<<"Number of Gears : "<<gears<<endl;
			cout<<"Cooling Type : ";
			if(cool == air)
				cout<<"Air"<<endl;
			else if(cool == liquid)
				cout<<"Liquid"<<endl;
			else
				cout<<"Oil"<<endl;
			cout<<"Wheel Style : ";
			if(wstyle == alloys)
				cout<<"Alloys"<<endl;
			else
				cout<<"Spokes"<<endl;
			cout<<"Fuel tank size (in inches) : "<<fuel_tank<<endl;
		}
	};
	bike b;
	car c;
	void input(){
		cout<<"\nEnter Mileage : ";
		cin>>mileage;
		cout<<"Enter Price : ";
		cin>>price;
	}
	void output(){
		cout<<"\nEnter Mileage : "<<mileage<<endl;
		cout<<"Enter Price : "<<price<<endl;
	}
};

int main(void)
{
	int ch;
	char choice;
	vehicle v;
	do{
		cout<<"\nVehicle Option : \n";
		cout<<"-->1. Car\n";
		cout<<"-->2. Bike\n";
		cout<<"-->Enter Choice : ";
		cin>>ch;
		switch(ch)
		{
			case 1:
				cout<<"\n-->-->Car Option : \n";
				cout<<"-->-->-->1. Audi\n";
				cout<<"-->-->-->2. Ford\n";
				cout<<"-->-->-->Enter Choice : ";
				cin>>ch;
				switch(ch)
				{
					case 1:
						v.input();
						v.c.input();
						v.c.a.input();
						cout<<"\nAUDI : \n";
						v.output();
						v.c.output();
						v.c.a.output();break;
					case 2:
						v.input();
						v.c.input();
						v.c.f.input();
						cout<<"\nFORD : \n";
						v.output();
						v.c.output();
						v.c.f.output();break;
					default : cout<<"Invalid Input!\n"; 
				}break;
			case 2:
				cout<<"\n-->-->Bike Option : \n";
				cout<<"-->-->-->1. Bajaj\n";
				cout<<"-->-->-->2. TVS\n";
				cout<<"-->-->-->Enter Choice : ";
				cin>>ch;
				switch(ch)
				{
					case 1:
						v.input();
						v.b.input();
						v.b.b.input();
						cout<<"\nBAJAJ : \n";
						v.output();
						v.b.output();
						v.b.b.output();break;
					case 2:
						v.input();
						v.b.input();
						v.b.t.input();
						cout<<"\nTVS : \n";
						v.output();
						v.b.output();
						v.b.t.output();break;
					default : cout<<"Invalid Input!\n";
				}break;
			default: cout<<"Invalid Input!\n";
		}
		cout<<"Do you want to Continue [Y/N] : ";
		cin>>choice;
	}while('Y' == choice || 'y' == choice);
	return 0;
}
