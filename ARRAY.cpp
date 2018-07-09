//Array dimensi satu :

#include <iostream>

using namespace std;

int main(){

     int ARnilai[5]={2,6,8,12,24};


     for(int i=0; i<5;i++){
          cout<<"Tampil nilai indek ke ["<<i<<"] = "<<ARnilai[i];
          cout<<endl;
     }

     return 0;
}

//Array dimensi dua :
#include <iostream>

using namespace std;

int main(){


     int matrikcontoh [3][2] = {{5,1},{2,7},{3,8}};


     int i,j;

     cout<<"\t==============================";
     cout<<"\n\t=== Tampil Matrik Ordo 3x2 ===\n";
     cout<<"\t==============================\n\n";

     cout<<"\ncontoh menampilkan matrik =\n";
     for(i=0;i<3;i++){
          for(j=0;j<2;j++){
               cout<<matrikcontoh[i][j]<<" ";
          }
          cout<<endl;
     }

     return 0;
}

//Array dimensi tiga :
#include <conio.h>
#include <iostream>
using namespace std;

main(){
   int n, data[30][30][30];
   cout<<"Input banyak baris = ";
			cin>>n;
   for(int i=1;i<=n;i++){
       for(int k=1;k<=2;k++){
         if(k==1){
             cout<<"Utama : ";
													cin>>data[i][0][k];
         }else if(k==2){
              for(int j=1;j<=2;j++){
                 cout<<"Input data : ";
                 cin>>data[i][j][k];
             }
         }
      }
   }

   cout<<"\nHasil : "<<endl;
   for(int i=1;i<=n;i++){
       for(int k=1;k<=2;k++){
         if(k==1){
             cout<<k<<". "<<data[i][0][k]<<endl;
         }else if(k==2){
              for(int j=1;j<=2;j++){
                 cout<<"   - "<<data[i][j][k]<<endl;
             }
         }
      }
   }

getch();
}

