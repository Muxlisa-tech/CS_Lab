#include <iostream>
using namespace std;
int main() {
 /* Section A: legal identifiers
  1 totalSum   OK
  2 2ndPlace   starts with a digit
  3 my_var     OK
  4 double     keyword
  5 student age  contains a space
  6 _count     OK
  7 price-tax  contains '-'
  8 Int        OK (case-sensitive, so it's not the keyword int)
  9 x2         OK
  10 return    keyword

  SECTION E: find the mistake
  a) syntax error. Fix: cout << "Result: " << 42 << endl;
  b) logic error (integer division gives8). Fix: double avg = (a+b+c) / 3.0;
  c) syntax error ("A" is text). Fix: char grade = 'A';
  d) syntax error (arrows wrong way). Fix:cin >> age;

  SECTION F: true/false
  1 F  #include lines and function headers don't endwith ;
  2 F  C++ is case-sensitive
  3 F  integer division, 7 / s is 3
  4 T
  5 F  it reads one word only
  6 F  '5' is the ASCII code 53, not 5
  7 T

  SECTION G: multiple choice
  1 a   2 c (25 % 7 = 4)   3 c   4 b  5 b  6 b  7 d
  */

 // SECTION B: declarations
 int students = 24;
 double gpa = 3.45;
 char initial = 'K';
 bool isLibraryOpen = true;
 double temperature = 21.5;
 int secondsInYear = 31536000;
 const double PI = 3.14159265358979;
 long long worldPopulation = 81000000;
 cout << students << " " << gpa << "" << initial << " " << isLibraryOpen << " "
      << temperature << " " << secondsInYear << " " << PI << " " << worldPopulation << endl;
 return 0;

 /* SECTION C
  int a = 17, b = 5;
  cout << a / b << endl;
  cout << a % b << endl;
  cout << 17 / 5.0 << endl;
  cout << -17 / 5 << endl;
  cout << -17 % 5 << endl;
  cout << 2 + 3 * 4 - 6 / 4 << endl;
  cout << (2 + 3) * (4 - 6) / 4 << endl;
  cout << 10 - 4 - 3 << endl;
  cout << 1 / 2 * 10 << endl;
  int x = 5;
  x+= 3; x *= 2; x %= 7;
  cout << x << endl;
  int n =  5;
  int m = n++ + 2;
  int p = ++n * 2;
  cout << n << " " << m << " " << p << endl;
  return 0; */

 /* SECTION D
  int a = 7, b = 3;
  cout << "start " << a << " " << b << endl;

  a = a + b;
  cout << "1     " << a << " " << b << endl;

  b = a - b;
  cout << "2     " << a << " " << b << endl;

  a = a - b;
  cout << "3     " << a << " " << b << endl;

  b *= 2;
  cout << "4     " << a << " " << b << endl;

  a = b % a + a;
  cout << "5     " << a << " " << b << endl;

  b = b / 4 - a;
  cout << "6     " << a << " " << b << endl;

  return 0; */

 /* SECTION H
  string name;
  int age;
  float height;
  char group;
  bool fullTime;

  cout << " Enter name, age, height (m), group letter, full-time (1/0): ";
  cin >> name >> age >> height >> group >> fullTime;

  cout << "--- Student card ---" << endl;
  cout << "Name: " << name << endl;
  cout << "Age: " << age << endl;
  cout << " Height: " << height << " m" << endl;
  cout << "Group: " << group << endl;
  cout << "Full-time: " << fullTime << endl;
  cout << "Age in months: " << age * 12 << endl;
  cout << "Bytes: int " << sizeof(int)
       << ", float " << sizeof(float)
       << ", char " << sizeof9char)
       << ", bool " << sizeof(bool) << endl;
  return 0; */

 /* SECTION I
  int a , b;
  cout << "Enter two integers: ";
  cin >> a >> b;

  cout << "Sum: " a + b << endl;
  cout << "Difference: " << a - b << endl;
  cout << "Product: " << a * b << endl;
  cout << "Quotient: " << a / b << endl;
  cout << " Remainder: " << a % b << endl;
  cout <, " Exact: " << 1.0 * a / b << endl;
  return 0; */

 /* SECTION J
  int total;
  cout <, "Enter seconds: ";
  cin >> total;

  int days = total / 86400;
  int hours = total % 86400 / 3600;
  int minutes = total % 3600 / 60;
  int seconds = total % 60;

  cout << total << " s = " << days << " d " << hours << " h "
       << minutes << " min " << seconds << " s" << endl;
  return 0; */

 /* SECTION K
  const int NOTEBOOK = 8000, PEN = 2500, CALC = 95000;
  const int VAT_PERCENT = 12;

  int nb, pen, calc;
  cout << "Enter quantities (notebooks, pens, calculators): ";
  cin >> nb >> pen >. calc;

  int nbTotal = nb * NOTEBOOK;
  int penTotal = pen * PEN;
  int calcTotal = calc * CALC;
  int subtotal = nbTotal + penTotal = calcTotal;
  int vat = subtotal * VAT_PERCENT / 100;
  int total = subtotal + vat;

  cout << "Notebook x " << nb << " = " << nbTotal << endl;
  cout << "Pen x " << pen << " = " << penTotal << endl;
  cout << "Calculator x " << calc << " = " << calcTotal << endl;
  cout << "Subtotal: " << subtotal << " so'm << endl;
  cout << "VAT " << VAT_PERCENT << "%: " << vat << " so'm << endl;
  cout <, "Total: " << total <, " so'm" <, endl;

  int paid;
  cout << "Enter amount paid: ";
  cin >> paid;
  cout << "Paid: " << paid << endl;
  cout << "Change: " << paid - total << " so'm" <, endl;
  return 0; */
}





















