#include <iostream>
#include <vector>
#include <cmath>

const int EARTH_MU = 398600;
const int EARTH_RAD = 6378;
const int SEC_TO_MIN = 60;
const int SEC_TO_HR = 3600;
const int SEC_TO_DAY = 86400;

using namespace std;
int main(){

  cout << "Orbits!" << endl;
  cout << "Testing testing!" << endl;
  cout << "Mu of Earth: " << EARTH_MU << endl;


  vector<double> state0 = {6878, 0, 0, 0, sqrt(EARTH_MU/6878), 0};

  for (float i : state0){
    cout << i << " ";
  }

  cout << endl;

  return 0;


}
