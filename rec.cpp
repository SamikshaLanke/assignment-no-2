
#include <iostream>
using namespace std;

class rectangle;
{
        private:
        float l,b;
        void accept()
        {
        cout<<"enter l:";
        cin>>l;
        cout<<"enter b:";
        cin<<b;
        }
float area();
float perimetre();
void display () 

{
        cout<<"area of rectangle is :";
        	<<area() ;
        cout<<"perimetre of rectangle is :";
		<<perimetre() ;
}
};
	float rectangle::area()
{
	return l*b;
}
	float rectangle::perimetre()
{
	return 2*(l+b);
}

{
int main()
Rectangle r;

r.accept();
r.decline();

return 0;
}







