#include <iostream>
#include <string>
using namespace std;

class School{
string Name;
int Roll;
int HistoryMarks;
int MathMarks;
int PhysicsMarks;
int Total = 0;
string Grade;

public:
    School(string name, int roll, int historymarks, int mathmarks, int physicsmarks)
    {
        Name = name;
        Roll = roll;
        HistoryMarks = historymarks;
        MathMarks = mathmarks;
        PhysicsMarks = physicsmarks;
    }
    //accessor & modifiers
    void setName(string name){ Name = name; }
    void setRoll(int roll){ Roll = roll; }
    void setHistoryMarks(int historymarks) { HistoryMarks = historymarks; }
    void setMathMarks(int mathmarks) { MathMarks = mathmarks; }
    void setPhysicsMarks(int physicsmarks) { PhysicsMarks = physicsmarks; }
    string getName()
    {
        cout <<Name << endl;
        return Name;
    }
    int getRoll()
    {
        cout <<Roll << endl;
        return Roll;
    }
    int getHistoryMarks()
    {
        cout<<HistoryMarks <<endl; 
        return HistoryMarks;
    }
    int getMathMarks()
    {
        cout <<MathMarks <<endl;
        return MathMarks;
    }
    int getPhysicsMarks()
    {
        cout <<PhysicsMarks <<endl;
        return PhysicsMarks;
    }

    //facilitator
    int TotalMarks(); 
    void GetGrade();

    //enquiry
    bool isPresent(); 
};

int School::TotalMarks(){
    int totalAverage = (HistoryMarks + MathMarks + PhysicsMarks) / 3;
    double totalPercentage = totalAverage / 100;
    Total = totalPercentage;
    cout<<"Total Average: "<<totalPercentage<<"%"<<endl;
    return totalPercentage;
}

void School::GetGrade(){
    if (Total >= 93){
        Grade = "A";
        cout<< Grade <<endl;
    } else if (92 <= Total >= 89){
        Grade = "B"; 
        cout << Grade <<endl;
    } else if (78 <= Total >= 60){
        Grade = "C";
        cout << Grade << endl;
    } else{
        Grade = "F"; 
        cout << Grade <<endl;
    }
}

bool School::isPresent(){
    if (Roll){
        cout<< Name <<" is present." <<endl; 
    }
    return true;
}

int main(){
    School S1("Joe", 5, 32, 90, 98);
    S1.isPresent();
    S1.TotalMarks();
    S1.GetGrade();

    return 0;
}