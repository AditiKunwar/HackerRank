// Objective
// In this challenge, we're going to learn about the difference between a class and an instance; because this is an Object Oriented concept, 
// it's only enabled in certain languages. Check out the Tutorial tab for learning materials and an instructional video!

// Task
// Write a Person class with an instance variable, age, and a constructor that takes an integer initialAge  as a parameter. The constructor must assign  
// to  after confirming the argument passed as initialAge is not negative; if a negative argument is passed as initialAge the constructor should set  to  and 
// print Age is not valid, setting age to 0.. In addition, you must write the following instance methods:
//   1. yearPasses() should increase the age instance variable by 1.
//   2. amIOld() should perform the following conditional actions:
//           If age<13 print You are young..
//           If age>=13 and age<18 print You are a teenager..
//           Otherwise, print You are old..
          
// To help you learn by example and complete this challenge, much of the code is provided for you, but you'll be writing everything in the 
// future. The code that creates each instance of your Person class is in the main method. Don't worry if you don't understand it all quite yet!

// Note: Do not remove or alter the stub code in the editor.

// Input Format
// Input is handled for you by the stub code in the editor.
// The first line contains an integer,  (the number of test cases), and the  subsequent lines each contain an integer denoting the  of a Person instance.

// Constraints

// Output Format
// Complete the method definitions provided in the editor so they meet the specifications outlined above; the code to test your work is already 
// in the editor. If your methods are implemented correctly, each test case will print  or  lines (depending on whether or not a valid  was passed to the constructor).

// Sample Input
// 4
// -1
// 10
// 16
// 18

// Sample Output
// Age is not valid, setting age to 0.
// You are young.
// You are young.

// You are young.
// You are a teenager.

// You are a teenager.
// You are old.

// You are old.
// You are old.

// SUBMITTED CODE

class Person {
public:
    int age;
    Person(int initialAge);
    void amIOld();
    void yearPasses();
};

Person::Person(int initialAge) 
{
    if (initialAge > 0) age = initialAge;
    else 
    {
        cout << "Age is not valid, setting age to 0." << endl;
        age = 0;
    }
}

void Person::amIOld() 
{
    if (age < 13) cout << "You are young." << endl;
    else if (age < 18) cout << "You are a teenager." << endl;
    else cout << "You are old." << endl;
}

void Person::yearPasses() 
{
    // Increment the age of the person in here
    age++;
}
