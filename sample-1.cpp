/*
  A program that loops through students marks and tells if entered marks
  are valid or not
*/

#include <iostream>
using namespace std;

int main() {
  cout << "Minimum Marks: 0" << endl;
  cout << "Maximum Marks: 100" << endl;

  int next = 1;
  do {
    int marks = -1;
    cout << "Enter marks of student: ";	
    cin >> marks;
    if (marks < 0 || marks > 100)
    cout << "Invalid Marks" << endl;
    else
    cout << "Valid Marks" << endl;

    cout << "Do you want to enter marks of another student? Enter 1 for yes: ";
    cin >> next;
  } while (next == 1);
}
