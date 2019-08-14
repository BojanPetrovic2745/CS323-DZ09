#include <iostream>
#include <fstream>
#include <string>
#include "Student.h"
using namespace std;

void upisUFajl(int& brojStudenata);
int Student::brojObjekata = 0;

int main()
{
   int broj;

   cout << "Unesi broj studenata: ";
   cin >> broj;

   upisUFajl(broj);




    return 0;
}


void upisUFajl(int& brojStudenata){

    ofstream fajl("student.txt");
    Student s[brojStudenata];



    if(fajl.is_open()){
        fajl << "Broj studenata je: " << brojStudenata << endl;
        for(int i = 0; i <brojStudenata; i++){

            cin >> s[i];
            fajl << s[i];

        }
    }

    fajl.close();


    ifstream citanje("student.txt");
    ofstream pisanje("nagrada.txt");
    string readLine;
    double maks = s[0].getProsek();
    if(citanje.is_open()){



        while(!citanje.eof()){

            getline(citanje, readLine);
            for(int i = 0; i < brojStudenata; i++){

                    if(s[i].getProsek() > maks){
                        maks = s[i].getProsek();
                        if(readLine.compare(s[i].getIme())){
                            readLine = s[i].getIme() + " " + s[i].getPrezime();
                            pisanje <<  readLine << " " << maks << endl;
                        }
                    }

        }

        }


    }
    citanje.close();
    pisanje.close();
}




