#include "Student.h"
#include <fstream>

Student::Student()
{
    brojObjekata++;


    //ctor
}
Student::Student(Student &s){
    brojObjekata++;

}

Student::Student(string ime, string prezime, double prosek){
    this->ime = ime;
    this->prezime = prezime;
    this->prosek = prosek;

    brojObjekata++;


}

Student::~Student()
{
    //dtor
    brojObjekata--;
}

void Student::setIme(string ime){
    this->ime = ime;
}

string Student::getIme(){
    return ime;
}

void Student::setPrezime(string prezime){
    this->prezime = prezime;
}

string Student::getPrezime(){
    return prezime;
}

void Student::setProsek(double prosek){
    this->prosek = prosek;
}

double Student::getProsek(){
    return prosek ;
}

ostream &operator <<(ostream &output, const Student &S){
    output << S.ime << " " << S.prezime << " " << S.prosek << endl;
    return output;
}

istream &operator >> (istream &input, Student &S){
    input >> S.ime >> S.prezime >> S.prosek;
    return input;
}

bool Student::operator < (const Student& S){



    if(this->prosek < S.prosek){
        return true;
    }
    else{
        return false;
    }


}

bool Student::operator > (const Student& S){



    if( this->prosek > S.prosek){
        return true;
    }
    else{
        return false;
    }

}

bool Student::operator == (const Student& S){



    if(this->prosek == S.prosek){
        return true;
    }
    else{
        return false;
    }

}

int Student::getBrojObjekata(){
    return brojObjekata;

}





