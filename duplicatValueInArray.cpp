//print duplicate value of a given array
#include <bits/stdc++.h>
using namespace std;
void findDuplicate(int arr[], int length);
int main()
{
    int arr[] = {1,2,3,6,4,5,6,7,5};
    int length;
    length = (int)((sizeof(arr)) / (sizeof(arr[0])));
    //printf("Len : %d\n", length);
    findDuplicate(arr, length);
    return 0;
}

void findDuplicate(int arr[], int length)
{
    vector<int> duplicate;
    int len = length, i, j, pos, vLen, value, flag;
    int arrOfNumber[len];
    char str[len];
    for (i = 0; i < len; i++)
    {
        arrOfNumber[i] = arr[i];
        str[i] = 'z';
    }
    for (i = 0; i < len; i++)
    {
        pos = i;
        for (j = 0; j < len; j++)
        {
            if (j != pos)
            {
                if (arr[i] == arrOfNumber[j])
                {
                    str[j] = 'd';
                }
            }
        }
    }
    for (i = 0; i < len; i++)
    {
        if (str[i] == 'd')
        {
            flag = 0;
            value = arr[i];
            vLen = duplicate.size();
            for (j = 0; j < vLen; j++)
            {
                if (duplicate[j] == value)
                {
                    flag = 1;
                    break;
                }
            }
            if (flag == 0)
            {
                duplicate.push_back(value);
            }
        }
    }
    vLen = duplicate.size();
    for (i = 0; i < vLen; i++)
    {
        printf("%d ", duplicate[i]);
    }
}