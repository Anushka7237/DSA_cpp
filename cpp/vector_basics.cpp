#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>vec1;
    vector<int>vect2(10,5);
    vector<int>vect3={1,2,3,4,5};
    int i;
    cout<<vec1.size()<<endl;
    for(i=0;i<vect2.size();i++)
    {
        cout<<vect2[i]<<" ";
    }
    cout<<endl;
    for(i=0;i<vect3.size();i++)
    cout<<vect3[i]<<"-";
    cout<<endl;
    cout<<"size of original vector : "<<vect3.size()<<endl;
    cout<<"capcity of original vector : "<<vect3.capacity()<<endl;
    vect3.push_back(6);//adding new element in the vector
     for(i=0;i<vect3.size();i++)
    cout<<vect3[i]<<"-";
    cout<<endl;
    cout<<"size after adding new no. in the vector : "<<vect3.size()<<endl;
    cout<<"capacity after adding new no. in the vector : "<<vect3.capacity()<<endl;//capacity will get double of previous
    vect3.pop_back();//adding new element in the vector
     for(i=0;i<vect3.size();i++)
    cout<<vect3[i]<<"-";
    cout<<endl;
    cout<<"size after deleting last no. from the vector : "<<vect3.size()<<endl;
    cout<<"capacity after deleting  last no. from the vector : "<<vect3.capacity()<<endl;
    return 0;
}
