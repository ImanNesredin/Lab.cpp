#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  string students[5][1];
  int grades[5][4];
  double averages[5][2];

  for (int i = 0; i < 5; i++) {
    cout << "Enter the full name of student " << i + 1 << ": ";
    cin >> students[i][0];

    for (int j = 0; j < 4; j++) {
      cout << "Enter grade " << j + 1 << ": ";
      cin >> grades[i][j];
    }
  }

  for (int i = 0; i < 5; i++) {
    averages[i][0] = (grades[i][0] + grades[i][1] + grades[i][2] + grades[i][3]) / 4.0;
    averages[i][1] = (0.2 * grades[i][0]) + (0.3 * grades[i][1]) + (0.3 * grades[i][2]) + (0.2 * grades[i][3]);
  }

  cout << endl << "Student" << setw(7) << "Grade1" <<setw(6)<< "Grade2" << setw(6)<< "Grade3" <<setw(6)<< "Grade4" <<setw(6)<< "Avg" <<setw(6)<< "wtdAvg" << endl;

  for (int i = 0; i < 5; i++) {
    cout << students[i][0] <<setw(7)<< grades[i][0] <<setw(7)<< grades[i][1] << setw(7)<< grades[i][2] <<setw(7)<< grades[i][3] <<setw(7)<< averages[i][0] <<  setw(8)<< averages[i][1] << endl;
  }

  return 0;
}
