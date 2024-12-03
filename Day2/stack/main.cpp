#include <iostream>
#include <limits> // For numeric_limits
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h> // For _getch()

#define UP 72
#define ENTER 13
#define ESC 27
#define DOWN 80
#define HOME 71
#define END 79
#define BACKSPACE 8
#define PUSH 1
#define POP 2
#define DISPLAY 3
#define ROW 0
#define COL 50
#define SIZE 100
#define WHITE 7
#define BLUE 1

using namespace std;

typedef struct Employee {
    int code;
    string name;
    int salary;
} Employee;

void gotoxy1(int x, int y) {
    COORD coord;
    coord.X = y;
    coord.Y = x;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void SetColor(int ForgC) {
    WORD wColor;
    HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO csbi;

    if (GetConsoleScreenBufferInfo(hStdOut, &csbi)) {
        wColor = (csbi.wAttributes & 0xF0) + (ForgC & 0x0F);
        SetConsoleTextAttribute(hStdOut, wColor);
    }
}

bool isValidString(string input) {
    for (char ch : input) {
        if (!isalpha(ch) && ch != ' ') {
            return false;
        }
    }
    return true;
}

Employee enterEmployee() {
    Employee e;
    bool validInput = false;
    while (!validInput) {
        cout << "Enter Employee Name:" << endl;
        fflush(stdin);
        cin >> e.name;
        validInput = isValidString(e.name);
        if (!validInput) cout << "Please enter a valid name." << endl;
    }

    validInput = false;
    while (!validInput) {
        cout << "Enter Employee Salary:" << endl;
        fflush(stdin);
        cin >> e.salary;
        if (cin.fail()) {
            cin.clear(); // Clear the error flag
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Ignore invalid input
        } else if (e.salary > 0 && e.salary < 1000000)
            validInput = true;
        if (!validInput) cout << "Please enter a valid salary." << endl;
    }

    return e;
}

void Push() {
    system("cls");
    SetColor(BLUE);
    gotoxy1(ROW + 5, COL);
    printf("1.Push \n");
    SetColor(WHITE);
    gotoxy1(ROW + 10, COL);
    printf("2.Pop \n");
    gotoxy1(ROW + 15, COL);
    printf("3.Display \n");
gotoxy1(ROW+25,COL-28);
    printf("NAVIGATE USING UP-ARW AND DOWN-ARW AND ENTER TO CHOOSE OR ESC TO EXIT");
}

void Pop() {
    system("cls");
    gotoxy1(ROW + 5, COL);
    printf("1.Push \n");
    SetColor(BLUE);
    gotoxy1(ROW + 10, COL);
    printf("2.Pop \n");
    SetColor(WHITE);
    gotoxy1(ROW + 15, COL);
    printf("3.Display\n");
gotoxy1(ROW+25,COL-28);
    printf("NAVIGATE USING UP-ARW AND DOWN-ARW AND ENTER TO CHOOSE OR ESC TO EXIT");
}

void Display() {
    system("cls");
    gotoxy1(ROW + 5, COL);
    printf("1.Push \n");
    gotoxy1(ROW + 10, COL);
    printf("2.Pop \n");
    SetColor(BLUE);
    gotoxy1(ROW + 15, COL);
    printf("3.Display\n");
    SetColor(WHITE);
gotoxy1(ROW+25,COL-28);
    printf("NAVIGATE USING UP-ARW AND DOWN-ARW AND ENTER TO CHOOSE OR ESC TO EXIT");
}

class Stack {
private:
    int top;
    int size;
    Employee* stck;
    static int stackNo;

public:
    Stack() {
        top = -1;
        size = 10;
        stck = new Employee[size];
        stackNo++;
    }

    Stack(int size) {
        top = -1;
        this->size = size;
        stck = new Employee[size];
        stackNo++;
    }

    int push() {
        if (top == size - 1)
            return 0;
        top++;
        system("cls");
        Employee e = enterEmployee();
        stck[top].code = top + 1;
        stck[top].name = e.name;
        stck[top].salary = e.salary;
        return 1;
    }

    int pop(Employee* returnedEmp) {
        if (top == -1)
            return 0;
        system("cls");
        *returnedEmp = stck[top];
        top--;
        return 1;
    }

    int display() {
                system("cls");
        if(top == -1)
            return 0;
        int x;
        cout << "STACK " << stackNo << "=" << endl;
        for (x = top; x >= 0; x--) {
            cout << "Employee Id: "<< stck[x].code << endl;
            cout << "Employee Name: "<< stck[x].name << endl;
            cout << "Employee Salary: "<< stck[x].salary << endl;
        }
        return 1;
    }

    ~Stack() {
        delete[] stck;
        cout << "Stack Destroyed" << endl;
    }
};

int Stack::stackNo = 0;

int main() {
    int Option = PUSH;
    int Menu = 0;
    char ch = 0;
    cout << "Enter size of stack:" << endl;
    int n;
    cin >> n;
    Stack s1(n);
    system("cls");
    Push();
    while (ch != ESC) {
        if (ch == -32) {
            ch = _getch();
        }
        // Navigation logic based on arrow keys or HOME, END
        if (ch == UP || ch == DOWN || ch == HOME || ch == END) {
            if (ch == UP) {
                Option = (Option == PUSH) ? DISPLAY : Option - 1;
            } else if (ch == DOWN) {
                Option = (Option == DISPLAY) ? PUSH : Option + 1;
            } else if (ch == HOME) {
                Option = PUSH;
            } else if (ch == END) {
                Option = DISPLAY;
            }
            // Update display based on current option
            switch (Option) {
            case PUSH:
                Push();
                break;
            case POP:
                Pop();
                break;
            case DISPLAY:
                Display();
                break;
            }
        }

        // Enter key pressed, execute chosen option
        if (ch == ENTER) {
            switch (Option) {
            case PUSH:
                if(s1.push()){
                    cout << "Added new employee succesfully" << endl;
                }
                else{
                    system("cls");
                    cout << "Can't add anymore employees" << endl;
                }

                Sleep(3000);
                ch = BACKSPACE;
                break;
            case POP: {
                Employee e;
                if(s1.pop(&e)){
                    cout << "Employee Id: "<< e.code << endl;
                    cout << "Employee Name: "<< e.name << endl;
                    cout << "Employee Salary: "<< e.salary << endl;
                    cout << "Removed employee succesfully" << endl;
                }
                else{
                                            system("cls");
                    cout << "Employee list empty" << endl;
                }
            cout << "Press Backspace to go back" << endl;

                break;
            }
            case DISPLAY:
               if(!s1.display())
            cout << "Employee list empty" << endl;
           cout << "Press Backspace to go back" << endl;

                                break;
            }
        }

        // Handle BACKSPACE to go back to menu
        if (ch == BACKSPACE) {
            system("cls");
            Option = PUSH;
            gotoxy1(ROW + 5, COL);
            SetColor(BLUE);
            printf("1.Push \n");
            gotoxy1(ROW + 10, COL);
            SetColor(WHITE);
            printf("2.Pop \n");
            gotoxy1(ROW + 15, COL);
            printf("3.Display \n");
            gotoxy1(ROW+25,COL-28);
            printf("NAVIGATE USING UP-ARW AND DOWN-ARW AND ENTER TO CHOOSE OR ESC TO EXIT");
        }
        ch = _getch(); // Update `ch` at the end
    }
}
