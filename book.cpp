#include<iostream>
using namespace std;

class BOOK{
private:
	int book_no;
	char book_title[20];
	float price;
	float total_cost(int N){
		float total;
		total=price*N;
		return total;
	}

public:
	void input(){
		cout<<"\nEnter book number:";
		cin>>book_no;
		cout<<"\nBook title:";
		cin>>book_title;
		cout<<"\nPrice of the book:";	
		cin>>price;
	}

	void purchase(){
		int n;
		cout<<"\nEnter the number of copies to purchase:";
		cin>>n;
		float total;
		total=total_cost(n);
		cout<<"\nTotal cost to be paid is:"<<total<<" rupees";
	}
};

int main(){
	BOOK obj;
	obj.input();
	obj.purchase();
}
