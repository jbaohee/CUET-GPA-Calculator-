//CREATED BY: JAWAD BIN ANWAR, CSE, CUET, ID: 1704091 (17 Batch)
//CONTACT: jbaohee@gmail.com
//IT IS FREE. MODIFY THE PROGRAM IF YOU WISH TO, I HAVE NO PROBLEM.


//EACH SEMESTER GPA IS CALCULATED USING THE FORMULA MENTIONED IN THE CUET UNDERGRADUATE HANDBOOK, PAGE 36-37 (http://cuet.xyz/ugHandbook2020.pdf)


//COMPILATION AND RUNNING INSTRUCTIONS IN WINDOWS SYSTEM:
//1. IN WINDOWS, COMPILE THE PROGRAM USING "g++ gpa_calculater.cpp"
//2. IN THE SAME DIRECTORY WHERE YOU PUT THE C++ SOURCE FILE, ONE .EXE (a.exe) FILE WILL BE CREATED AFTER COMPILING
//3. DOUBLE CLICK ON THE a.exe EXECUTABLE FILE TO RUN THE PROGRAM AND CALCULATE YOUR GPA


//PROGRAM OPERATING INSTRUCTIONS:
// 1. DO NOT USE FLOAT/FRACTION NUMBER WHEN PROMPTED TO INPUT SEMESTER NO. (Ex. FOR L-1 T-1, INPUT 1; FOR L-2 T-2, INPUT 4)
// 2. DO NOT USE FLOAT/FRACTION NUMBER WHEN PROMPTED TO INPUT HOW MANY COURSES IN A SEMESTER (Ex. 8/ 9/ 10 etc.)
// 3. ALWAYS USE LOWER-CASE LETTERS WHEN PROMPTED TO INPUT LETTER GRADES (Ex. a+ /a /b /c /a- etc.)
// 4. YOU CAN USE FLOAT/FRACTION NUMER WHEN PROMPTED TO INPUT CREDIT HOUR (Ex. 3 /3.00 /4 /1.5 /0.75 /.75 /2 / 2.00 etc.)
// 5. AND THAT IS IT, ENJOY

// TIP: USE YOUR HANDBOOK TO GET THE CREDIT-HOUR FOR A PARTICULAR COURSE, USE CUET STUDENT PORTAL TO GET YOUR LETTER GRADE RESULT.  

#include <bits/stdc++.h>

using namespace std;

float letter_grade_to_point (string);

int main()
{   
    int semester;
    int semester_no;
    bool exit_condition = true;

    while(true)
    {   
        float numerator = 0;
        float total_credit = 0;
        float GPA = 0;
        int semester_courses;
        
        cout<<"\nEnter semester no: ";
        cin>> semester_no; 

        cout<<"\n#########       SEMESTER "<< semester_no << " GPA CALCULATION       ######## \n --------------------------------------------------------"<<endl;
        
        cout<<"How many courses in this semsester: ";
        cin>> semester_courses;
        
    
        for (int i=1; i<=semester_courses; i++)
        {
            string grade;
            float credit;

            cout<<"\nEnter LETTER-GRADE for course "<< i <<": ";
            cin>>grade;

            float grade_point = letter_grade_to_point (grade);

            cout<<"Enter CREDIT-HOUR for course "<< i <<": ";
            cin>>credit;

            numerator = numerator + (grade_point*credit);
            total_credit = total_credit + credit;
            GPA = numerator/total_credit;
        }

        cout <<"\n\nGPA FOR "<< semester_no << "-TH SEMESTER IS "<<GPA<<endl;
        cout <<"--------------------------------------------------------"<<endl;
        cout <<"--------------------------------------------------------\n"<<endl;
        

        cout <<"\nDo you want to calculate GPA for another semester? Type Y/N :";
        char cont; 
        cin >> cont;

        if (cont == 'Y' || cont == 'y')
            continue;
        else if (cont == 'N' || cont == 'n')
            break;
        else
            cout<<"Wrong input!"<<endl;   
    }
}

float letter_grade_to_point (string grade)
{
    string a_plus = "a+";
    string a = "a";
    string a_minus = "a-";
    string b_plus = "b+";
    string b = "b";
    string b_minus = "b-";
    string c_plus = "c+";
    string c = "c";
    string d = "d";

    float grade_point;

    if (grade == a_plus)                //A+
        {grade_point = 4.00;}

    else if (grade == a )               //A
        {grade_point = 3.75;}

    else if (grade == a_minus )         //A-
        {grade_point = 3.50;}

    else if (grade == b_plus )          //B+
        {grade_point = 3.25;}

    else if (grade == b)                //B
        {grade_point = 3.00;}

    else if (grade == b_minus)          //B-
        {grade_point = 2.75;}

    else if (grade == c_plus)           //C+
        {grade_point = 2.50;}

    else if (grade == c)                //C
        {grade_point = 2.25;}

    else if (grade == d)                //D
        {grade_point = 2.00;}
    else
        {cout<<"Invalid grade input !!"<<endl;}
    return grade_point;  

}