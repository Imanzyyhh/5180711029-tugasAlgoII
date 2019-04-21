#include <iostream>
using namespace::std;
int pangkat(int angka , int pangkatt){

if(pangkatt<0)
    return 0;
    else

        return angka*pangkat( angka, pangkatt-1);
}

int bagi(int angka , int kurang){
if(kurang>0)
     return 1;
    else

        return 1/angka*bagi( angka, kurang+1);
}


main(){
 int bilper,bilke;

 cout<<"\t===== BILANGANBER PANGKAT ====="<<endl<<endl;
 cout<<"\tmasukkan bilangan pertama :";cin>>bilper;
 cout<<"\tmasukkan bilangan kedua   :";cin>>bilke;
 cout<<"\tHasil     ="<<pangkat(bilper,bilke)<<endl;
 cout<<"\tmasukkan bilangan pertama :";cin>>bilper;
 cout<<"\tmasukkan bilangan kedua   :";cin>>bilke;
 cout<<"\tHasil     ="<<bagi(bilper,bilke)<<endl;
}
