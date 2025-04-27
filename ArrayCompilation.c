#include <stdio.h>
#include <stdlib.h>
#include <time.h>




int main()
{
    int start;

    do 
    {
        printf ("Welcome To Fundamentals of Programming!\n");
        printf ("FPR11C - C135_IT\n");
        printf ("Compilation of Programs - First Semester AY 2023 - 2023 \n");



        printf ("Submitted by: Carl Anthony V. Talaboc & Lourenz M. Bautista\n");
        printf ("Submitted to: Prof. Maria Corazon D. Adriano \n");
        printf ("Date: December 12, 2023\n");


        printf ("\nPress 1 to continue.....\n");
        printf ("Press 2 to exit the program....\n");
        scanf ("%d", &start);

        switch (start)
        {
            case 1:
                {
                    int menu;

                    do
                    {
                        printf("Welcome To Fundamentals of Programming Compilation of Programs!\n");
                        printf("\nPrelim Programs -------- [1]\n");
                        printf("Midterm Programs -------- [2]\n");
                        printf("Finals Programs -------- [3]\n");
                        printf("Exit Program -------- [4]\n");
                        printf("Select program you want to visit: ");
                        scanf("%d", &menu);


                        switch (menu)
                        {
                            case 1:
                                {
                                    int pMenu;
                                    do{
                                        printf("\n----------WELCOME-TO-PRELIM-ACTIVITIES----------\n\n");
                                        printf("[1] - Activity 1 - Hello World\n");
                                        printf("[2] - Activity 2 - Addition\n");
                                        printf("[3] - Activity 3 - Relational Operators\n");
                                        printf("[4] - Activity 4 - Grading System v1\n");
                                        printf("[5] - Activity 5 - Grading System v2\n");
                                        printf("[6] - Activity 6 - Grading Sytem v3\n");
                                        printf("[7] - Activity 7 - BINGO Game\n");
                                        printf("[8] - Activity 8 - Letter\n");
                                        printf("[9] - Activity 9 - SFT\n");
                                        printf("[10] - Activity 10 - Value Determining\n");
                                        printf("[11] - Activity 11 - Determine Equivalent Value\n");
                                        printf("[12] - Return to Main Menu\n");
                                        printf ("Enter page number: ");
                                        scanf ("%d", &pMenu);

                                    switch (pMenu)
                                    {
                                        case 1:
                                            {
                                                sayHello();

                                                system("pause");
                                                system("cls");
                                                break;
                                            }

                                        case 2:
                                            {
                                                int integ1, integ2;
                                                int returnsum(int integer1, int integer2);

                                                printf("Enter first integer: ");
                                                scanf("%d", &integ1);
                                                printf("Enter second integer: ");
                                                scanf("%d", &integ2);

                                                printf ("Sum is %d\n", returnsum(integ1, integ2));

                                                system("pause");
                                                system("cls");
                                                break;
                                            }

                                        case 3:
                                            {
                                                void answer(int num1, int num2);
                                                int num1, num2;

                                                printf ("Enter two integers, and\n I will tell you the relationship they satisfy:\n");
                                                scanf ("%d%d", &num1, &num2);

                                                answer(num1, num2);

                                                system("pause");
                                                system("cls");
                                                break;
                                                
                                            }

                                        case 4:
                                            {
                                                int total = 0, counter = 1, grade;
                                                int returnTotal(int a);

                                                while (counter <= 10)
                                                {
                                                    printf ("Enter grade: ");
                                                    scanf ("%d", &grade);
                                                    total = total + grade;
                                                    counter++;
                                                }

                                                printf ("Class average is: %d\n", returnTotal (total));

                                                system("pause");
                                                system("cls");
                                                break;
                                            }

                                        case 5:
                                            {
                                                int total = 0, counter = 1, grade, data;
                                                int totalReturn (int c, int d);


                                                printf ("How many grades you want to process: ");
                                                scanf ("%d", &data);

                                                while (counter <= data)
                                                {
                                                    printf ("Enter grade: ");
                                                    scanf ("%d", &grade);
                                                    total = total + grade;
                                                    counter++;
                                                }

                                                printf ("Class average is: %d\n", totalReturn(total, data));

                                                system("pause");
                                                system("cls");
                                                break;
                                            }

                                        case 6:
                                            {
                                                returnGrade();
                                                system("pause");
                                                system("cls");
                                                break;
                                            }

                                        case 7:
                                            {
                                                bingo();
                                                system("pause");
                                                system("cls");
                                                break;
                                            }

                                        case 8:
                                            {
                                                name();
                                                system("pause");
                                                system("cls");
                                                break;
                                            }

                                        case 9:
                                            {
                                                txtmessage();
                                                system("pause");
                                                system("cls");
                                                break;
                                            }
                                        case 10:
                                            {
                                                rValue();
                                                system("pause");
                                                system("cls");
                                                break;
                                            }

                                        case 11:
                                            {
                                                equiv();
                                                system("pause");
                                                system("cls");
                                                break;
                                            }
                               
                                        case 12:
                                            {
                                                printf ("Thank you for checking the programs!\n");
                                                system("pause");
                                                system("cls");
                                                break;
                                            }

                                    
                                        default:
                                            printf("Invalid choices!]\n");
                                            break;
                                    }
                                    }while (pMenu != 12);
                                    break;
                                }

                            case 2:
                                {
                                    int mMenu;
                                    do{
                                        printf("\n----------WELCOME-TO-MIDTERM-ACTIVITIES----------\n\n");
                                        printf("[1] - Activity 1 - Table 1\n");
                                        printf("[2] - Activity 2 - Table 2\n");
                                        printf("[3] - Activity 3 - Multiplication Table\n");
                                        printf("[4] - Activity 4 - Automated Teller Machine v1\n");
                                        printf("[5] - Activity 5 - Automated Teller Machine v2\n");
                                        printf("[6] - Activity 6 - Letters, Digits, and Special Characters Program\n");
                                        printf("[7] - Activity 7 - Array Using Brute Force Method\n");
                                        printf("[8] - Activity 8 - Array in Shortcut Method\n");
                                        printf("[9] - Activity 9 - Combining of Arrays \n");
                                        printf("[10] - Activity 10 - Combining of Arrays in Organized \n");
                                        printf("[11] - Activity 11 - Printing Two-Dimensional Arrays Using Brute Force Method\n");
                                        printf("[12] - Activity 12 - Day\n");
                                        printf("[13] - Activity 13 - OddEven\n");
                                        printf("[14] - Activity 14 - Loop 1\n");
                                        printf("[15] - Activity 15 - Loop 2\n");
                                        printf("[15] - Activity 15 - Loop 2\n");
                                        printf("[16] - Activity 16 - Start and Step\n");
                                        printf("[17] - Return to Main Menu\n");
                                        printf("Enter page number: ");
                                        scanf("%d", &mMenu);

                                        switch (mMenu)
                                        {
                                        case 1:
                                        {
                                            
                                        }
                                }


                                    } while (mMenu != 5);
                                    break;
                                }

                                case 3:
                                {
                                    int fMenu;

                                    do
                                    {
                                        printf("\n----------WELCOME-TO-FINAL-ACTIVITIES----------\n\n");
                                        printf("[1] - Activity 1 - Random Die Rolling\n");
                                        printf("[2] - Activity 2 - Craps\n");
                                        printf("[3] - Activity 3 - Scooping Example\n");
                                        printf("[4] - Activity 4 - Recursive Fibonaaci\n");
                                        printf("[5] - Activity 5 - Finding Maximum\n");
                                        printf("[6] - Activity 6 - Sample Void Function v1\n");
                                        printf("[7] - Activity 7 - Sample Void Function v2\n");
                                        printf("[8] - Activity 8 - Sample Void Function v3\n");
                                        printf("[9] - Activity 9 - Math Function\n");
                                        printf("[10] - Activity 10 - Season\n");
                                        printf("[11] - Activity 11 - Age\n");
                                        printf("[12] - Activity 12 - Season, Age, Bingo Menu\n");
                                        printf("[13] - Activity 13 - Printing Arrays\n");
                                        printf("[14] - Activity 14 - Computing Rows in 2D Arrays\n");
                                        printf("[15] - Activity 15 - Copy of Array A to B\n");
                                        printf("[16] - Activity 16 - Equivalent and Not Equivalent\n");
                                        printf("[17] - Activity 17 - Determine Minimum Function\n");
                                        printf("[18] - Return To Main Menu\n");
                                        printf("Enter the number you want to explore: ");
                                        scanf("%d", &fMenu);

                                        switch (fMenu)
                                        {

                                        case 1:
                                        {
                                            rDieRolling();
                                            system("pause");
                                            system("cls");
                                            break;
                                        }

                                        case 2:
                                        {
                                            int rollDice(void);
                                            int gameStatus, sum, myPoint;

                                            srand(time(NULL));
                                            sum = rollDice();

                                            switch (sum)
                                            {
                                            case 7:
                                            case 11:
                                                gameStatus = 1;
                                                break;

                                            case 2:
                                            case 3:
                                            case 12:
                                                gameStatus = 2;
                                                break;

                                            default:
                                                gameStatus = 0;
                                                myPoint = sum;
                                                printf("Point is %d\n", myPoint);
                                                break;
                                            }
                                            while (gameStatus == 0)
                                            {
                                                sum = rollDice();

                                                if (sum == myPoint)
                                                    gameStatus = 1;
                                                else if (sum == 7)
                                                    gameStatus = 2;
                                            }
                                            if (gameStatus == 1)
                                                printf("Player Wins\n");
                                            else
                                                printf("Player Loses\n");
                                        }
                                            system("pause");
                                            system("cls");
                                            break;

                                        case 3:
                                        {

                                            void a(void);
                                            void b(void);
                                            void c(void);

                                            int x = 5;

                                            printf("Local x in outer scope of main is %d\n", x);

                                            {
                                                int x = 7;
                                                printf("local x an inner scope of main is %d\n", x);
                                            }

                                            printf("local x in outer scope of main is %d\n", x);

                                            a();
                                            b();
                                            c();
                                            a();
                                            b();
                                            c();

                                            printf("local x in main is %d\n", x);

                                            system("pause");
                                            system("cls");
                                            break;
                                        }

                                        case 4:
                                        {
                                            long fibonacci(long);
                                            long result, number;

                                            printf("Enter an integer: ");
                                            scanf("%ld", &number);
                                            result = fibonacci(number);
                                            printf("Fibonacci (%ld) = %ld\n", number, result);

                                            system("pause");
                                            system("cls");
                                            break;
                                        }

                                        case 5:
                                        {
                                            int maximum(int, int, int);
                                            int a, b, c;

                                            printf("Enter three integers: ");
                                            scanf("%d%d%d", &a, &b, &c);
                                            printf("Maximum is: %d\n", maximum(a, b, c));

                                            system("pause");
                                            system("cls");
                                            break;
                                        }

                                        case 6:
                                        {
                                            void hello();
                                            void space();
                                            void world();
                                            void allTogetherNow();

                                            allTogetherNow();
                                            allTogetherNow();
                                            allTogetherNow();

                                            system("pause");
                                            system("cls");
                                            break;
                                        }

                                        case 7:
                                        {
                                            void hello();
                                            void space();
                                            void world();
                                            void allTogetherNow();

                                            int inputTimes;

                                            printf("Enter the number of times to print the message: ");
                                            scanf("%d", &inputTimes);

                                            for (int i = 0; i < inputTimes; ++i)
                                            {
                                                allTogetherNow();
                                            }

                                            system("pause");
                                            system("cls");
                                            break;
                                        }

                                        case 8:
                                        {
                                            void printData(int i, char c, float f, double d);

                                            int i = 10;
                                            char c = 'c';
                                            float f = 1.00;
                                            double d = 3.1416;

                                            printData(i, c, f, d);
                                            printf("\n\n");
                                            printData(2, 'z', 1.25, 100.45);

                                            system("pause");
                                            system("cls");
                                            break;
                                        }

                                        case 9:
                                        {
                                            void diff(int x, int y);
                                            void product(float Fx, float Fy);
                                            void quotient(double Dx, double Dy);
                                            int x, y;
                                            float Fx, Fy;
                                            double Dx, Dy;

                                            printf("---------------------------------------------\n");
                                            printf("          WELCOME TO MATH FUNCTIONS!           \n");
                                            printf("---------------------------------------------\n");

                                            printf("Enter two different number:");
                                            scanf("%d%d", &x, &y);
                                            diff(x, y);

                                            printf("Enter number you to multiply:");
                                            scanf("%f%f", &Fx, &Fy);
                                            product(Fx, Fy);

                                            printf("Enter number you to divide:");
                                            scanf("%lf%lf", &Dx, &Dy);
                                            quotient(Dx, Dy);

                                            system("pause");
                                            system("cls");
                                            break;
                                        }

                                        case 10:
                                        {
                                            void season(int month);
                                            int month;

                                            printf("Enter month in numeric form: ");
                                            scanf("%d", &month);
                                            season(month);

                                            system("pause");
                                            system("cls");
                                            break;
                                        }

                                        case 11:
                                        {
                                            void personAge(int age);
                                            int age;

                                            printf("Enter your age: ");
                                            scanf("%d", &age);
                                            personAge(age);

                                            system("pause");
                                            system("cls");
                                            break;
                                        }

                                        case 12:
                                        {
                                            void season(int month);
                                            void personAge(int age);
                                            char bingo1(int n);
                                            int month;
                                            int n;
                                            int age;
                                            int trans;

                                            do
                                            {
                                                printf("\n\nMAIN MENU\n");
                                                printf("[1] Season\n");
                                                printf("[2] Person's Age\n");
                                                printf("[3] Bingo Game\n");
                                                printf("[4] Exit\n");
                                                printf("Enter your choice: ");
                                                scanf("%d", &trans);

                                                switch (trans)
                                                {
                                                case 1:
                                                    printf("Season Program\n");
                                                    printf("Enter month in numeric form: ");
                                                    scanf("%d", &month);
                                                    season(month);
                                                    break;

                                                case 2:
                                                    printf("\nPerson's Age Program\n");
                                                    printf("Enter age: ");
                                                    scanf("%d", &age);
                                                    personAge(age);
                                                    break;

                                                case 3:
                                                    printf("Bingo Game\n");
                                                    printf("Enter bingo number [1-75]: ");
                                                    scanf("%d", &n);
                                                    printf("%c\n", bingo1(n));
                                                    break;

                                                case 4:
                                                    printf("Program ends!\n");
                                                    break;

                                                default:
                                                    printf("Error invalid choice!\n");
                                                }
                                            } while (trans != 4);

                                            system("pause");
                                            system("cls");
                                            break;
                                        }

                                        case 13:
                                        {
                                            void printArray(int A[]);
                                            int computeSum(int A[]);

                                            int A[] = {10, 20, 30, 40, 50};
                                            printf("Program Output:\n");
                                            printArray(A);
                                            printf("Sum is: %d\n", computeSum(A));

                                            system("pause");
                                            system("cls");
                                            break;
                                        }

                                        case 14:
                                        {
                                            int FuncArray(int A[][3]);
                                            int sumArray(int A[][3], int row);

                                            int sRow;
                                            int A[][3] = {{1, -2, 3}, {-4, 5, 6}, {7, 8, -9}, {10, 11, -12}, {13, 14, -15}};
                                            printf("Count of negative elements: %d\n", FuncArray(A));

                                            printf("Enter row you want to add from 0-4: ");
                                            scanf("%d", &sRow);

                                            if (sRow < 5)
                                            {
                                                printf("The sum of the row is: %d\n", sumArray(A, sRow));
                                            }
                                            else
                                                printf("Error row number input.\n");

                                            system("pause");
                                            system("cls");
                                            break;
                                        }

                                        case 15:
                                        {
                                            void copyAtoB(int A[5], int B[], int n);

                                            int n;
                                            int A[] = {10, 20, 30, 40, 50};
                                            int B[5];

                                            copyAtoB(A, B, 5);
                                            system("pause");
                                            system("cls");
                                            break;
                                        }

                                        case 16:
                                        {
                                            void compare(int a, int b);

                                            int x, y;

                                            printf("Enter the first integer: ");
                                            scanf("%d", &x);
                                            printf("Enter second integer: ");
                                            scanf("%d", &y);

                                            compare(x, y);
                                            system("pause");
                                            system("cls");
                                            break;
                                        }

                                        case 17:
                                        {
                                            double minimum(double a, double b, double c);
                                            double x = 1.25, y = 2.50, z = 1.15;

                                            printf("Minimum is: %.2lf\n", minimum(x, y, z));
                                            printf("Minimum is: %.2lf\n", minimum(1.0, 2.0, 3.0));
                                            system("pause");
                                            system("cls");
                                            break;
                                        }

                                        case 18:
                                        {
                                            printf("\nThank You For Visiting My Finals Project!\n");
                                            system("pause");
                                            system("cls");
                                            break;
                                        }

                                        default:
                                            printf("Error Input! Please Try Again.\n");
                                        }
                                    } while (fMenu != 18);
                                    break;
                                }

                            case 4:
                                printf("Exiting the program.....\n");
                                system("cls || clear");
                                break;

                            default:
                                printf("Invalid choices!]\n");
                                break;
                        }

                    } while (menu != 4);
                    break;
                }
            case 2:
                printf ("Exiting the program.....\n");
                system ("cls || clear");
                break;

            default:
                printf ("Invalid choices!]\n");
                break;
        }

    } while (start != 2);


    return 0;
}



//Prelims
void equiv()
{
    int input1, input2;

    printf("Enter your first integer here: ");
    scanf("%d", &input1);

    printf("Enter your second integer here: ");
    scanf("%d", &input2);

    if (input1 == input2)
        printf("EQUIVALENT!\n");
    else
        printf("NOT EQUIVALENT!\n");
}

void rValue()
{
    int value;

    printf("Enter your given value: ");
    scanf("%d", &value);

    if (value >= 1)
    {
        printf("TRUE!\n");
    }
    else
        printf("FALSE!\n");
}

void txtmessage()
{
    int number, charge;

    printf("Number of text messages: ");
    scanf("%d", &number);

    if (number <= 200)
    {
        printf("Total charge is Php0\n");
    }
    else if (number > 200)
    {
        charge = 0.5 * (number - 200);
        printf("Total charge is Php%.2f\n", charge);
    }
    else
    {
        printf("Error Input! Please Try Again.\n");
    }
}

void name()
{
    char name;
    printf("Enter your name: ");
    scanf(" %c", &name);

    if (name >= 'a' && name <= 'z')
    {
        printf("You've written the first letter of the name in lowercase letter!\n");
    }
    else if (name >= 'A' && name <= 'Z')
    {
        printf("You've written the first letter of the name in uppercase letter!\n");
    }
    else
    {
        printf("Error Input! Please Try Again.\n");
    }
}

void bingo()
{
    int bNumber;

    printf("BINGO GAME\n");
    printf("Enter BINGO numbers from 1-75: ");
    scanf("%d", &bNumber);

    if (bNumber >= 1 && bNumber <= 15)
    {
        printf("B\n");
    }
    else if (bNumber >= 16 && bNumber <= 30)
    {
        printf("I\n");
    }
    else if (bNumber >= 31 && bNumber <= 45)
    {
        printf("N\n");
    }
    else if (bNumber >= 46 && bNumber <= 60)
    {
        printf("G\n");
    }
    else if (bNumber >= 61 && bNumber <= 75)
    {
        printf("O\n");
    }
    else
        printf("Invalid Number!\n");
}

void returnGrade()
{
    int total = 0, counter = 0, grade;

    printf("Enter grade, -1 to end: ");
    scanf("%d", &grade);

    while (grade != -1)
    {
        total += grade;
        counter++;
        printf("Enter grade, -1 to end: ");
        scanf("%d", &grade);
    }

    if (counter != 0)
    {
        float aver = (float)total / counter;
        printf("Class average is %.2f\n", aver);
    }
    else
    {
        printf("No grades were entered\n");
    }
}

int totalReturn(int c, int d)
{
    int average;

    average = c / d;

    return average;
}

int returnTotal(int a)
{
    int average;

    average = a /10;

    return average;
}

void answer(int num1, int num2)
{
    if (num1 == num2)
        printf("%d is equal to %d\n", num1, num2);

    if (num1 != num2)
        printf("%d is not equal to %d\n", num1, num2);

    if (num1 < num2)
        printf("%d is less than %d\n", num1, num2);

    if (num1 > num2)
        printf("%d is greater than %d\n", num1, num2);

    if (num1 <= num2)
        printf("%d is less than or equal to %d\n", num1, num2);

    if (num1 >= num2)
        printf("%d is greater than or equal to %d\n", num1, num2);
}

int returnsum(int integer1, int integer2)
{
    return integer1 + integer2; 
}

void sayHello()
{
    printf ("Hello World!\n");
}

//Finals Function Header and Parameter
void rDieRolling() {
    int i;
    unsigned seed;

    printf("Enter Seed: ");
    scanf("%u", &seed);
    srand(seed);

    for (i = 1; i <= 10; i++) {
        printf("%10d", 1 + (rand() % 6));

        if (i % 5 == 0)
            printf("\n");
    }
    system("pause");
    system("cls");
}
double minimum (double a, double b, double c)
{
    if (a < b && a < c )
    return a;
    else if (b < a && b < c)
    return b;
    else    
        return c;
}

void compare(int a, int b)
{
    if (a == b)
    {
        printf("EQUIVALENT!\n");
    }
    else
        printf("NOT EQUIVALENT!\n");
}

void copyAtoB(int A[], int B[5], int n)
{
    for (int i = 0; i < n; i++)
    {
        B[i] = A[i];
        printf("A[%d] = %d \t B[%d] = %d\n", i, A[i], i, B[i]);
    }
}

int FuncArray(int A[][3])
{
    int negative = 0;
    int row, col;

    for (row = 0; row < 5; row++)
    {
        for (col = 0; col < 3; col++)
        {
            if (A[row][col] < 0)
                negative++;
        }
        printf("\n");
    }

    return negative;
}

int sumArray(int A[][3], int row)
{
    int sum = 0;
    int col;

    for (col = 0; col < 3; col++)
    {
        sum = sum + A[row][col];
    }
}

void printArray(int A[])
{
    for (int i = 0; i < 5; i++)
    {
        printf("A [%d] = %d\n", i, A[i]);
    }
}

int computeSum(int A[])
{
    int sum = 0;
    int i;

    for (i = 0; i < 5; i++)
    {
        sum = sum + A[i];
    }
    return sum;
}

char bingo1(int n)
{
    if (n >= 1 && n <= 15)
        return 'B';
    else if (n >= 16 && n <= 30)
        return 'I';
    else if (n >= 31 && n <= 45)
        return 'N';
    else if (n >= 46 && n <= 60)
        return 'G';
    else if (n >= 61 && n <= 75)
        return 'O';
    else
        return 'X'; // error
}

void personAge(int age)
{
    if (age >= 0 && age <= 4)
        printf("Baby!\n");
    else if (age >= 5 && age <= 11)
        printf("Child!\n");
    else if (age >= 12 && age <= 19)
        printf("Teenager!\n");
    else if (age >= 20 && age <= 100)
        printf("Adult!\n");
    else
        printf("Error: Invalid age!\n");
}

void season(int month)
{
    switch (month)
    {
    case 1:
    case 2:
    case 3:
        printf("It is winter!\n");
        break;

    case 4:
    case 5:
    case 6:
        printf("It is Spring!\n");
        break;

    case 7:
    case 8:
    case 9:
        printf("It is Summer!\n");
        break;

    case 10:
    case 11:
    case 12:
        printf("It is autumn!\n");
        break;

    default:
        printf("Error: Invalid month!\n");
    }
}

void diff(int x, int y)
{
    if (x >= y)
    {
        printf("The difference of the two given number is: %d\n\n", x -= y);
    }
    else
    {
        printf("The difference of the two given number is: %d\n\n", y -= x);
    }
}

void product(float Fx, float Fy)
{
    printf("The product of the two given numbers is: %.2f\n\n", Fx *= Fy);
}

void quotient(double Dx, double Dy)
{
    if (Dx >= Dy)
    {
        printf("The quotient of the two given numbers is: %.2lf\n\n", Dx /= Dy);
    }
    else if (Dy >= Dx)
    {
        printf("The quotient of the two given numbers is: %.2lf\n\n", Dy /= Dx);
    }
    else
    {
        printf("Math Error: You cannot divide numbers in 0.\n\n");
    }
}

void printData(int i, char c, float f, double d)
{
    printf("%d\n", i);
    printf("%c\n", c);
    printf("%.2f\n", f);
    printf("%.2lf\n", d);
}

void hello()
{
    printf("Hello");
}

void space()
{
    printf(" ");
}

void world()
{
    printf("World!!!\n");
}

void allTogetherNow()
{
    hello();
    space();
    world();
}

int maximum(int x, int y, int z)
{
    int max = x;

    if (y > max)
        max = y;

    if (z > max)
        max = z;

    return max;
}

long fibonacci(long n)
{
    if (n == 0 || n == 1)
        return n;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

int rollDice(void)
{
    int die1, die2, workSum;

    die1 = 1 + (rand() % 6);
    die2 = 1 + (rand() % 6);
    workSum = die1 + die2;
    printf("Player rolled %d + %d = %d\n", die1, die2, workSum);
    return workSum;
}

void a(void)
{
    int x = 25;

    printf("\nlocal x in a is %d after entering a\n", x);
    ++x;
    printf("local x in a is %d before exiting a\n", x);
}

void b(void)
{
    static int x = 50;

    printf("\nlocal static x is %d on entering b\n", x);
    ++x;
    printf("local static x is %d on exiting b\n", x);
}

void c(void)
{
    int x = 1;
    printf("\nglobal x is %d on entering c\n", x);
    x *= 10;
    printf("global x is %d on exiting c\n", x);
}


