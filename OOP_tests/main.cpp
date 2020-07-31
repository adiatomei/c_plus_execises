#include <iostream>
#include "source.cpp"


using namespace std;



int main()
{
    /*Computer acer();
    Computer asus("Assus", 2300);
    Computer asusv2(asus);
    asusv2.set_price(2500);
    cout << "Pretul vechiului asus este " << asus.get_price() << endl;
    cout << "Pretul noului asus este " << asusv2.get_price() << endl;*/

    /*Country romania("Romania", 21, "Ron");
    Country siria(romania);
    siria.set_name("Siria");
    siria.set_pop(20);
    siria.set_curr("Dinar");
    cout << romania.get_name() << " have " << romania.get_pop() << " milion\n";
    cout << "The currency of Romania it is " << romania.get_curr() << endl;
    romania.get_adress();
    siria.get_adress();
    cout << siria.get_name() << " have " << siria.get_pop() << " milion\n";
    cout << "The currency of Siria it is " << siria.get_curr() << endl;*/

   /*Computer grup[] = {
                        Computer("Dell1", 1800),
                        Computer("Dell2", 1900),
                        Computer("Dell3", 2100)
                        };

    Computer workShop[5];
    workShop[0] = Computer("Dell", 1225);
    workShop[1] = Computer("Acer", 1000);

    for(int i = 0; i < Computer::get_numComp(); i++)
    {
        cout << workShop[i].get_name() << ": " << workShop[i].get_price() << endl;
    }


    for(int i = 0; i < 3; i++){
        cout << grup[i].get_name() << endl;
    }*/

    /*Car p[] = { Car("BMW", 25000),
                Car("Mercedes", 30000),
                Car("Audi", 27000)
               };

    cout <<  "The care are: ";
    int bmw = 0;
    int mercedes = 0;
    int audi = 0;
    for(int i = 0; i < sizeof(p) / sizeof(p[0]); i++){
        cout << p[i].get_name() << endl;
        if(p[i].get_name() == "BMW"){
            bmw++;
        }else if(p[i].get_name() == "Mercedes"){
            mercedes++;
        }else if(p[i].get_name() == "Audi"){
            audi++;
        }
    };

    cout << bmw << " " << mercedes << " " << audi << endl;


    cout << Car::get_nrCar();*/

  /*  Car dacia("Dacia", 1992);
    cout << changeYear(dacia) << endl;
    change_name(dacia, "Dacia Logan");
    cout << "The new name of dacia is " << dacia.get_name();*/

  /*  int a = 25;
    int b = 30;
    int * const ptrA = &a;
    *ptrA = 40; // Nu da eroare;
     ptrA = b //Afisare eroare;*/

     Person adi;
     adi.name = "Adi";
     adi.salary = 2100;
     Person vlad;
     vlad.name = "Vlad";
     vlad.salary = 3000;
     Person cosmin;
     cosmin.name = "Cosmin";
     adi + vlad;
     cout << cosmin.name << " salary it is " <<  adi.salary << endl;

     Person gr[3] = {Person("Adrians", 2100),
                     Person("Matialda", 6000),
                     Person("Iulian", 4200)};

    for(int i = 0; i < 3; i++)
    {
      gr[i] += 1;
    }

    cout << gr[1].salary;

    return 0;
}
