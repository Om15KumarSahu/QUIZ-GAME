#include <iostream>
#include <string>

using namespace std;

int main() {
    const int NUM_QUESTIONS = 20;
    string questions[NUM_QUESTIONS] = {
        "1. What is the correct way to declare a pointer in C++?\nA. int ptr;\nB. int *ptr;\nC. ptr int*;\nD. pointer int;\n",
        "2. What does 'cin' do in C++?\nA. Outputs data\nB. Declares a variable\nC. Takes input\nD. Compiles the code\n",
        "3. Which of these is the correct way to write a for loop?\nA. for (int i = 0; i < 10; i++)\nB. loop i from 0 to 10\nC. repeat (10 times)\nD. int i = 0; i < 10; ++i\n",
        "4. What is the file extension of a C++ source file?\nA. .cpl\nB. .cp\nC. .cpp\nD. .cs\n",
        "5. What is the output of: cout << 5 / 2;\nA. 2.5\nB. 2\nC. 3\nD. 2.0\n",
        "6. Which keyword is used to define a class in C++?\nA. class\nB. object\nC. structure\nD. define\n",
        "7. What is the output of: cout << (10 == 10);\nA. true\nB. 1\nC. 0\nD. false\n",
        "8. What is a constructor?\nA. A function that constructs loops\nB. A special function that initializes objects\nC. A destructor\nD. A function that runs in the background\n",
        "9. Which symbol is used for single-line comments in C++?\nA. /* */\nB. //\nC. #\nD. --\n",
        "10. How do you create a constant in C++?\nA. const int a = 5;\nB. constant int a = 5;\nC. static int a = 5;\nD. final int a = 5;\n",
        "11. Which header file is needed for 'cout' and 'cin'?\nA. <conio.h>\nB. <cstdio>\nC. <iostream>\nD. <stdlib.h>\n",
        "12. What is the function of 'new' in C++?\nA. Declares a variable\nB. Frees memory\nC. Allocates memory dynamically\nD. Initializes an array\n",
        "13. Which loop is guaranteed to execute at least once?\nA. for loop\nB. while loop\nC. do-while loop\nD. foreach loop\n",
        "14. What is the default return type of main() in C++?\nA. void\nB. float\nC. char\nD. int\n",
        "15. What is function overloading?\nA. Using the same name for multiple functions with different parameters\nB. Calling many functions at once\nC. Writing functions inside another function\nD. Allocating functions dynamically\n",
        "16. How do you access a member of a class using a pointer?\nA. object.member\nB. pointer.member\nC. pointer->member\nD. *pointer.member\n",
        "17. What is the size of 'int' typically on a 64-bit system?\nA. 2 bytes\nB. 4 bytes\nC. 6 bytes\nD. 8 bytes\n",
        "18. What does the 'private' access specifier mean?\nA. Accessible everywhere\nB. Not accessible\nC. Accessible only within the same class\nD. Accessible only in main()\n",
        "19. What is the correct syntax for defining a namespace?\nA. namespace name {}\nB. define namespace name {}\nC. using name {}\nD. namespace::name {}\n",
        "20. Which operator is used to resolve the scope of a variable?\nA. ::\nB. .\nC. ->\nD. ?:\n"
    };

    char answers[NUM_QUESTIONS] = {
        'B', 'C', 'A', 'C', 'B',
        'A', 'B', 'B', 'B', 'A',
        'C', 'C', 'C', 'D', 'A',
        'C', 'B', 'C', 'A', 'A'
    };

    char userAnswer;
    int score = 0;

    cout << "Welcome to the C++ Quiz!\n\n";

    for (int i = 0; i < NUM_QUESTIONS; i++) {
        cout << questions[i];
        cout << "Your answer: ";
        cin >> userAnswer;
        userAnswer = toupper(userAnswer);

        if (userAnswer == answers[i]) {
            cout << "Correct!\n\n";
            score++;
        } else {
            cout << "Wrong! The correct answer was " << answers[i] << ".\n\n";
        }
    }

    cout << "Quiz Complete! Your score: " << score << "/" << NUM_QUESTIONS << endl;

    return 0;
}

