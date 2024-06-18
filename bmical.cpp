#include<iostream>
using namespace std;

int main()
{   float height, weight;
string bmi1;
    cout<<endl<<"                           WELCOME | BMI CALCULATOR                           "<<endl;
    cout<<"-------------------------------------------------------------------------------"<<endl;
    sub:
    cout<<"   MENU:"<<endl;
    cout<<"Enter your height in cm:";
    cin>>height;
    cout<<"------------------------- "<<endl;
    cout<<"Enter your weight in kg:";
    cin>>weight;
    cout<<endl<<endl;
    float height1=height/100;
    float height2=height1*height1;
    float bmi=weight/height2;
    if(bmi<=18){
        bmi1="UNDERWEIGHT";
    }
    else if(bmi>=18 && bmi<=25){
        bmi1="NORMAL";
    }
    else{
        bmi1="OVERWEIGHT";
    }
    cout<<"       YOUR BMI: "<<bmi<<" || STATUS: "<<bmi1<<endl;
    cout<<"Press 1 for Again Calculation"<<endl;
    cout<<"Press 2 for exit Application"<<endl;
    int option;
    cin>>option;
    switch (option)
    {
    case 1:
        goto sub;
        break;
        case 2:
       exit(EXIT_SUCCESS);
    
    default:
    cout<<endl<<"You have choose a wrong option! "<<endl;
        break;
    }
    return 0;
}
