#include<iostream>
using namespace std;

class Rectangle{

public:
	float length;
	float width;

	void setlength(float);
	void setwidth(float);
	float perimeter();
	float area();
	void show();
	int sameArea(Rectangle);
};

void Rectangle::setlength(float len){
	length=len;
}
void Rectangle::setwidth(float wid){
	width=wid;
}
float Rectangle::perimeter(){
	return(2*length+2*width);
}
float Rectangle::area(){
	return length*width;
}
void Rectangle::show(){
	cout<<"\nLength is:"<<length<<"\nWidth is:"<<width;
}

int Rectangle::sameArea(Rectangle obj){
	
	float area1=length*width;
	float area2=obj.length*obj.width;
	if(area1 == area2)
		return 1;
	return 0;
}

int main(){
	Rectangle first;
	Rectangle second;
	first.setlength(5);
	first.setwidth(2.5);
	second.setlength(5);
	second.setwidth(18.9);
	cout<<"\nFirst Rectangle :";
	first.show();
	cout<<"\n Area:"<<first.area()<<"\nPerimeter:"<<first.perimeter()<<endl;
	cout<<"\nSecond Rectangle:";
	second.show();
	cout<<"\nArea:"<<second.area()<<"\nPerimeter:"<<second.perimeter();
	if(first.sameArea(second))
		cout<<"\nRectangle have the same area";
	else
		cout<<"\nRectangle do not have same area";
	
	first.setlength(15);
	first.setwidth(6.3);
	
	cout<<"\nFirst Rectangle:";
	first.show();
	
	cout<<"\n Area:"<<first.area()<<"\nPerimeter:"<<first.perimeter()<<endl;
	cout<<"\nSecond Rectangle:";
	second.show();
	cout<<"\nArea:"<<second.area()<<"\nPerimeter:"<<second.perimeter();
	if(first.sameArea(second))
		cout<<"\nRectangle have the same area";
	else
		cout<<"\nRectangle do not have same area";
	return 0;
}
