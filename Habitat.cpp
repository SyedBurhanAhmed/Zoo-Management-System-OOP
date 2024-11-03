/*#include "Habitat.h"
#include "date.h"
#include <iostream>
#include <string>
#include "Animal_health.h"
#include <windows.h>
using namespace std;
/*Habitat::Habitat()
{
    this->set_history("");
    this->set_species("");
    this->set_area("");
    this->set_location("");
}

Habitat::Habitat(string h,string s,const date& d,string a,string l,Animal_health* ah):birth_date(d),animal_data(ah)
{

    this->set_history(h);
    this->set_species(s);
    this->set_area(a);
    this->set_location(l);
}
Habitat::~Habitat()
{
    //dtor
}

Habitat::Habitat(Habitat& other):birth_date(other.birth_date)
{
    this->set_history(other.get_history());
    this->set_species(other.get_species());
    this->set_area(other.get_area());
    this->set_location(other.get_location());
}



void Habitat::display_animal()
{
    cout<<"Past habitat was:"<<this->get_history()<<endl;
    cout<<"Species is:"<<this->get_species()<<endl;
    cout<<"Birth date of is:";
    this->birth_date.display_date();
    cout<<"Cell area is:"<<this->get_area()<<endl;
    cout<<"Cell location is:"<<this->get_location()<<endl;
}

void Habitat::display_animal(string loc)
{
    if(this->get_location()==loc){
        display_animal();
    }
    else{
        cout<<"No animals in this particular location."<<endl;
    }
}

void Habitat::sick_wrt_cat(string c)
{
    cout<<"Sick Animals of category:";
    cin.ignore();
    getline(cin,c);
        if(animal_data->isSick()&&animal_data->get_cat()==c){
           cout<< animal_data->get_name()<<" with id "<<animal_data->get_id()<<endl;
        }
        else{
        cout<<"No sick animals of this category."<<endl;
    }
}

void Habitat::sick_wrt_age(int a)
{
    cout<<"Sick Animals of age:";
    cin>>a;

        if(animal_data->isSick()&&animal_data->get_age()==a){
           cout<< animal_data->get_name()<<" with id "<<animal_data->get_id()<<endl;
        }
        else{
        cout<<"No sick animals of this age."<<endl;
    }
}

void Habitat::sick_wrt_gender(char g)
{
    cout<<"Sick Animals of Gender(M,F):";
    cin>>g;
        if(animal_data->isSick()&&animal_data->get_gen()==g){
            cout<<animal_data->get_name()<<" with id "<<animal_data->get_id()<<endl;
        }
        else{
        cout<<"No sick animals of this gender."<<endl;
    }
    }

void Habitat::sick_wrt_location(string l)
{
    cout<<"Sick Animals of location:";
    cin.ignore();
    getline(cin,l);
        if(animal_data->isSick()&&this->get_location()==l){
           cout<< animal_data->get_name()<<" with id "<<animal_data->get_id()<<endl;
        }
    else{
        cout<<"No sick animals in the location."<<endl;
    }
}

void Habitat::sick_wrt_date(date& t,date& gd)
{
    date sdate;
    int d,m,y;
    cout<<"Sickness date(d,m,y):";
    cin>>d>>m>>y;
    sdate.set_date(d,m,y);
    if (sdate >= gd &&sdate <=t){
        cout<< animal_data->get_name()<<" with id "<<animal_data->get_id()<<endl;
    }
    else{
        cout<<"No sick animals in the particular time."<<endl;

    }
    }

int Habitat::animal_born(date& gt)
{
    SYSTEMTIME currentTime;
    GetSystemTime(&currentTime);
    int y= currentTime.wYear;
    int m= currentTime.wMonth;
    int d = currentTime.wDay;
    date current;
    current.set_date(d,m,y);
    int count=0;
    if(birth_date<=gt&&birth_date>=current){
        count++;
    }
    return count;

}

int Habitat::sick_frequency()
{
    int s=0;
    if(animal_data->isSick())
    {
        s++;
    }
    return s;
}*/


