#include <iostream>
#include <string.h>
using namespace std;

int main(){

    //variable

    string name,numbers[3]={"first","second","third"};
    int choice,choice_2,measure_one,measure_two;
    float fasting_test[3], Glucose_test[3] , mean_fasting_test , mean_Glucose_test , hypertension ,Random_test[3], mean_Random_test;

    cout<<"\t\tEnter your name : ";
    getline(cin ,name);
    cout<<"\n\n\t\twelcome "<<name<<endl<<"\n\n\n\n";

    cout<<"\tHello ,This code calc Diabete or hypertension \n\n\t enter what you want \n\n\t";
    cout<<"1-Diabete\n\t2-hypertension\n\n\t*!!enter the number!!*\n\t";
    cin>>choice;

    if (choice == 1)// this if =====> Diabete
    {
        cout<<"\n\n\tplease choose the state of measurement"<<endl;
        cout<<"\t1-Fasting Blood Sugar Test\n\n\t2-Glucose Tolerance Test\n\n \t3-Random Blood Sugar Test\n\t";
        cin>>choice_2;

        if (choice_2 == 1)
        {
            cout<<"\t----->Fasting Blood Sugar Test<-----\n\n\n\n";
            for (int i = 0; i < 3; i++)
            {
                cout<<"\tEnter "<<numbers[i] <<" measurement\n\t";
                cin>>fasting_test[i];
            }

            mean_fasting_test=(fasting_test[0]+fasting_test[1]+fasting_test[2])/3;
            cout<<"\t"<<mean_fasting_test;

            if (mean_fasting_test >= 70 && mean_fasting_test < 100)
            {
                cout<<"\n\tFasting Blood Sugar Test is normal\n\t**keep healthy";
            }else if (mean_fasting_test < 125 && mean_fasting_test >= 100)
            {
                cout<<"\n\tFasting Blood Sugar Test is Pre-Diabetes"<<endl;
                cout<<"\tAn Advice. Less sugar and sweets\n\tAnd you can go to doctor";
            }else if (mean_fasting_test > 125)
            {
                cout<<"\nHigh risk of diabetes"<<endl;
                cout<<"\tyou have to go to the hospital."<<endl;
                cout<<"\tplease refrain from eating sugar"<<endl;

            }


        }else if (choice_2 == 2)
        {
            cout<<"\t----->Glucose Tolerance Test<-----\n\n\n\n";
            for (int x = 0; x < 3; x++)
            {
                cout<<"\tEnter "<<numbers[x] <<" measurement\n\t";
                cin>>Glucose_test[x];
            }
            mean_Glucose_test=(Glucose_test[0]+Glucose_test[1]+Glucose_test[2])/3;
            cout<<"\t"<<mean_Glucose_test;

            if (mean_Glucose_test < 140)
            {
                cout<<"\n\tGlucose Blood Sugar Test is normal\n\t**keep healthy";
            }else if (mean_Glucose_test >= 140 && mean_Glucose_test < 200)
            {
                cout<<"\n\tGlucose Blood Sugar Test is Prediabetes"<<endl;
                cout<<"\tAn Advice. Less sugar and sweets\nAnd you can go to doctor";
            }else if (mean_Glucose_test >= 200)
            {
                cout<<"\n\tHigh risk of diabetes"<<endl;
                cout<<"\n\tyou have to go to the hospital."<<endl;
                cout<<"\n\tplease refrain from eating sugar"<<endl;

            }
        }else if (choice_2 == 3)
        {
            cout<<"\t----->Random Blood Sugar Test<-----\n\n\n\n";
            cout<<"\tEnter all three measurements\n\n";
            for (int j = 0; j < 3; j++)
            {
                cout<<"\tEnter "<<numbers[j] <<" measurement\n\t";
                cin>>Random_test[j];
            }
            mean_Random_test=(Random_test[0]+Random_test[1]+Random_test[2])/3;
            cout<<"\t"<<mean_Random_test;
            if (mean_Random_test < 140)
            {
                cout<<"\n\tRandom Blood Sugar Test is normal\n\t**keep healthy";
            }else if (mean_Random_test >= 140 && mean_Random_test < 200)
            {
                cout<<"\n\tRandom Blood Sugar Test is Prediabetes"<<endl;
                cout<<"\tAn Advice. Less sugar and sweets\nAnd you can go to doctor";
            }else if (mean_Random_test >= 200)
            {
                cout<<"\n\tHigh risk of diabetes"<<endl;
                cout<<"\tyou have to go to the hospital."<<endl;
                cout<<"\tplease refrain from eating sugar"<<endl;

            }

        }

        else{
            cout<<"\t\tmake sure you have entered the correct number";
        }






    }else if (choice == 2)
    {
        cout<<"\tinsert systolic  hypertension\n\t";
        cin>>measure_one;
        cout<<"\tinsert diastolic hypertension\n\t";
        cin>>measure_two;

        if (measure_one < 140 && measure_two > 60 && measure_one-measure_two < 40 )
        {
            cout<<"\t\nHypertension Test is normal\n**keep healthy";
        }else if(measure_one > 140 || measure_two < 60 || measure_one-measure_two > 40){
            cout<<"\n\tHypertension Test is not good";
            cout<<"\n\tyou have to go to the hospital.";
        }


    }
    else{
        cout<<"make sure you have entered the correct number";
    }
}