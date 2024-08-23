//Sreejita Bhardwaj 
//Prn: 23070123130 
//experiment 11: classes and objects

#include <iostream>
using namespace std;

class cube
{
    public:
    int height = 2;
    int width = 2;
    int length = 2;
    int volume()
    {
        int v; 
        v = height*width*length;
        return v;
    }
};

int main()
{
    cube cube1;
    cout<<"volume: "<<cube1.volume()<<endl;
}