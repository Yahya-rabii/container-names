#include <iostream>
#include <vector>
#include "names.h"
using namespace std;
int main()
{

    vector <names> v;

    names x1("yahya");
    names x2("younes");
    names x3("abir");
    names x4("ali");
    names x5("ahmed");
   
    v.push_back(x1);
    v.push_back(x2);
    v.push_back(x3);
    v.push_back(x4);
    v.push_back(x5);
    


   
   
      
    for (int i = 0; i < v.size(); i++)
    {
      
        v[i].aff();
        cout << "\t";

    
    }
    printf("\n");
    printf("\n");

    

    cout << "v.at(2) == ";
    v.at(2).aff();
    cout << "  =  ";
    cout << "v.at(1) == ";
    v.at(1).aff();
    v.at(2) = v.at(1);
    printf("\n");

    


    for (int i = 0; i < v.size(); i++)
    {

        v[i].aff();
        cout << "\t";

    }

    printf("\n");
    printf("\n");


    if (v.at(0) == v.at(0) )
    {

        printf("les deux sont identique \n");
        cout << "v.at(0) -> ";
        v.at(0).aff();
            cout << "  ==  ";
            cout << "v.at(0) -> ";
            v.at(0).aff();
            cout << endl;


    }
    else
    {
        printf("les deux ne sont pas identique \n");
        cout << "v.at(1) -> ";
        v.at(1).aff();
        cout << "  !=  ";
        cout << "v.at(0) -> ";
        v.at(0).aff();
        cout << endl;
    }
    printf("\n");
    printf("\n");

    
    cout <<"les noms apres remplace les voyelles par * " << endl;


    for (int i = 0; i < v.size(); i++)
    {

        
        v[i].trouvervlo();
        v[i].aff();
        cout << "\t";

    }
    printf("\n");
    printf("\n");
    printf("\n");

    

}