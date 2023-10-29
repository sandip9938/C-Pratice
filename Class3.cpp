#include <iostream>
using namespace std;
int main()
{
    // IF Else
    int battery;
    cin >> battery;
    /*
      if(battery>10){
            cout<<"No Problem";

      }
      else{
         cout<<"low Battery";
      }
      */
    // Nested If Else
    if (battery > 70)
    {
        cout << "No Problem";
    }
    else if (battery < 50)
    {
        cout << "Please ready yor Charger";
    }
    else
    {
        cout << "low Battery";
    }
}