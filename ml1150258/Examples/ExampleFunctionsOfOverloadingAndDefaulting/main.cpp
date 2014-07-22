//Mark E. Lehr
//July 14th, 2014
//Menu to be used for the midterm
//homework and midterm, etc....

//System Libraries
#include <cstdlib>
#include <iostream>
#include <ctime>
#include <iomanip>
#include <cmath>
using namespace std;

//Global Constants

//Function Prototypes
float tempCnv(float = 32);
float tempCnv(int,int,int,int,float = 32);
int   tempCnv(float,float&);
float tempCnv2(const float &);

//Execution begins here
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare a Fahrenheit temperature
    float fTemp=rand()%181+32;//Temp between [32,212]
    float cTemp1,cTemp2,cTemp3,cTemp4,cTemp5,cTemp6,cTemp7;
    
    //Calculate the conversions
    cTemp1=tempCnv();//Default parameter call for degF=0;
    cTemp2=tempCnv(32.0f,212.0f,0.0f,100.0f);//Default parameter call for degF=0;
    cTemp3=tempCnv(fTemp);
    cTemp4=tempCnv(32.0f,212.0f,0.0f,100.0f,fTemp);
    tempCnv(fTemp,cTemp5);
    int howMany=tempCnv(fTemp,cTemp6);
    cTemp7=tempCnv2(fTemp);
    
    //Output the temperature conversion
    cout<<"Deg F = 32 converts to Deg C = "<<cTemp1<<endl;
    cout<<"Deg F = 32 converts to Deg C = "<<cTemp2<<endl;
    cout<<"Deg F = "<<fTemp<<" converts to Deg C = "<<cTemp3<<endl;
    cout<<"Deg F = "<<fTemp<<" converts to Deg C = "<<cTemp4<<endl;
    cout<<"Deg F = "<<fTemp<<" converts to Deg C = "<<cTemp5<<endl;
    cout<<"Deg F = "<<fTemp<<" converts to Deg C = "<<cTemp6<<endl;
    cout<<"How Many times did static function call occur = "<<howMany<<endl;
    cout<<"Deg F = "<<fTemp<<" converts to Deg C = "<<cTemp7<<endl;
    
    //Output if worked
    if(cTemp1==cTemp2&&cTemp3==cTemp4&&cTemp5==cTemp6){
        cout<<"Overloading, Defaulting, Referencing and Static Variables works flawlessly"<<endl;
    }

    //Exit stage right!
    return 0;
}

//Temperature conversion function
//Formula used the equation for a line
//Pass by reference for efficiency/security and protection
//Input
//   degF = Degrees Fahrenheit
//Output
//   degC = Degrees Centigrade
float tempCnv2(const float &degF){
    //Process the input and return the value
    return (degF-32.0)*5/9;
}

//Temperature conversion function
//Formula used the equation for a line
//Output is by reference
//Input
//   degF = Degrees Fahrenheit
//Output
//   degC = Degrees Centigrade
int tempCnv(float degF,float &degC){
    //Declare and initialize a static variable
    static int counter=0;
    //Process the input and return the value
    degC=(degF-32.0)*5/9;
    counter++;
}


//Temperature conversion function
//Similar triangles and interpolation
//Input
//   degF = Degrees Fahrenheit
//Output
//   degC = Degrees Centigrade
float tempCnv(int f1,int f2,int c1,int c2,float degF){
    //Process the input and return the value
    return c1+(degF-f1)*(c2-c1)/(f2-f1);
}


//Temperature conversion function
//Formula used the equation for a line
//Input
//   degF = Degrees Fahrenheit
//Output
//   degC = Degrees Centigrade
float tempCnv(float degF){
    //Process the input and return the value
    return (degF-32.0)*5/9;
}