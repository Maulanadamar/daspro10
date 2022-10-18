#include <iostream>

using namespace std;

int main()

{/*
  int hari  = 31;
  int bulan = 2;

  if ( hari >= 1  && hari <= 31){
  cout << "valid" << endl;
  }
  else {
   cout << "tidak valid" << endl;
   }
   if ( bulan >= 1 && bulan <= 12){
   cout << "valid" <<endl;
    }
     else {
   cout << "tidak valid" <<endl;}*/
   int month ;
   cin >> month ;

   switch (month){
   case 1:
      cout << "januari";
      break ;
   case 2:
      cout << "februari";
      break ;
   case 3:
      cout << "maret";
      break ;
   case 4:
      cout << "april";
      break ;
    case 5:
      cout << "mei";
      break ;
    case 6:
      cout << "juni";
      break ;
      case 7:
      cout << "agustus";
      break ;
   default:
    cout  <<"undefined";
    break ;
    }

    return 0;
}
