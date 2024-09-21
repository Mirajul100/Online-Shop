#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include <conio.h>
#include <stdbool.h>

// Define constants for maximum lines and length
#define MAX_LINES 1000
#define MAX_LENGTH 100
#define max 50

char Cname[MAX_LENGTH];
char Email[MAX_LENGTH];

// Define a structure for a product in a section
typedef struct section
{
    char pname[20]; // product name
    int pprice;     // product price
} section;

// Define a structure for a linked list node
typedef struct node
{
    char dress[20];
    int price;
    struct node *next; // Pointer to the next node in the linked list
} node;

// Global variables for linked lists representing different sections
node *top1 = NULL;
int q[max], fornt = -1, rare = -1;

void presented();
void manager();
void male();
void male_display();
void female();
void female_display();
void children();
void children_display();
void loading();
void customer();
void shop();
void delete();
void pop_p();
void add_male();
void add_female();
void add_children();
void order_display();
void dequeue();

int main()
{

    presented(); // Display welcome information
    getch();
    system("cls"); // Clear the console screen
    shop();        // enter the shopping application
    system("cls");
}

void presented()
{
    // Display information about the authors
    printf("\n\n\t\t\t\tWELCOME TO ONLINE SHOPPING CENTER\n");
    printf("\t**************************************************************************\n");
    printf("\t**\t\t\t\tPRESENTED BY\t\t\t\t**\n");
    printf("\t**************************************************************************\n");
    printf("\t**\t NAME :- Mirajul Islam Anik\t\t\t\t\t**\n");
    printf("\t**\t ID :- 0242310005101125\t\t\t\t\t\t**\n");
    printf("\t**                                                                      **\n");
    printf("\t**\t NAME :- Rahul Roy\t\t\t\t\t\t**\n");
    printf("\t**\t ID :- 0242310005101724\t\t\t\t\t\t**\n");
    printf("\t**                                                                      **\n");
    printf("\t**\t NAME :- Samdani Ifty\t\t\t\t\t\t**\n");
    printf("\t**\t ID :- 0242310005101641\t\t\t\t\t\t**\n");
    printf("\t**                                                                      **\n");
    printf("\t**\t NAME :- Tasin Abdullah\t\t\t\t\t\t**\n");
    printf("\t**\t ID :- 0242310005101556\t\t\t\t\t\t**\n");
    printf("\t**                                                                      **\n");
    printf("\t**\t NAME :- Md. Siam\t\t\t\t\t\t**\n");
    printf("\t**\t ID :- 0242310005101441\t\t\t\t\t\t**\n");
    printf("\t**                                                                      **\n");
    printf("\t**\t NAME :- Pm Tasmin Hossain Togor\t\t\t\t**\n");
    printf("\t**\t ID :- 0242310005101974\t\t\t\t\t\t**\n");
    printf("\t**************************************************************************\n");
}

void shop()
{
    loading(); // Display loading animation
    printf("\n\n\n************************* WELCOME TO ISRAT ONLINE SHOP *************************\n");
    printf("\n\n#IF YOU ARE A MANAGER PRESS 1\n");
    printf("#IF YOU ARE A CUSTOMER PRESS 2\n");
    int number;
    char yes;
    while (1)
    {
        printf("\n\nENTER YOUR CHOICE : ");
        scanf("%d", &number);
        switch (number)
        {
        case 1:
            system("cls");
            loading(); // Display loading animation
            manager(); // Enter the manager interface
            break;
        case 2:
            system("cls");
            customer(); // Enter the customer's interface
            break;
        default:
            printf("WRONG NUMBER !\n");
            break;
        }
    }
}

void manager()
{
    // manager interface logic
    char name[20];
    char namebff[20];
    int pass;
    int pass1 = 12345;
    node *a;
go:
    fflush(stdin);
    printf("\nEnter your name : ");
    gets(name);
    strcpy(namebff, name);
    printf("Enter the password : ");
    scanf("%d", &pass);
    system("cls");
    if (pass1 == pass)
    {
        strupr(namebff);
        printf("\t\t\t************** WELCOME MD.%s **************\n\n\n", namebff);
        int num;
        char yes;
        while (1)
        {
        back:
            loading();
            printf("\n\nPRESS 1 TO CUSTOMIZE MALE SECTION\n");
            printf("PRESS 2 TO DISPLAY MALE SECTION\n");
            printf("PRESS 3 TO CUSTOMIZE FEMALE SECTION\n");
            printf("PRESS 4 TO DISPLAY FEMALE SECTION\n");
            printf("PRESS 5 TO CUSTOMIZE CHILDREN SECTION\n");
            printf("PRESS 6 TO DISPLAY CHILDREN SECTION\n");
            printf("PRESS 7 TO GO BACK FRONT PAGE\n");
            printf("PRESS 8 TO DELETE ALL FILE \n");
            printf("PRESS 9 TO SEE YOUR ORDER\n");
            printf("PRESS 10 TO DELETE YOUR ORDER\n");
            printf("PRESS 11 TO EXIT THE PROGRAM \n");
            printf("\n\nENTER YOUR CHOICE : ");
            scanf("%d", &num);
            system("cls");
            char undo;
            switch (num)
            {
            case 1:
                system("cls"); // Clear the console screen
                loading();     // Display loading animation
                printf("\nTO UNDO PRESS Z OR TO CONTINUE PRESS ANY KEY : ");
                scanf("%c", &undo);
                scanf("%c");
                if (undo == 'z' || undo == 'Z')
                {
                    system("cls");
                    goto back;
                }
                else
                {
                    male(); // Enter the male interface
                }
                break;
            case 2:
                loading();      // Display loading animation
                male_display(); // getch (); system ("cls");// Enter the male_display interface
                printf("\n\nTO GO BACK PRESS Y : ");
                scanf("%c", &yes);
                if (yes == 'y' || yes == 'Y')
                {
                    goto back;
                }
                getch();
                system("cls"); // Clear the console screen
                break;
            case 3:
                system("cls");
                loading();
                printf("\nTO UNDO PRESS Z OR TO CONTINUE PRESS ANY KEY : ");
                scanf("%c", &undo);
                scanf("%c");
                if (undo == 'z' || undo == 'Z')
                {
                    system("cls");
                    goto back;
                }
                else
                {
                    female(); // Enter the female interface
                }
                break;
            case 4:
                loading();
                female_display(); // getch (); system ("cls");// Enter the female_display interface
                printf("\n\nTO GO BACK PRESS Y : ");
                scanf("%c", &yes);
                if (yes == 'y' || yes == 'Y')
                {
                    goto back;
                }
                getch(); // hold scene
                system("cls");
                break;
            case 5:
                system("cls");
                loading();
                printf("\nTO UNDO PRESS Z OR TO CONTINUE PRESS ANY KEY : ");
                scanf("%c", &undo);
                scanf("%c");
                if (undo == 'z' || undo == 'Z')
                {
                    system("cls");
                    goto back;
                }
                else
                {
                    children(); // enter the children interface
                }
                break;
            case 6:
                loading();
                children_display(); // getch (); system ("cls"); // enter the children_display interface
                printf("\n\nTO GO BACK PRESS Y : ");
                scanf("%c", &yes);
                // Check if the user wants to go back
                if (yes == 'y' || yes == 'Y')
                {
                    goto back; // Go back to the 'back' label, possibly a label for returning to the previous menu
                }
                getch();
                system("cls");
                break;
            case 7:
                shop(); // enter the shop interface
                break;
            case 8:
                loading();
                delete (); // enter the delete interface
                break;
            case 9:
                loading();
                order_display(); // getch (); system ("cls"); // enter the add_display function
                printf("\n\nTO GO BACK PRESS Y : ");
                scanf("%c", &yes);
                if (yes == 'y' || yes == 'Y')
                {
                    goto back; // Go back to the 'back' label, possibly a label for returning to the previous menu
                }
                getch();
                system("cls");
                break;
            case 10:
                remove("ORDER.txt"); // delete order file
                printf("\n\n## DELETED SUCCESSFULLY ORDER SECTION ##");
                Sleep(2);
                system("cls");
                break;

            case 11:
                printf("***// THANKS FOR VISITING OUR ONLINE SHOP //***\n");
                printf("          ** WELCOME BACK AGAIN **\n\n");
                exit(0); // Exit the program
                break;
            default:
                printf("WRONG NUMBER !\n");
                break;
            }
        }
    }
    else
    {
        printf("WRONG PASSWORD !\n");
        loading();
        goto go;
    }
}

void customer()
{
    // customer interface logic
    char yes;
    int num;
    loading();
    fflush(stdin);
    printf("************************LOGIN**********************\n\n");
    printf("Enter your name : ");
    gets(Cname);
    printf("Enter your E-mail : ");
    gets(Email);
    system("cls");
    while (1)
    {
    back:
        loading();
        printf("\n\n\n************************* WELCOME TO ISRAT ONLINE SHOP *************************\n");
        printf("\n\n\nPRESS 1 TO MALE SECTION\n");
        printf("PRESS 2 TO FEMALE SECTION\n");
        printf("PRESS 3 TO CHILDREN SECTION\n");
        printf("PRESS 4 TO SEE YOUR ORDER\n");
        printf("PRESS 5 TO DELETE ORDER SECTION\n");
        printf("PRESS 6 TO GO BACK FRONT PAGE\n");
        printf("PRESS 7 TO EXIT THE PROGRAM\n");
        printf("\n\nENTER YOUR CHOICE : ");
        scanf("%d", &num);
        system("cls");
        switch (num)
        {
        case 1:
            loading();
            male_display(); // Enter the male_display interface
            printf("\n\nTO GO BACK PRESS Y : ");
            scanf("%c", &yes);
            if (yes == 'y' || yes == 'Y') // Check if the user wants to go back
            {
                goto back; // Go back to the 'back' label, possibly a label for returning to the previous menu
            }
            getch();
            system("cls");
            break;
        case 2:
            loading();
            female_display(); // Enter the female_display interface
            printf("\n\nTO BACK PRESS Y : ");
            scanf("%c", &yes);
            if (yes == 'y' || yes == 'Y')
            {
                goto back;
            }
            getch();
            system("cls");
            break;
        case 3:
            loading();
            children_display(); // Enter the children_display interface
            printf("\n\nTO GO BACK PRESS Y : ");
            scanf("%c", &yes);
            if (yes == 'y' || yes == 'Y')
            {
                goto back;
            }
            getch();
            system("cls");
            break;
        case 4:
            loading();
            order_display(); // Enter the order_display interface
            printf("\n\nTO GO BACK PRESS Y : ");
            scanf("%c", &yes);
            if (yes == 'y' || yes == 'Y')
            {
                goto back;
            }
            getch();
            system("cls");
            break;
        case 5:
            remove("ORDER.txt"); // delete order file
            printf("\n\n## DELETED SUCCESSFULLY ORDER SECTION ##");
            Sleep(2);
            system("cls");
            break;

        case 6:
            shop(); // enter the shop interface
            break;
        case 7:
            printf("***// THANKS FOR VISITING OUR ONLINE SHOP //***\n");
            printf("          ** WELCOME BACK AGAIN **\n\n");
            exit(0); // exit the program
            break;
        default:
            printf("WRONG NUMBER\n");
            break;
        }
    }
}

void male()
{
    // male interface logic
    FILE *fp = fopen("male.txt", "a+"); // create male file in append mode
    node *newnode = NULL;
    section m;
    int a = 1;
    char pop;
    int i = 0;
    // char pname[20];
    // int pprice;
    printf("\n---------------- MALE SECTION ----------------\n");
    while (a) // Loop to gather information about male products
    {
        newnode = (node *)malloc(sizeof(node)); // Allocate memory for a new node
        fflush(stdin);
        printf("\nEnter the product you need to update : "); // Gather product information from the user
        // Note: Using gets is generally discouraged due to security risks; consider using fgets instead
        gets(m.pname);
        // fgets (pname , 20 , stdin);
        printf("Enter the product price : ");
        scanf("%d", &m.pprice);
        strcpy(newnode->dress, m.pname); // Copy product name to the node
        newnode->price = m.pprice;       // Set product price in the node
        // Check if the user wants to delete this product
        printf("\nTO DELETE THIS PRODUCT PRESS Y OR ELSE PRESS ENTER : ");
        scanf("%c");
        scanf("%c", &pop);
        if (pop == 'y' || pop == 'Y')
        {
            pop_p(); // Call a function to delete the product (not provided in the snippet)
        }
        else
        {
            i++;
            // Write product information to the file
            fprintf(fp, "***  %d.%-20s%d Tk  ***\n", i, newnode->dress, newnode->price);
            // fprintf(fp, "---------------------------------------\n");
            newnode->next = top1; // Link the new node to the top of the list
            top1 = newnode;       // Set the new node as the top of the list
            printf("PRESS 1 TO ADD MORE OR 0 TO STOP : ");
            scanf("%d", &a);
        }
    }
    fclose(fp);
    system("cls");
}

void male_display()
{
    FILE *fp = fopen("male.txt", "r"); // Open the 'male.txt' file in read mode
    char bff[50];                      // Buffer to store each line from the file
    int num = 1;
    int a = 1;
    int select = 1, selection = 0;
    printf("\n------------- MALE SECTION ------------\n\n");
    printf("---------------------------------------\n");
    printf("#*#    PRODUCT             PRICE   #*#\n");
    printf("---------------------------------------\n");
    // Check if the file is successfully opened
    if (fp != NULL)
    {
        // Read each line from the file until the end
        while (fgets(bff, 50, fp) != NULL)
        {
            printf("%s", bff);
            printf("---------------------------------------\n");
        }
        // Prompt the user to add more or not
        printf("\nTO ADD PRESS 1 OR ELSE PRESS ANY KEY : ");
        scanf("%d", &selection);
        if (select == selection)
        {
            add_male();
        }
    }
    else
    {
        printf("FILE IS EMPTY !");
    }
    fclose(fp); // Close the file
}

void female()
{
    FILE *fp = fopen("female.txt", "a+"); // Open the 'female.txt' file in append mode
    node *newnode = NULL;
    int a = 1;
    int i = 0;
    char pop;
    section f;

    printf("\n---------------- FEMALE SECTION ----------------\n");

    while (a)
    {
        newnode = (node *)malloc(sizeof(node));
        fflush(stdin);
        printf("\nEnter the product you need to update : ");
        gets(f.pname); // Get product name from the user
        printf("Enter the product price : ");
        scanf("%d", &f.pprice); // Get product price from the user

        strcpy(newnode->dress, f.pname);
        newnode->price = f.pprice;

        printf("\nTO DELETE THIS PRODUCT PRESS Y OR ELSE PRESS ENTER : ");
        scanf("%c");
        scanf("%c", &pop);

        if (pop == 'y' || pop == 'Y')
        {
            pop_p(); // Call the function to remove the last product if needed
        }
        else
        {
            i++;
            fprintf(fp, "***  %d.%-20s%d Tk  ***\n", i, newnode->dress, newnode->price);
            newnode->next = top1;
            top1 = newnode;

            printf("PRESS 1 TO ADD MORE OR 0 TO STOP : ");
            scanf("%d", &a);
        }
    }

    fclose(fp);    // Close the file
    system("cls"); // Clear the console screen
}

void female_display()
{
    FILE *fp = fopen("female.txt", "r"); // Open the 'female.txt' file in read mode
    char bff[50];
    int select = 1, selection = 0;

    printf("\n------------ FEMALE SECTION -----------\n\n");
    printf("---------------------------------------\n");
    printf("#*#    PRODUCT             PRICE   #*#\n");
    printf("---------------------------------------\n");

    if (fp != NULL)
    {
        while (fgets(bff, 50, fp) != NULL)
        {
            printf("%s", bff);
            printf("---------------------------------------\n");
        }

        printf("\nTO ADD PRESS 1 OR ELSE PRESS ANY KEY : ");
        scanf("%d", &selection);

        if (select == selection)
        {
            add_female(); // Call the function to add a product to the female section
        }
    }
    else
    {
        printf("FILE IS EMPTY !");
    }

    fclose(fp); // Close the file
}

void children()
{
    FILE *fp = fopen("children.txt", "a+"); // Open the 'children.txt' file in append mode
    node *newnode = NULL;
    int a = 1;
    int i = 0;
    char pop;
    section c;

    printf("\n---------------- CHILDREN SECTION ----------------\n");
    while (a)
    {
        // Create a new node
        newnode = (node *)malloc(sizeof(node));

        // Get product details from the user
        fflush(stdin);
        printf("\nEnter the product you need to update : ");
        gets(c.pname);
        printf("Enter the product price : ");
        scanf("%d", &c.pprice);

        // Copy product details to the new node
        strcpy(newnode->dress, c.pname);
        newnode->price = c.pprice;

        // Check if the product should be deleted
        printf("\nTO DELETE THIS PRODUCT PRESS Y OR ELSE PRESS ENTER : ");
        scanf("%c");
        scanf("%c", &pop);
        if (pop == 'y' || pop == 'Y')
        {
            pop_p(); // Call the function to delete the product
        }
        else
        {
            // Increment counter and write product details to the file
            i++;
            fprintf(fp, "***  %d.%-20s%d Tk  ***\n", i, newnode->dress, newnode->price);
            newnode->next = top1;
            top1 = newnode;

            // Prompt user to add more products or stop
            printf("PRESS 1 TO ADD MORE OR 0 TO STOP : ");
            scanf("%d", &a);
        }
    }

    fclose(fp);    // Close the file
    system("cls"); // Clear the console screen
}

void children_display()
{
    FILE *fp = fopen("children.txt", "r");
    char bff[50];
    int select = 1, selection = 0;
    printf("\n----------- CHILDREN SECTION ----------\n\n");
    printf("---------------------------------------\n");
    printf("#*#    PRODUCT             PRICE   #*#\n");
    printf("---------------------------------------\n");
    // fp not equal to null than print this array value
    if (fp != NULL)
    {
        while (fgets(bff, 50, fp) != NULL)
        {
            printf("%s", bff);
            printf("---------------------------------------\n");
        }
        printf("\nTO ADD PRESS 1 OR ELSE PRESS ANY KEY : ");
        scanf("%d", &selection);
        // if select is equal to selection than call add function
        if (select == selection)
        {
            add_children();
        }
    }
    else
    {
        // file is equal to null than print empty
        printf("FILE IS EMPTY !");
    }
    fclose(fp);
}

void loading()
{
    int i;
    printf("\t\t\tLOADING...\n");
    for (i = 0; i <= 55; i++)
    {
        printf("%c", 254);
        Sleep(5);
    }
    printf("\n");
}

void delete()
{
    int num;
    while (1)
    {
        // Display menu for deletion options
        printf("\n\nPRESS 1 TO DELETE MALE SECTION\n");
        printf("PRESS 2 TO DELETE FEMALE SECTION\n");
        printf("PRESS 3 TO DELETE CHILDREN SECTION\n");
        printf("PRESS 4 TO EDIT SECTION\n");
        printf("PRESS 5 TO EXIT SHOP\n");
        printf("\n\nENTER YOUR CHOICE : ");
        scanf("%d", &num);
        system("cls"); // clear scene

        // Process user choice using a switch statement
        switch (num)
        {
        case 1:
            loading();          // Assuming loading() is a function for displaying some loading animation
            remove("male.txt"); // Delete the "male.txt" file
            printf("\n\n## DELETED SUCCESSFULLY MALE SECTION ##");
            break;
        case 2:
            loading();
            remove("female.txt"); // Delete the "female.txt" file
            printf("\n\n## DELETED SUCCESSFULLY FEMALE SECTION ##");
            break;
        case 3:
            loading();
            remove("children.txt"); // Delete the "children.txt" file
            printf("\n\n## DELETED SUCCESSFULLY CHILDREN SECTION ##");
            break;
        case 4:
            loading();
            manager(); // Assuming manager() is a function for editing sections
            break;
        case 5:
            exit(0); // Exit the program
            printf("***// THANKS FOR VISITING OUR ONLINE SHOP //***\n");
            printf("          ** WELCOME BACK AGAIN **\n\n");
            break;
        default:
            printf("WRONG NUMBER !\n"); // Displayed for an invalid menu choice
            break;
        }
    }
}

void pop_p()
{
    // if stack is null than stack is empty
    if (top1 == NULL)
    {
        printf("Stack is underflow\n");
    }
    else
    {
        node *dele = top1;
        top1 = top1->next;
        printf("\n\nDELETED SUCCESSFULLY");
        free(dele);
    }
}

void add_male()
{
    int p;
    int a;
    int dele = 1;
    int delet = 0;

    // Open the file for reading
    FILE *file = fopen("male.txt", "r");
    FILE *file1 = fopen("ORDER.txt", "a");

    // Check if the file opened successfully
    if (file == NULL)
    {
        perror("Error opening file");
    }

    // Array to store lines from the file
    char lines[MAX_LINES][MAX_LENGTH];

    // Counter for the number of lines read
    int lineCount = 0;

    // Read lines from the file and store them in the array
    while (fgets(lines[lineCount], MAX_LENGTH, file) != NULL)
    {
        // Remove the newline character if present
        lines[lineCount][strcspn(lines[lineCount], "\n")] = '\0';

        // Increment the line count
        lineCount++;

        // Check if the array is full
        if (lineCount == MAX_LINES)
        {
            printf("Array is full. Increase MAX_LINES if needed.\n");
            break;
        }
    }
    do
    {
        printf("\nENTER THE PRODUCT NUMBER : ");
        scanf("%d", &p);
        // Print the contents of the array
        for (int i = p - 1; i < p; i++)
        {
            printf("%s\n", lines[i]);
            if (rare == max - 1)
            {
                printf("Overflow\n");
            }
            else if (fornt == -1 && rare == -1)
            {
                fornt++;
                rare++;
                q[rare] = (int)lines[i];
            }
            else
            {
                rare++;
                q[rare] = (int)lines[i];
            }
            printf("PRESS 0 TO DELETE AND PRESS 1 TO CONTINUE : ");
            scanf("%d", &delet);
            if (dele != delet)
            {
                dequeue();
            }
            else
            {
                fprintf(file1, "%s\n", lines[i]);
            }
        }
        printf("\nto add more press 1 or 0 to stop : ");
        scanf("%d", &a);
    } while (a);
    fclose(file);
    fclose(file1);
}

void add_female()
{
    int p;
    int a;
    int dele = 1;
    int delet = 0;

    // Open the file for reading
    FILE *file = fopen("female.txt", "r");
    FILE *file1 = fopen("ORDER.txt", "a");

    // Check if the file opened successfully
    if (file == NULL)
    {
        perror("Error opening file");
    }

    // Array to store lines from the file
    char lines[MAX_LINES][MAX_LENGTH];

    // Counter for the number of lines read
    int lineCount = 0;

    // Read lines from the file and store them in the array
    while (fgets(lines[lineCount], MAX_LENGTH, file) != NULL)
    {
        // Remove the newline character if present
        lines[lineCount][strcspn(lines[lineCount], "\n")] = '\0';

        // Increment the line count
        lineCount++;

        // Check if the array is full
        if (lineCount == MAX_LINES)
        {
            printf("Array is full. Increase MAX_LINES if needed.\n");
            break;
        }
    }
    do
    {
        printf("\nENTER THE PRODUCT NUMBER : ");
        scanf("%d", &p);
        // Print the contents of the array
        for (int i = p - 1; i < p; i++)
        {
            printf("%s\n", lines[i]);
            if (rare == max - 1)
            {
                printf("Overflow\n");
            }
            else if (fornt == -1 && rare == -1)
            {
                fornt++;
                rare++;
                q[rare] = (int)lines[i];
            }
            else
            {
                rare++;
                q[rare] = (int)lines[i];
            }
            printf("PRESS 0 TO DELETE AND PRESS 1 TO CONTINUE : ");
            scanf("%d", &delet);
            if (dele != delet)
            {
                dequeue();
            }
            else
            {
                fprintf(file1, "%s\n", lines[i]);
            }
        }
        printf("\nto add more press 1 or 0 to stop : ");
        scanf("%d", &a);
    } while (a);
    fclose(file);
    fclose(file1);
}
void add_children()
{
    int p;
    int a;
    int dele = 1;
    int delet = 0;

    // Open the file for reading
    FILE *file = fopen("children.txt", "r");
    FILE *file1 = fopen("ORDER.txt", "a");

    // Check if the file opened successfully
    if (file == NULL)
    {
        perror("Error opening file");
    }

    // Array to store lines from the file
    char lines[MAX_LINES][MAX_LENGTH];

    // Counter for the number of lines read
    int lineCount = 0;

    // Read lines from the file and store them in the array
    while (fgets(lines[lineCount], MAX_LENGTH, file) != NULL)
    {
        // Remove the newline character if present
        lines[lineCount][strcspn(lines[lineCount], "\n")] = '\0';

        // Increment the line count
        lineCount++;

        // Check if the array is full
        if (lineCount == MAX_LINES)
        {
            printf("Array is full. Increase MAX_LINES if needed.\n");
            break;
        }
    }
    do
    {
        printf("\nENTER THE PRODUCT NUMBER : ");
        scanf("%d", &p);
        // Print the contents of the array
        for (int i = p - 1; i < p; i++)
        {
            printf("%s\n", lines[i]);
            if (rare == max - 1)
            {
                printf("Overflow\n");
            }
            else if (fornt == -1 && rare == -1)
            {
                fornt++;
                rare++;
                q[rare] = (int)lines[i];
            }
            else
            {
                rare++;
                q[rare] = (int)lines[i];
            }
            printf("PRESS 0 TO DELETE AND PRESS 1 TO CONTINUE : ");
            scanf("%d", &delet);
            if (dele != delet)
            {
                dequeue();
            }
            else
            {
                fprintf(file1, "%s\n", lines[i]); // store the string in array and print this in a file
            }
        }
        printf("\nto add more press 1 or 0 to stop : ");
        scanf("%d", &a);
    } while (a);
    fclose(file);
    fclose(file1);
}

void order_display()
{
    FILE *fp = fopen("ORDER.txt", "r");
    char bff[50];
    int total_price = 0; // Variable to store the total price
    int product_count = 0;
    int serial_number = 0;

    printf("\n------------- ORDER SECTION ------------\n\n");
    printf("---------------------------------------\n");
    printf("#*#  PRODUCT       PRICE  #*#\n");
    printf("---------------------------------------\n");

    if (fp != NULL)
    {
        while (fgets(bff, 50, fp) != NULL)
        {
            // Extract product name, price, and serial number from the line
            char product_name[20];
            int price;
            char tk[5];

            sscanf(bff, "*** %d.%[^0-9] %d %s Tk ***", &product_count, product_name, &price, tk);

            // Increment the serial number before displaying the product
            serial_number++;

            // Use the updated serial number to display the product
            printf("*** %d.%-20s%4d %-3s***\n", serial_number, product_name, price, tk);
            printf("---------------------------------------\n");

            // Add the price to the total
            total_price += price;
        }

        printf("\nTotal Price: %d Tk\n", total_price);
    }
    else
    {
        printf("FILE IS EMPTY !");
    }

    fclose(fp);
}

void dequeue()
{
    if (fornt == -1)
    {
        printf("Empty\n");
    }
    else
    {
        fornt++;
        printf("DELETED SUCCESSFULLY\n");
        if (fornt > rare)
        {
            fornt = rare = -1;
        }
    }
}
