//Sreejita Bhardwaj 
//Prn: 23070123130 
//experiment 11: classes and objects

#include <iostream>
using namespace std;

class cube
{
    public:
    int height = 2.0;
    int width = 3.0;
    int length = 5.0;
};

int main()
{
    cube c1;
    int vol = c1.height*c1.width*c1.length;
    cout<<"volume:"<<vol<<endl;
}