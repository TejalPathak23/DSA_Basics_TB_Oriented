#include <iostream>
using namespace std;

void LinearSearch()
{
    int list[6] = {4, 14, 40, 9, 12, 51};
    int i, key, cnt, size = 6;

    cout << "\n.........Linear Search.........\n";

    cout << "\n List: ";
    for (i = 0; i < size; i++)
    {
        cout << "  " << list[i];
    }
    cout << "\n\t Enter Key: ";
    cin >> key;

    cnt = 0;
    for (i = 0; i < size; i++)
    {
        if (key == list[i])
        {
            cout << "\n\t Key Found at Location: " << i + 1;
            cnt++;
            cout << "\n\t No of Comparisons: " << cnt;
            break;
        }
        else
        {
            cnt++;
        }
    }
    if (i == size)
    {
        cout << "\n\t Key Not Found...!!!";
        cout << "\n\t No of Comparisons: " << cnt;
    }
}

void SentinelSearch()
{
    int list[6] = {4, 14, 40, 9, 12, 51};
    int i, key, loc, last, size = 6;

    cout << "\n\n.........Sentinel Search.........\n";

    cout << "\n List: ";
    for (i = 0; i < size; i++)
    {
        cout << "  " << list[i];
    }
    cout << "\n\t Enter Key: ";
    cin >> key;

    last = list[size - 1];

    list[size - 1] = key;

    i = 0;

    while (key != list[i])
    {
        i++;
        loc = i+1;
    }
    i++;


    list[size - 1] = last;

    if (i < size || key == list[size - 1])
    {
        cout << "\n\t Key found at Location: " <<loc;
        cout << "\n\t No of Comparisons: " << i;
    }
    else
    {
        cout << "\n\t Key Not found...!!!";
        cout << "\n\t No of Comparisons: " << i;
    }
}

int main()
{
    LinearSearch();
    SentinelSearch();

    LinearSearch();
    SentinelSearch();

    LinearSearch();
    SentinelSearch();

    return 0;
}

/*  ----------------------------------------------------------------
 
 .........Linear Search.........

 List:   4  14  40  9  12  51
         Enter Key: 40

         Key Found at Location: 3
         No of Comparisons: 3

.........Sentinel Search.........

 List:   4  14  40  9  12  51
         Enter Key: 40

         Key found at Location: 3
         No of Comparisons: 3

.........Linear Search.........

 List:   4  14  40  9  12  51
         Enter Key: 51

         Key Found at Location: 6
         No of Comparisons: 6

.........Sentinel Search.........

 List:   4  14  40  9  12  51
         Enter Key: 51

         Key found at Location: 6
         No of Comparisons: 6

.........Linear Search.........

 List:   4  14  40  9  12  51
         Enter Key: 100

         Key Not Found...!!!
         No of Comparisons: 6

.........Sentinel Search.........

 List:   4  14  40  9  12  51
         Enter Key: 100

         Key Not found...!!!
         No of Comparisons: 6
 
 */