//
// Created by piotrk on 29.03.2022.
//

#ifndef LAB3_STUDENT_H
#define LAB3_STUDENT_H


class student {
public:
    osoba stud;
    int ects;

    student(osoba studenciak, int punkty):stud(studenciak),ects(punkty){};

    bool czyzdal()
    {
        if(ects > 22) return true;
        else return false;
    }


};


#endif //LAB3_STUDENT_H
