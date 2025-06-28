#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{  
    // 1 ZADANIYE 
    int num = 0;
    cout << "Enter num : ", cin >> num;
    string text = (num >= 10 && num <= 99) ? "Vxodit" : "Nevxodit";
    cout << text << endl;


    // 7 zadaniye
    /*int num = 0;
    cout << "Enter num : ", cin >> num;
    string text = (num % 5 == 0) ? "Kratnoye" : "Nekratnoye";
    cout << text << endl;*/
        



    // 6 zadaniye
    /*int num = 0;
    cout << "Enter num : ", cin >> num;
    string text = (num < 0) ? "Otricatelnoye" : "Polojitelnoye";
    cout << text << endl;*/



    // 5 zadaniye
    /*int length = 0;
    int height = 0;
    cout << "Enter num : ", cin >> length;
    cout << "Enter num : ", cin >> height;
    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < height; j++)
        {
            if (i == 0 or j == 0 or i == length - 1 or j == height - 1 )
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
            
        }
        cout << endl;
    }*/
    
    
    
    
    //4 zadaniye
    /*int length = 0;
    int height = 0;
    cout << "Enter num : ", cin >> length;
    cout << "Enter num : ", cin >> height;

    for (int i = 0 ; i < length; i++)
    {
        for (int j = 0 ; j < height; j++)
        {
            cout << "*";
        }

        cout <<  endl;
    }*/






    // 3 zadanie
    /*for ( int i = 100; i > 0 ; i--)
    {
        if (i % 3 == 0)
        {
            cout << i << endl;
        }
    }*/
    
    
    
    
    // 2 zadaniye 
    /*for (int i = 2; i < 50 ; i++)
    {
        if (i % 2 == 0)
        {
            cout << i << endl;
        }
    }*/



    
    
    //1 zadanie
    /*for (int i = 0; i <= 100; i++)
    {
        cout << i << endl;
    }*/











    /*Ne znayu kak sdelat treugolnik*/
   /* int i = 0;
    int j = 0;
    while (i<4)
    {
        while (j<6)
        {
            cout << "*";
            j++;
        }
        j = 0;
        cout << endl;
        i++;
    }*/





    /*---------RANDOM-----------  1-100*/
 
   /* srand(time(0));
    int num = rand() % 100;
    int Usernum = 0;
    while (true)
    {
        cout << "Enter num :", cin >> Usernum;
        if (num==Usernum)
        {
            cout << "win" << endl;
            break;
        }
        else if (num<Usernum)
        {
            cout << "less" << endl;
        }
        else
        {
            cout << "more" << endl;
        }


    }*/










   /* char cap1;
    char cap2;
    cout << "Enter number :", cin >> cap1;
    cout << "Enter number :", cin >> cap2;
    if (cap1 < cap2)
    {
        cout << cap2 << endl;
    }
    else
    {
        cout << cap1 << endl;
    }*/






    /*int num1 = 0;
    int num2 = 0;
    int num3 = 0;
    cout << "Entr num : ", cin >> num1;
    cout << "Entr num : ", cin >> num2;
    cout << "Entr num : ", cin >> num3;
    if (num1 + num2 > num3)
    {
        cout << "yes" << endl;
    }
    else if (num3 + num2 < num1)
    {
        cout << "yes" << endl;
    }
    else if (num1 + num3 < num2)
    {
        cout << "yes" << endl;
    }
    
    else 
    {
        cout << "no" << endl;
    }*/




   /* int num1 = 0;
    int num2 = num1 % 10;
    cout << "entr number : ", cin >> num1;
    if (num2 % 2 == 0)
    {
        cout << num1 % 10 << endl;
    }*/
   







   /* int num1 = 0;
    cout << "Enter number : ", cin >> num1;
    if (num1 >=90)
    {
        cout << "A" << endl;
    }
    else if (num1 <90 and num1 > 70)
    {
        cout << "B" << endl;
    }
    else if (num1 < 70 and num1 > 50)
    {
        cout << "C" << endl;
    }
    else
    {
        cout << "D" << endl;
    }*/








    /*int num1 = 0;
    cout << "Enter number : ", cin >> num1;
    if (num1 < 0)
    {
        cout << "otrichatelniy" << endl;
    }
    else if (num1 > 0)
    {
        cout << "polojitelniy" << endl;
    }
    else
    {
        cout << "0" << endl;
    }*/




   /* string text;
    string text2;
    cout << "enter name:" , cin >>  text;
    cout << "enter surname:" , cin >>  text2;
    cout << text + text2 << endl;*/

    /*int num1 = 0;
    int num2 = 0;
    cout << "Enter number :", cin >> num1;
    cout << "Enter number :", cin >> num2;
    cout << num1 / num2<<"ost."<<num1 % num2 << endl;*/
    
    /*
    char cap;
     cout << "Enter number :", cin >> cap;
    cout << int(cap) << endl;*/

    
    /*int num1 = 0;
    int num2 = 0;
    cout << "Enter number :", cin >> num1;
    cout << "Enter number :", cin >> num2;
    cout << num1 % num2 << endl;*/


  /*  int num1 = 0;
    int num2 = 0;
    cout << "Enter number :", cin >> num1;
    cout << "Enter number :", cin >> num2;
    cout << num1 + num2 << endl;*/

}

