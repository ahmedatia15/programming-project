#include <iostream>
#include<iomanip>
#include <string.h>
using namespace std;

int main(){

    //variable

    string name; 
    int choice,choice_2,measur_one,measur_two;
    float fasting_test[3], Glucose_test[3] , mean_fasting_test , mean_Glucose_test , hypertension ,Random_test[3], mean_Random_test;

    cout<<"Enter your name : ";
    cin>>name;
    cout<<"wellcome "<<name<<endl;

    cout<<"Hello ,This code calc Diabt or hypertension \nenter what you want \n1-Diabt\n2-hypertension\n!!enter the number!!";
    cin>>choice;
     
    if (choice == 1)// this if =====> Diabt
    {
        cout << "\n=========================================\n";
        cout<<"please choose the state of measurement"<<endl;
        cout<<"1-Fasting Blood Sugar Test\n2-Glucose Tolerance Test\n3-Random Blood Sugar Test";
        cin>>choice_2;

        if (choice_2 == 1)
        {
            cout << "\n=========================================\n";
            cout<< setw(30) <<"==Fasting Blood Sugar Test==\n\n\n\n";
            cout<< setw(30) <<"Enter all three measurements\n\n";
            for (int i = 0; i < 3; i++)
            {
                cin>>fasting_test[i];
            }
            
            mean_fasting_test=(fasting_test[0]+fasting_test[1]+fasting_test[2])/3;
            cout<<mean_fasting_test;
            
            if (mean_fasting_test >= 70 && mean_fasting_test < 100)
            {
                cout<<"\nFasting Blood Sugar Test is normal\n****keep healthy****";
            }else if (mean_fasting_test < 125 && mean_fasting_test >= 100)
            {
                cout<<"\nFasting Blood Sugar Test is Pre-Diabetes"<<endl;
                cout<<"An Advice. Less sugar and sweets\nAnd you can go to doctor";
            }else if (mean_fasting_test > 125)
            {
                cout<<"\nHigh risk of diabetes"<<endl;
                cout<<"you have to go to the hospital."<<endl;
                cout<<"please refrain from eating suger"<<endl;

            }
            
            
        }else if (choice_2 == 2)
        {
            cout << "\n=========================================\n";
            cout<< setw(30) <<"==Glucose Tolerance Test==\n\n\n\n";
            cout<< setw(30) <<"Enter all three measurements\n\n";
            for (int x = 0; x < 3; x++)
            {
                cin>>Glucose_test[x];
            }
            mean_Glucose_test=(Glucose_test[0]+Glucose_test[1]+Glucose_test[2])/3;
            cout<<mean_Glucose_test;
            
            if (mean_Glucose_test < 140)
            {
                cout<<"\nFasting Blood Sugar Test is normal\n****keep healthy****";
            }else if (mean_Glucose_test >= 140 && mean_Glucose_test < 200)
            {
                cout<<"\nFasting Blood Sugar Test is Pre-Diabetes"<<endl;
                cout<<"An Advice. Less sugar and sweets\nAnd you can go to doctor";
            }else if (mean_Glucose_test >= 200)
            {
                cout<<"\nHigh risk of diabetes"<<endl;
                cout<<"you have to go to the hospital."<<endl;
                cout<<"please refrain from eating suger"<<endl;

            }
        }else if (choice_2 == 3)
        {
            cout << "\n=========================================\n";
            cout<< setw(30) <<"==Random Blood Sugar Test==\n\n\n\n";
            cout<< setw(30) <<"Enter all three measurements\n\n";
            for (int j = 0; j < 3; j++)
            {
                cin>>Random_test[j];
            }
            mean_Random_test=(Random_test[0]+Random_test[1]+Random_test[2])/3;
            cout<<mean_Random_test;
            if (mean_Random_test < 140)
            {
                cout<<"\nFasting Blood Sugar Test is normal\n****keep healthy****";
            }else if (mean_Random_test >= 140 && mean_Random_test < 200)
            {
                cout<<"\nFasting Blood Sugar Test is Pre-Diabetes"<<endl;
                cout<<"An Advice. Less sugar and sweets\nAnd you can go to doctor";
            }else if (mean_Random_test >= 200)
            {
                cout<<"\nHigh risk of diabetes"<<endl;
                cout<<"you have to go to the hospital."<<endl;
                cout<<"please refrain from eating suger"<<endl;

            }

        }
        
        else{
            cout << "\n=========================================\n";
            cout<<"make sure you have entered the correct number";
        }
        
        
        
        
        

    }else if (choice == 2)
    {
        cout << "\n=========================================\n";
        cout<<"insert systolic  hypertension";
        cin>>measur_one;
        cout<<"insert diastolic hypertension";
        cin>>measur_two;

        if (measur_one < 140 && measur_two > 60 && measur_one-measur_two < 40 )
        {
            cout<<"\nHypertension Test is normal\n****keep healthy****";
        }else if(measur_one > 140 || measur_two < 60 || measur_one-measur_two > 40){
            cout<<"Hypertension Test is not good"<<endl;
            cout<<"you have to go to the hospital.";
        }
        

    }
    else{
        cout << "\n=========================================\n";
        cout<<"make sure you have entered the correct number";
    }
}