#include"gchar.h"

using namespace std;

Gchar exCopyCon(Gchar tempGC)
{
	cout<<"copy const called twice"<<endl;
	cout<<"once for the formal parameter passed by value "<<endl;
	cout<<"once for retrun value "<<endl;
	return tempGC;

}

int main()
{
	Gchar gc1;
	gc1.insert("potion");
	gc1.insert("p");
	gc1.insert("pon");
	gc1.insert("pot");
	gc1.insert("poti");
	gc1.insert("potio");
	cout<<gc1<<endl;

	Gchar gc2("bob", 5);
	gc2.insert("axe");
	exCopyCon(gc2);

	Gchar gc3=gc2;

	gc2 = gc1;
	cout<<"gc2: "<<gc2<<endl;
	cout<<"gc1: "<<gc1<<endl;
	cout<<"gc3: "<<gc3<<endl;
}
