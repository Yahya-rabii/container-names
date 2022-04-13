#include "names.h"

names::names()
{
    this->nom = "";
}

names::names(const names& n)
{
    this->nom = n.nom;
}

names::names(string nom)
{
    this->nom = nom;
}

bool names::operator==(const names& n)
{
    return (this->nom == n.nom);
}

names&  names::operator=(const names& n)
{

    if (this != &n)
    {
           this->nom = n.nom ;
    }
   
    return*this;
}

void names::aff()
{
    cout<<this->nom;
}

void names::trouvervlo()
{
    
    


    for (int t = 0; t < this->nom.size(); t++)
    {
        if (this->nom[t] == 'a' ||
            this->nom[t] == 'A' ||
            this->nom[t] == 'e' ||
            this->nom[t] == 'E' ||
            this->nom[t] == 'i' ||
            this->nom[t] == 'I' ||
            this->nom[t] == 'o' ||
            this->nom[t] == 'O' ||
            this->nom[t] == 'u' ||
            this->nom[t] == 'U' ||
            this->nom[t] == 'y' ||
            this->nom[t] == 'Y')

         this->nom[t] = '*';
    }

}
