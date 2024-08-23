//Sreejita Bhardwaj 
//Prn: 23070123130 
//experiment 11: classes and objects

#include <iostream>
using namespace std;

class cube
{
    private:
    int height=2;
    int width=3;
    int length=5;

    public:
    int volume()
    {
        double v;
        v=height*width*length;
        return v;
    }
};

int main()
{
    cube cube1;
    cout<<"volume: "<<cube1.volume()<<endl;
}