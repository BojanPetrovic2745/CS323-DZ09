#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
using namespace std;

class Student
{
    public:



        Student();
        Student(Student &s);
        Student(string ime, string prezime, double prosek);
        virtual ~Student();

        void setIme(string ime);
        string getIme();
        void setPrezime(string prezime);
        string getPrezime();
        void setProsek(double prosek);
        double getProsek();

        bool operator < (const Student& S);
        bool operator > (const Student& S);
        bool operator == (const Student& S);

        friend ostream &operator << ( ostream &output, const Student &S );
        friend istream &operator >> (istream &input, Student &S);

        static int getBrojObjekata();




    protected:

    private:

        string ime;
        string prezime;
        double prosek;
        static int brojObjekata;


};



#endif // STUDENT_H

