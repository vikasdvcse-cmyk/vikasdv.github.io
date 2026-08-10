#include <iostream>

int main() {
     float TotalClasses,ClassesAttended,AttendancePercentage,TestMarks,AssignmentMarks,TotalMarks;
std::cout << "Enter the total number of classes: ";
std::cin >> TotalClasses;
}if (TotalClasses <=0 || TotalClasses > 100 )
{
    std::cout << "Invalid input for total classes. Please enter a value between 1 and 100." << std::endl;
    return 1;
}
std::cout << "Enter the number of classes attended: ";
std::cin >> ClassesAttended;
if (ClassesAttended < 0 || ClassesAttended > TotalClasses) {
std::cout << "Invalid input for classes attended. Please enter a value between 0 and " << TotalClasses << "." << std::endl;
return 1;
}
AttendancePercentage = (ClassesAttended / TotalClasses) * 100;
std::cout << "Enter the test marks ";;
std::cin >> TestMarks;
if (TestMarks < 0 || TestMarks > 25) {
std::cout << "Invalid input for test marks. Please enter a value between 0 and 25." << std::endl;return 1;
}
std::cout << "Enter the assignment marks: ";
std::cin>>AssignmentMarks;
if (AssignmentMarks < 0 || AssignmentMarks > 25) {
std::cout << "Invalid input for assignment marks. Please enter a value between 0 and 25." << std::endl;
return 1;
}
TotalMarks = TestMarks + AssignmentMarks;
if (AttendancePercentage < 75) {
std::cout << "You are not eligible to take the final exam due to low attendance." << std::endl;
} else {
     std::cout << "Your attendance percentage is: " << AttendancePercentage << "%" << std::endl;
     std::cout << "Your total marks are: " << TotalMarks << std::endl;
if (TotalMarks >= 40) {
     std::cout << "Congratulations! You have topped the exam." << std::endl;
} else {
std::cout << "u can do better  ." << std::endl;
}
return 0;
}                                                                                                                                                                                     