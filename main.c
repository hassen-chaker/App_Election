#if defined(UNICODE) && !defined(_UNICODE)
    #define _UNICODE
#elif defined(_UNICODE) && !defined(UNICODE)
    #define UNICODE
#endif

#include <tchar.h>
#include <myconio.h>
#include <stdio.h>
#include <windows.h>
#include "tp1.h"
#include "tp2.h"
#include "tp3.h"


/*  Declare Windows procedure  */
LRESULT CALLBACK WindowProcedure (HWND, UINT, WPARAM, LPARAM);
void addmenus(HWND);
void CreateBtt(HWND hwnd) ;

HWND hname ,hage,hout,hogo,Add,Finnish;
 HDC hdc;
HMENU hmenu ;

HBITMAP hlogoImage , hgenerateImage;
int intro=1 ;
char ch[30] ;
long p ;
/*  Make the class name into a global variable  */
TCHAR szClassName[ ] = _T("my project");

int WINAPI WinMain (HINSTANCE hThisInstance,
                     HINSTANCE hPrevInstance,
                     LPSTR lpszArgument,
                     int nCmdShow)
{
    HWND hwnd;               /* This is the handle for our window */
    MSG messages;            /* Here messages to the application are saved */
    WNDCLASSEX wincl;        /* Data structure for the windowclass */

    /* The Window structure */
    wincl.hInstance = hThisInstance;
    wincl.lpszClassName = szClassName;
    wincl.lpfnWndProc = WindowProcedure;      /* This function is called by windows */
    wincl.style = CS_DBLCLKS;                 /* Catch double-clicks */
    wincl.cbSize = sizeof (WNDCLASSEX);

    /* Use default icon and mouse-pointer */
    wincl.hIcon = LoadIcon (NULL, IDI_APPLICATION);
    wincl.hIconSm = LoadIcon (NULL, IDI_APPLICATION);
    wincl.hCursor = LoadCursor (NULL, IDC_ARROW);
    wincl.lpszMenuName = NULL;                 /* No menu */
    wincl.cbClsExtra = 0;                      /* No extra bytes after the window class */
    wincl.cbWndExtra = 0;                      /* structure or the window instance */
    /* Use Windows's default colour as the background of the window */
    wincl.hbrBackground = (HBRUSH) COLOR_BACKGROUND+7;


    /* Register the window class, and if it fails quit the program */
    if (!RegisterClassEx (&wincl))
        return 0;

    /* The class is registered, let's create the program*/
    hwnd = CreateWindowEx (
           0,                   /* Extended possibilites for variation */
           szClassName,         /* Classname */
           _T("my project"),       /* Title Text */
           WS_OVERLAPPEDWINDOW, /* default window */
           CW_USEDEFAULT,       /* Windows decides the position */
           CW_USEDEFAULT,       /* where the window ends up on the screen */
           1250,                 /* The programs width */
           768,                 /* and height in pixels */
           HWND_DESKTOP,        /* The window is a child-window to desktop */
           NULL,                /* No menu */
           hThisInstance,       /* Program Instance handler */
           NULL                 /* No Window Creation data */
           );

    /* Make the window visible on the screen */
    ShowWindow (hwnd, nCmdShow);

    /* Run the message loop. It will run until GetMessage() returns 0 */
    while (GetMessage (&messages, NULL, 0, 0))
    {
        /* Translate virtual-key messages into character messages */
        TranslateMessage(&messages);
        /* Send message to WindowProcedure */
        DispatchMessage(&messages);
    }

    /* The program return-value is 0 - The value that PostQuitMessage() gave */
    return messages.wParam;
}


/*  This function is called by the Windows function DispatchMessage()  */

LRESULT CALLBACK WindowProcedure (HWND hwnd, UINT message, WPARAM wParam, LPARAM lParam)
{static HBITMAP  hBmp;


   /* if(intro)
    {
        system("start test.exe") ;
        intro=0;
    }*/

    switch (message)                  /* handle the messages */
    {

        case WM_COMMAND:
        switch(wParam)
        {
        //TP1
        case 1: //Ex1
                system("color F9");
                ShowWindow(hwnd,SW_HIDE);
                gotoxy(25,10);
                EX1TP1();
                system("pause");
                ShowWindow(hwnd,SW_NORMAL);
                system("cls");
                break;
        case 2: //Ex2
                system("color F9");
                ShowWindow(hwnd,SW_HIDE);
                gotoxy(25,10);
                EX2TP1();
                system("pause");
                ShowWindow(hwnd,SW_NORMAL);
                system("cls");
                break;
        case 3: //Ex3
                system("color F9");
                ShowWindow(hwnd,SW_HIDE);
                gotoxy(25,10);
                EX3TP1();
                system("pause");
                ShowWindow(hwnd,SW_NORMAL);
                system("cls");
                break;
        case 4: //Ex4Q1
                system("color F9");
                ShowWindow(hwnd,SW_HIDE);
                gotoxy(25,10);
                EX4TP1Q1();
                system("pause");
                ShowWindow(hwnd,SW_NORMAL);
                system("cls");
                break;
        case 5: //Ex4Q2
                system("color F9");
                ShowWindow(hwnd,SW_HIDE);
                gotoxy(25,10);
                EX4TP1Q2();
                system("pause");
                ShowWindow(hwnd,SW_NORMAL);
                system("cls");
                break;
        case 6: //Ex4Q3
                system("color F9");
                ShowWindow(hwnd,SW_HIDE);
                gotoxy(25,10);
                EX4TP1Q3();
                system("pause");
                ShowWindow(hwnd,SW_NORMAL);
                system("cls");
                break;
        case 7: //Ex4Q4
                system("color F9");
                ShowWindow(hwnd,SW_HIDE);
                gotoxy(25,10);
                EX4TP1Q4();
                system("pause");
                ShowWindow(hwnd,SW_NORMAL);
                system("cls");
                break;
        case 8: //Ex5
                system("color F9");
                ShowWindow(hwnd,SW_HIDE);
                gotoxy(25,10);
                EX5TP1();
                system("pause");
                ShowWindow(hwnd,SW_NORMAL);
                system("cls");
                break;
        case 9: //Ex6
                system("color F9");
                ShowWindow(hwnd,SW_HIDE);
                gotoxy(25,10);
                EX6TP1();
                system("pause");
                ShowWindow(hwnd,SW_NORMAL);
                system("cls");
                break;
        case 11: //Ex7
                system("color F9");
                ShowWindow(hwnd,SW_HIDE);
                gotoxy(25,10);
                EX7TP1();
                system("pause");
                ShowWindow(hwnd,SW_NORMAL);
                system("cls");
                break;
        //TP2
        case 20: //Ex1 While
                system("color F9");
                ShowWindow(hwnd,SW_HIDE);
                gotoxy(25,10);
                EX1TP2While();
                system("pause");
                ShowWindow(hwnd,SW_NORMAL);
                system("cls");
                break;
        case 31: //Ex1 For
                system("color F9");
                ShowWindow(hwnd,SW_HIDE);
                gotoxy(25,10);
                EX1TP2For();
                system("pause");
                ShowWindow(hwnd,SW_NORMAL);
                system("cls");
                break;
        case 32: //Ex1 Do..While
                system("color F9");
                ShowWindow(hwnd,SW_HIDE);
                gotoxy(25,10);
                EX1TP2DoWhile();
                system("pause");
                ShowWindow(hwnd,SW_NORMAL);
                system("cls");
                break;
        case 21: //Ex2
                system("color F9");
                ShowWindow(hwnd,SW_HIDE);
                gotoxy(25,10);
                EX2TP2();
                system("pause");
                ShowWindow(hwnd,SW_NORMAL);
                system("cls");
                break;
        case 22: //Ex3
                system("color F9");
                ShowWindow(hwnd,SW_HIDE);
                gotoxy(25,10);
                EX3TP2();
                system("pause");
                ShowWindow(hwnd,SW_NORMAL);
                system("cls");
                break;
        case 23:  //Ex4
                system("color F9");
                ShowWindow(hwnd,SW_HIDE);
                gotoxy(25,10);
                EX4TP2();
                system("pause");
                ShowWindow(hwnd,SW_NORMAL);
                system("cls");
                break;
        case 24:  //Ex5
                system("color F9");
                ShowWindow(hwnd,SW_HIDE);
                gotoxy(25,10);
                EX5TP2();
                system("pause");
                ShowWindow(hwnd,SW_NORMAL);
                system("cls");
                break;
        case 25:  //Ex6
                system("color F9");
                ShowWindow(hwnd,SW_HIDE);
                gotoxy(25,10);
                EX6TP2();
                system("pause");
                ShowWindow(hwnd,SW_NORMAL);
                system("cls");
                break;
        case 26:  //Ex7
                system("color F9");
                ShowWindow(hwnd,SW_HIDE);
                gotoxy(25,10);
                EX7TP2();
                system("pause");
                ShowWindow(hwnd,SW_NORMAL);
                system("cls");
                break;
        case 27:  //Ex8Q1
                system("color F9");
                ShowWindow(hwnd,SW_HIDE);
                gotoxy(25,10);
                EX8TP2Q1();
                system("pause");
                ShowWindow(hwnd,SW_NORMAL);
                system("cls");
                break;
        case 28:  //Ex8Q2
                system("color F9");
                ShowWindow(hwnd,SW_HIDE);
                gotoxy(25,10);
                EX8TP2Q2();
                system("pause");
                ShowWindow(hwnd,SW_NORMAL);
                system("cls");
                break;
        case 29:  //Ex8Q3
                system("color F9");
                ShowWindow(hwnd,SW_HIDE);
                gotoxy(25,10);
                EX8TP2Q3();
                system("pause");
                ShowWindow(hwnd,SW_NORMAL);
                system("cls");
                break;
        case 30:  //Ex9
                system("color F9");
                ShowWindow(hwnd,SW_HIDE);
                gotoxy(25,10);
                EX9TP2();
                system("pause");
                ShowWindow(hwnd,SW_NORMAL);
                system("cls");
                break;
        //TP3
        case 40: //Ex1
                system("color F9");
                ShowWindow(hwnd,SW_HIDE);
                gotoxy(25,10);
                EX1TP3();
                system("pause");
                ShowWindow(hwnd,SW_NORMAL);
                system("cls");
                break;
        case 41: //Ex2
                system("color F9");
                ShowWindow(hwnd,SW_HIDE);
                gotoxy(25,10);
                EX2TP3();
                system("pause");
                ShowWindow(hwnd,SW_NORMAL);
                system("cls");
                break;
        case 42: //Ex3
                system("color F9");
                ShowWindow(hwnd,SW_HIDE);
                gotoxy(25,10);
                EX3TP3();
                system("pause");
                ShowWindow(hwnd,SW_NORMAL);
                system("cls");
                break;
        case 43: //Ex4
                system("color F9");
                ShowWindow(hwnd,SW_HIDE);
                gotoxy(25,10);
                EX4TP3();
                system("pause");
                ShowWindow(hwnd,SW_NORMAL);
                system("cls");
                break;
        case 44: //Ex5
                system("color F9");
                ShowWindow(hwnd,SW_HIDE);
                gotoxy(25,10);
                printf("    BONJOUR 3   \n");
                system("pause");
                ShowWindow(hwnd,SW_NORMAL);
                system("cls");
                break;
        case 45: //Ex6
                system("color F9");
                ShowWindow(hwnd,SW_HIDE);
                gotoxy(25,10);
                printf("    BONJOUR 3   \n");
                system("pause");
                ShowWindow(hwnd,SW_NORMAL);
                system("cls");
                break;
        case 46: //Ex7
                system("color F9");
                ShowWindow(hwnd,SW_HIDE);
                gotoxy(25,10);
                EX7TP3();
                system("pause");
                ShowWindow(hwnd,SW_NORMAL);
                system("cls");
                break;
        case 17: //Charger la matrice des voix
                system("color F9");
                ShowWindow(hwnd,SW_HIDE);
                gotoxy(25,10);
                printf("    BONJOUR 3   \n");
                system("pause");
                ShowWindow(hwnd,SW_NORMAL);
                system("cls");
                break;
        case 18: //Sièges remportés par gouvernorat
                system("color F9");
                ShowWindow(hwnd,SW_HIDE);
                gotoxy(25,10);
                printf("    BONJOUR 3   \n");
                system("pause");
                ShowWindow(hwnd,SW_NORMAL);
                system("cls");
                break;
        case 19: //Sièges remportés par parti
                system("color F9");
                ShowWindow(hwnd,SW_HIDE);
                gotoxy(25,10);
                printf("    BONJOUR 3   \n");
                system("pause");
                ShowWindow(hwnd,SW_NORMAL);
                system("cls");
                break;

        case 10:
                if (MessageBox(hwnd,"       Vous voulez quitter ?", "QUITTER", MB_YESNO | MB_ICONQUESTION ) == IDYES)
                {

                    DestroyWindow(hwnd);
                    system("cls");
                }
            break;



        }
    case WM_CREATE :
        addmenus(hwnd);
//         CreateBtt(hwnd) ;
            /*****************ajouter fond **********************/
            hBmp=LoadImage(NULL,"pr.bmp",IMAGE_BITMAP,1370,700,LR_LOADFROMFILE);

            break;

        case WM_PAINT :
            {



         PAINTSTRUCT ps;
            hdc = BeginPaint(hwnd, &ps);

            DrawState(hdc,NULL,NULL,(long)hBmp,0,0,0,0,0,DST_BITMAP);

            EndPaint(hwnd, &ps);}
        break;
        case WM_DESTROY:
            PostQuitMessage (0);        /* send a WM_QUIT to the message queue */
            break;
        default:                      /* for messages that we don't deal with */
            return DefWindowProc (hwnd, message, wParam, lParam);
    }

    return 0;
}

void addmenus(HWND hwnd)
{
    hmenu=CreateMenu();
    HMENU htp=CreateMenu();
    HMENU hex4=CreateMenu();
    HMENU htp1=CreateMenu();
    HMENU hex3=CreateMenu();
    HMENU htp2=CreateMenu();
    HMENU hex1=CreateMenu();
    HMENU hex8=CreateMenu();
    HMENU htp3=CreateMenu();


    //AppendMenu(hmenu,MF_STRING,0,"création du repertoire");
    /*******************************************************/
    AppendMenu(hmenu,MF_POPUP,(UINT_PTR)htp,"TP1");
    //1 15  -10
    AppendMenu(htp,MF_STRING,1,"EXERCICE 1");
    AppendMenu(htp,MF_STRING,2,"EXERCICE 2");
    AppendMenu(htp,MF_STRING,3,"EXERCICE 3");
    AppendMenu(htp,MF_POPUP,(UINT_PTR)hex4,"EXERCICE 4");
        AppendMenu(hex4,MF_STRING,4,"Question 1: if - else  + V_MAX"); /*Sous partie de l'ex1*/
        AppendMenu(hex4,MF_STRING,5,"Question 2: if - else if - else");
        AppendMenu(hex4,MF_STRING,6,"Question 3: Opéra_condi  + V_MAX");
        AppendMenu(hex4,MF_STRING,7,"Question 4: Opéra_condi");
    AppendMenu(htp,MF_STRING,8,"EXERCICE 5");
    AppendMenu(htp,MF_STRING,9,"EXERCICE 6");
    AppendMenu(htp,MF_STRING,11,"EXERCICE 7");
/***************************************************************/

     AppendMenu(hmenu,MF_POPUP,(UINT_PTR)htp1,"TP2");
    //20 40
      AppendMenu(htp1,MF_POPUP,(UINT_PTR)hex1,"EXERCICE 1");
        AppendMenu(hex1,MF_STRING,20,"While"); /*Sous partie de l'ex1*/
        AppendMenu(hex1,MF_STRING,31,"For");
        AppendMenu(hex1,MF_STRING,32,"Do..While");
      AppendMenu(htp1,MF_STRING,21,"EXERCICE 2");
      AppendMenu(htp1,MF_STRING,22,"EXERCICE 3");
      AppendMenu(htp1,MF_STRING,23,"EXERCICE 4");
      AppendMenu(htp1,MF_STRING,24,"EXERCICE 5");
      AppendMenu(htp1,MF_STRING,25,"EXERCICE 6");
      AppendMenu(htp1,MF_STRING,26,"EXERCICE 7");
      AppendMenu(htp1,MF_POPUP,(UINT_PTR)hex8,"EXERCICE 8");
        AppendMenu(hex8,MF_STRING,27,"Question 1"); /*Sous partie de l'ex8*/
        AppendMenu(hex8,MF_STRING,28,"Question 2");
        AppendMenu(hex8,MF_STRING,29,"Question 3");
      AppendMenu(htp1,MF_STRING,30,"EXERCICE 9");

/***************************************************************/
     AppendMenu(hmenu,MF_POPUP,(UINT_PTR)htp2,"TP3");
    //40 60
      AppendMenu(htp2,MF_STRING,40,"EXERCICE 1");
      AppendMenu(htp2,MF_STRING,41,"EXERCICE 2");
      AppendMenu(htp2,MF_STRING,42,"EXERCICE 3");
      AppendMenu(htp2,MF_STRING,43,"EXERCICE 4");
     // AppendMenu(htp2,MF_STRING,44,"EXERCICE 5");
     // AppendMenu(htp2,MF_STRING,45,"EXERCICE 6");
      AppendMenu(htp2,MF_STRING,46,"EXERCICE 7");

/***************************************************************/
  AppendMenu(hmenu,MF_POPUP,(UINT_PTR)htp3,"Gestion des Elections");
    //15 19
      AppendMenu(htp3,MF_STRING,17,"Charger la matrice des voix ");
      AppendMenu(htp3,MF_STRING,18,"Sièges remportés par gouvernorat ");
      AppendMenu(htp3,MF_STRING,19,"Sièges remportés par parti ");

/******************************************************************/
    AppendMenu(hmenu,MF_STRING,10,"Quitter");
    SetMenu(hwnd,hmenu);
}

