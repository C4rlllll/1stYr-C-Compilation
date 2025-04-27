#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{
    int menu;

    do
    {
        printf("----MAIN-MENU-----\n");
        printf("[1] - Prelim Period\n");
        printf("[2] - Midterm Period\n");
        printf("[3] - Final Period\n");
        printf("[4] - Exit Program\n");
        printf("Enter No. you want to explore: ");
        scanf("%d", &menu);

        switch (menu)
        {
        case 1:
        {
            int pMenu;
            int integer1, integer2, sum, sum1, num1, num2, bNumber, number;
            int counter, grade, total, average, data, value, input1, input2;
            float aver, charge;
            char name;

            do
            {
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
                printf("Enter No. you want to explore: ");
                scanf("%d", &pMenu);

                switch (pMenu)
                {
                case 1:
                    printf("Hello World!\n");
                    system("pause");
                    system("cls");
                    break;

                case 2:
                    printf("Enter first integer: ");
                    scanf("%d", &integer1);
                    printf("Enter second integer: ");
                    scanf("%d", &integer2);
                    sum = integer1 + integer2;
                    printf("Sum is %d\n", sum);
                    system("pause");
                    system("cls");
                    break;

                case 3:
                    printf("Enter two integers, and I will tell you\n");
                    printf("the relationships they satisfy: ");
                    scanf("%d%d", &num1, &num2);

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
                    system("pause");
                    system("cls");
                    break;

                case 4:
                    total = 0;
                    counter = 1;

                    while (counter <= 10)
                    {
                        printf("Enter grade: ");
                        scanf("%d", &grade);
                        total = total + grade;
                        counter = counter + 1;
                    }

                    average = total / 10;
                    printf("Class average is %d\n", average);
                    system("pause");
                    system("cls");
                    break;

                case 5:
                    total = 0;
                    counter = 1;
                    printf("How many grades do you want to process? ");
                    scanf("%d", &data);

                    while (counter <= data)
                    {
                        printf("Enter grade: ");
                        scanf("%d", &grade);
                        total = total + grade;
                        counter = counter + 1;
                    }

                    average = total / data;
                    printf("Class average is %d\n", average);
                    system("pause");
                    system("cls");
                    break;

                case 6:
                    total = 0;
                    counter = 0;

                    printf("Enter grade, -1 to end: ");
                    scanf("%d", &grade);

                    while (grade != -1)
                    {
                        total = total + grade;
                        counter = counter + 1;
                        printf("Enter grade, -1 to end: ");
                        scanf("%d", &grade);
                    }

                    if (counter != 0)
                    {
                        aver = (float)total / counter;
                        printf("Class average is %.2f\n", aver);
                    }
                    else
                        printf("No grades were entered\n");

                    system("pause");
                    system("cls");
                    break;

                case 7: // Improve Version
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

                    system("pause");
                    system("cls");
                    break;

                case 8:
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
                    system("pause");
                    system("cls");
                    break;

                case 9:
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
                    system("pause");
                    system("cls");
                    break;

                case 10:
                    printf("Enter your given value: ");
                    scanf("%d", &value);

                    if (value >= 1)
                    {
                        printf("TRUE!\n");
                    }
                    else
                        printf("FALSE!\n");
                    system("pause");
                    system("cls");
                    break;

                case 11:
                    printf("Enter your first integer here: ");
                    scanf("%d", &input1);

                    printf("Enter your second integer here: ");
                    scanf("%d", &input2);

                    if (input1 == input2)
                        printf("EQUIVALENT!\n");
                    else
                        printf("NOT EQUIVALENT!\n");
                    system("pause");
                    system("cls");
                    break;

                case 12:
                    printf("Thank you for checking my prelims project!\n");
                    printf("You will be returning to the main menu.\n");
                    system("pause");
                    system("cls");
                    break;
                default:
                    printf("Wrong number entered.\n");
                }

            } while (pMenu != 12);
            break;
        }
        case 2:
        {
            int mMenu;

            do 
            {
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

                printf ("Enter The Number You Want To Explore: ");
                scanf ("%d", &mMenu);

                switch (mMenu)
                {

                    case 1:
                        {
                            int n;

                            printf("N\t10*N\t100*N\t1000*N\n");
                            for (n = 1; n <= 10; n++) 
                            {
                                printf("%d\t%d\t%d\t%d\n", n, 10 * n, 100 * n, 1000 * n);
                            }

                            system ("pause");
                            system ("cls");
                            break;
                        }

                    case 2:
                        {
                            int n = 1, TableSize;

                            printf("Enter Table Size: ");
                            scanf("%d", &TableSize);

                            printf("N\t10*N\t100*N\t1000*N\n");

                            do
                            {
                                printf("%d\t%d\t%d\t%d\n", n, 10 * n, 100 * n, 1000 * n);
                                n++;
                            } while (n <= TableSize);

                            system("pause");
                            system("cls");
                            break;
                        }

                    case 3:
                        {
                            int n = 1;

                            printf("============================== MULTIPLICATION TABLE ==============================\n");
                            printf("0\t1\t2\t3\t4\t5\t6\t7\t8\t9\t10\n");
                            printf("----------------------------------------------------------------------------------\n");
                            do
                            {
                                printf("%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\n", n, n * 1, n * 2, n * 3, n * 4, n * 5, n * 6, n * 7, n * 8, n * 9, n * 10);
                                printf("----------------------------------------------------------------------------------\n");
                                n++;
                            } while (n <= 10);

                            system("pause");
                            system("cls");
                            break;
                        }
                    
                    case 4: //Version 1
                        {
                            int TransNo;
                            double AccBal = 5000;
                            double DepAmount;
                            double WithAmount;
                            do
                            {
                                printf("\n Welcome To LPU BANK!\n");
                                printf("[1] Balance Inquiry\n");
                                printf("[2] Deposit Transaction\n");
                                printf("[3] Withdrawal Transaction\n");
                                printf("[4] Exit Program\n");
                                printf("Enter Transaction Number: ");
                                scanf("%d", &TransNo);

                                switch (TransNo)
                                {
                                case 1:
                                    printf("The available balance is Php%.2lf", AccBal);
                                    break;
                                case 2:
                                    printf("Enter the amount you want to deposit: ");
                                    scanf("%lf", &DepAmount);
                                    if (DepAmount <= 4000)
                                    {
                                        AccBal = DepAmount + AccBal;
                                        printf("Deposit Successfully: Your new balance is Php%.2lf\n", AccBal);
                                    }
                                    else if (DepAmount >= 4001)
                                    {
                                        printf("Error Transaction: Deposit Amount must be lower than Php4000!\n");
                                    }
                                    break;
                                case 3:
                                    printf("Enter the amount you want to withdraw: ");
                                    scanf("%lf", &WithAmount);
                                    if (WithAmount <= AccBal)
                                    {
                                        AccBal = AccBal - WithAmount;
                                        printf("Wtihdraw Successfully: Your remaining balance is Php%.2lf\n", AccBal);
                                    }
                                    else
                                        printf("Insufficient Balance.\nYour balance is Php%.2lf. Please try again!\n", AccBal);
                                    break;
                                case 4:
                                    printf("Thank you for transacting with us!");
                                    break;
                                default:
                                    printf("Error: Invalid Transaction Number!");
                                }
                            } while (TransNo != 4);

                            system("pause");
                            system("cls");
                            break;
                        }
                    
                    case 5: //Version 2
                        {
                            int TransNo;
                            int WithCount = 0, DepCount = 0;
                            double AccBal = 5000;
                            double DepAmount;
                            double WithAmount;
                            double WithTotal = 0.0, DepTotal = 0.0;

                            do
                            {
                                printf("\n WELCOME TO LPU BANK!\n");
                                printf("[1] Balance Inquiry\n");
                                printf("[2] Deposit Transaction\n");
                                printf("[3] Withdrawal Transaction\n");
                                printf("[4] Report Program\n");
                                printf("[5] Exit Program\n");
                                printf("Enter Transaction Number: ");
                                scanf("%d", &TransNo);

                                switch (TransNo)
                                {
                                case 1:
                                    printf("---------------BALANCE INQUIRY---------------\n");
                                    printf("The available balance is Php%.2lf\n", AccBal);
                                    printf("---------------------------------------------\n");
                                    break;
                                case 2:
                                    printf("Enter the amount you want to deposit: Php");
                                    scanf("%lf", &DepAmount);
                                    if (DepAmount <= 4000 && DepAmount > 0)
                                    {
                                        AccBal += DepAmount;
                                        DepTotal += DepAmount;
                                        printf("--------------------RECEIPT-------------------------\n");
                                        printf("Deposit Successfully!\nYour New Balance Is Php%.2lf\n", AccBal);
                                        printf("----------------------------------------------------\n");
                                        DepCount++;
                                    }
                                    else if (DepAmount <= 0)
                                    {
                                        printf("Please deposit the exact amount!");
                                    }
                                    else
                                        printf("The maximum amount of deposit is Php4000 only!\nPlease try again.");
                                    break;
                                case 3:
                                    printf("Enter the amount you want to withdraw: Php");
                                    scanf("%lf", &WithAmount);
                                    if (WithAmount < AccBal && WithAmount <= 4000)
                                    {
                                        AccBal -= WithAmount;
                                        WithTotal += WithAmount;
                                        printf("--------------------RECEIPT-------------------------\n");
                                        printf("Wtihdraw Successfully!\nYour New Balance Is Php%.2lf\n", AccBal);
                                        printf("----------------------------------------------------\n");
                                        WithCount++;
                                    }
                                    else if (WithAmount > AccBal)
                                    {
                                        printf("Insufficient balance! Your Available Balance Is Php%.2lf\n", AccBal);
                                    }
                                    else
                                        printf("Maximum amount of withdrawal is Php4000. Please try again.");
                                    break;
                                case 4:
                                    printf("---------------TRANSACTION DETAILS---------------\n");
                                    printf("The No. Of Deposit Transaction is: %d\n", DepCount);
                                    printf("The No. Of Withdrawal Transaction is: %d\n", WithCount);
                                    printf("Total Deposit Amount: Php%.2lf\n", DepTotal);
                                    printf("Total Withdrawal Amount: Php%.2lf\n", WithTotal);
                                    printf("Your Current Balance Is Php%.2lf\n", AccBal);
                                    printf("--------------------------------------------------\n");
                                    break;
                                case 5:
                                    printf("--------------------------------------------------\n");
                                    printf("Thank you for banking with us. Goodbye!\n");
                                    printf("--------------------------------------------------\n");
                                    break;
                                default:
                                    printf("Error: Invalid Transaction Number!");
                                }
                            } while (TransNo != 5);

                            system("pause");
                            system("cls");
                            break;
                        }
                    
                    case 6:
                        {
                            char ident;
                            int n = 0;
                            int Ncount = 0, BigLcount = 0, SmLcount = 0, SCcount = 0;

                            printf("Enter any 10 character: ");

                            while (n < 10)
                            {
                                scanf("%c", &ident);

                                if (ident >= '0' && ident <= '9')
                                {
                                    Ncount++;
                                }
                                else if (ident >= 'a' && ident <= 'z')
                                {
                                    SmLcount++;
                                }
                                else if (ident >= 'A' && ident <= 'Z')
                                {
                                    BigLcount++;
                                }
                                else
                                    SCcount++;

                                n++;
                            }

                            printf("==========I=D=E=N=T=I=F=I=E=R==========\n");
                            printf("The number(s) you entered: %d\n", Ncount);
                            printf("The letter(s) you entered: %d\n", SmLcount + BigLcount);
                            printf("The special character(s) you entered: %d\n", SCcount);

                            system("pause");
                            system("cls");
                            break;
                        }

                    case 7:
                        {
                            int c[12]; // array declaration
                            int sum;

                            // brute force
                            c[0] = 0;
                            c[1] = 6;
                            c[2] = 0;
                            c[3] = 72;
                            c[4] = 1543;
                            c[5] = -89;
                            c[6] = 0;
                            c[7] = 62;
                            c[8] = -3;
                            c[9] = 1;
                            c[10] = 6453;
                            c[11] = 78;

                            sum = c[0] + c[1] + c[2] + c[3] + c[4] + c[5] + c[6] + c[7] + c[8] + c[9] + c[10] + c[11];

                            printf("The sum of the elements of the array is %d\n", sum);

                            system("pause");
                            system("cls");
                            break;
                        }

                    case 8:
                        {
                            int c[12] = {-45, 6, 0, 72, 1543, -89, 0, 62, -3, 1, 6453, 78};
                            int sum, i;
                            sum = 0;

                            for (i = 0; i < 12; i++)
                            {
                                sum = sum + c[i];
                            }
                            printf("The sum of the element of the array is %d\n", sum);

                            system("pause");
                            system("cls");
                            break;
                        }
                        
                    case 9:
                        {
                            int a[5] = {23, 69, 45, 78, 90};
                            int b[5] = {79, 40, 80, 88, 99};
                            int c[5];

                            c[0] = a[0] + b[0];
                            c[1] = a[1] + b[1];
                            c[2] = a[2] + b[2];
                            c[3] = a[3] + b[3];
                            c[4] = a[4] + b[4];

                            // longMethod
                            printf("A\tB\tC\n");
                            printf("%d\t%d\t%d\n", a[0], b[0], c[0]);
                            printf("%d\t%d\t%d\n", a[1], b[1], c[1]);
                            printf("%d\t%d\t%d\n", a[2], b[2], c[2]);
                            printf("%d\t%d\t%d\n", a[3], b[3], c[3]);
                            printf("%d\t%d\t%d\n", a[4], b[4], c[4]);

                            system("pause");
                            system("cls");
                            break;
                        }

                    case 10:
                        {
                            int a[5] = {23, 69, 45, 78, 90};
                            int b[5] = {79, 40, 80, 88, 99};
                            int c[5];
                            int j;

                            printf("A\tB\tC\n");
                            for (j = 0; j < 5; j++)
                            {
                                c[j] = a[j] + b[j];
                                printf("%d\t%d\t%d\n", a[j], b[j], c[j]);
                            }

                            system("pause");
                            system("cls");
                            break;
                        }

                    case 11:
                        {
                            int billy[3][4] = {{10, 20, 30, 40}, {50, 60, 70, 80}, {90, 100, 110, 120}};

                            // Bruteforce//

                            printf("%d\t%d\t%d\t%d\n", billy[0][0], billy[0][1], billy[0][2], billy[0][3]);
                            printf("%d\t%d\t%d\t%d\n", billy[1][0], billy[1][1], billy[1][2], billy[1][3]);
                            printf("%d\t%d\t%d\t%d\n", billy[2][0], billy[2][1], billy[2][2], billy[2][3]);
                            
                            system("pause");
                            system("cls");
                            break;
                        }

                    case 12:
                        {
                            int day;

                            printf("Enter day in numeric form [1-7]: ");
                            scanf("%d", &day);

                            switch (day)
                                {
                                case 1:
                                    printf("Monday\n");
                                    printf("Monday is a weekday.\n");
                                    break;

                                case 2:
                                    printf("Tuesday\n");
                                    printf("Tuesday is a weekday.\n");
                                    break;

                                case 3:
                                    printf("Wednesday\n");
                                    printf("Wednesday is a weekday.\n");
                                    break;

                                case 4:
                                    printf("Thursday\n");
                                    printf("Thursday is a weekday.\n");
                                    break;

                                case 5:
                                    printf("Friday\n");
                                    printf("Friday is a weekday.\n");
                                    break;

                                case 6:
                                    printf("Saturday\n");
                                    printf("Saturday is a weekend.\n");
                                    break;

                                case 7:
                                    printf("Sunday\n");
                                    printf("Sunday is a weekend.\n");
                                    break;

                                default:
                                    printf("Error invalid day!\n");
                                    break;
                                }
                            system("pause");
                            system("cls");
                            break;
                        }
                    
                    case 13: 
                        {
                            int n;
                            int remainder;

                            printf("Enter number: ");
                            scanf("%d", &n);
                            remainder = n % 2;

                            switch (n % 2)
                            {
                            case 0:
                                printf("%d is an even number\n", n);
                                break;
                            case 1:
                                printf("%d is an odd number\n", n);
                        
                                break;
                            }
                            system("pause");
                            system("cls");
                            break;
                        }

                    case 14:
                        {
                            int n;

                            n = 10;
                            do {
                                printf ("%d\n", n);
                                n++;

                            }while (n<=50);

                            system("pause");
                            system("cls");
                            break;
                        }

                    case 15:
                        {
                            int StartN, EndingN;

                            // Input statements
                            printf("Enter starting number: ");
                            scanf("%d", &StartN);

                            printf("Enter ending number: ");
                            scanf("%d", &EndingN);

                            do
                            {
                                printf("%d\n", StartN);
                                StartN = StartN + 1;
                            } while (StartN <= EndingN);

                            system("pause");
                            system("cls");
                            break;
                        }

                    case 16:
                        {
                            int start, end, step;
                            int n;

                            printf("Input start integer: ");
                            scanf("%d", &start);
                            printf("Input end integer: ");
                            scanf("%d", &end);
                            printf("Input step integer: ");
                            scanf("%d", &step);

                            for (n = start; n <= end; n += step)
                            {
                                printf("%d\n", n);
                            }

                            system("pause");
                            system("cls");
                            break;
                        }

                        case 17:
                    {
                        printf("\nThank You For Visiting My Finals Project!\n");
                        system("pause");
                        system("cls");
                        break;
                        }

                        default:
                        
                            printf("Error Input! Please Try Again.\n");
                        
                     }


            }while (mMenu != 17);
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
                        int i;
                        unsigned seed;

                        printf("Enter Seed: ");
                        scanf("%u", &seed);
                        srand(seed);

                        for (i = 1; i <= 10; i++)
                        {
                            printf("%10d", 1 + (rand() % 6));

                            if (i % 5 == 0)
                                printf("\n");
                        }
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
                        char bingo(int n);
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
                                printf("%c\n", bingo(n));
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
                        double minimum (double a, double b, double c);
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
                    printf ("Error Input! Please Try Again.\n");
                }
            } while (fMenu != 18);
            break;
        }

    case 4:
        {
            printf ("Thank For Exploring Fundamentals of Programming Activities!\n");
            system("pause");
            system("cls");
            break;
        }
    default:
        printf("Error Input! Please Try Again.\n");

        }

        

    } while (menu != 4);

    return 0;
}

//Finals
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

char bingo(int n)
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