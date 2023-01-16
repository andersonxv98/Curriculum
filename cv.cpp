#include "cv.h"

Curriculum::Curriculum()
{

}

QList<QString> Curriculum::getProfessionalExperience() const
{
    return professionalExperience;
}

QList<QString> Curriculum::getEducation() const
{
    return education;
}

QList<QString> Curriculum::getLanguages() const
{
    return languages;
}

QList<QString> Curriculum::getSkills() const
{
    return skills;
}

QList<QString> Curriculum::getProgrammingLanguages() const
{
    return programmingLanguages;
}

QList<QString> Curriculum::getFrameworksTecnologies() const
{
    return frameworksTecnologies;
}

QList<QString> Curriculum::getHobbies() const
{
    return hobbies;
}
