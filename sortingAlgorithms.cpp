#include <bits/stdc++.h>
using namespace std;
void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

// void SelectionSort(int arr[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         int min = i;
//         for (int j = i+1; j < n ; j++)
//         {
//             if (arr[j] < arr[min])
//             {
//                 min = j;
//             }
//         }
//         swap(arr[i], arr[min]);
//     }
// }

// void BubbleSort(int arr[], int n)
// {
//     bool s;
//     for (int i = 0; i < n; i++)
//     {
//         s = false;
//         for (int j = 0; j < n - i - 1; j++)
//         {
//             if (arr[j] > arr[j + 1])
//             {
//                 swap(arr[j], arr[j + 1]);
//                 s = true;
//             }
//         }
//         if (!s)
//         {
//             break;
//         }
//     }
// }

// void InsertionSort(int arr[], int n)
// {
//     for (int i = 1; i < n; i++)
//     {
//         int j = i;
//         while (j > 0 && arr[j - 1] > arr[j])
//         {
//             swap(arr[j - 1], arr[j]);
//             j--;
//         }
//     }
// }

// void Merge(int arr[], int low, int mid, int high, vector<int> &temp)
// {
//     int left = low;
//     int right = mid + 1;
//     while (left <= mid && right <= high)
//     {
//         if (arr[left] < arr[right])
//         {
//             temp.push_back(arr[left]);
//             left++;
//         }
//         else
//         {
//             temp.push_back(arr[right]);
//             right++;
//         }
//     }
//     while (left <= mid)
//     {
//         temp.push_back(arr[left]);
//         left++;
//     }
//     while (right <= high)
//     {
//         temp.push_back(arr[right]);
//     }

//     for (int i = low; i <= high; i++)
//     {
//         arr[i] = temp[i - low];
//     }
// }

// void MergeSort(int arr[], int low, int high, vector<int> &temp)
// {
//     if (low >= high)
//     {
//         return;
//     }
//     int mid = low + (high - low) / 2;
//     MergeSort(arr, low, mid, temp);
//     MergeSort(arr, mid + 1, high, temp);
//     Merge(arr, low, mid, high, temp);
// }

int partitionIndex(int arr[], int low, int high)
{
    int pivot = arr[low];
    int i = low + 1;
    int j = high;
    while (i <= j)
    {
        while (i <= j && arr[i] <= pivot)
        {
            i++;
        }
        while (i <= j && arr[j] > pivot)
        {
            j--;
        }
        if (i < j)
        {
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[low], arr[j]);

    return j;
}

void QuickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int p_index = partitionIndex(arr, low, high);
        QuickSort(arr, low, p_index - 1);
        QuickSort(arr, p_index + 1, high);
    }
}

int main()
{
    int a[] = {2, 45, 9, -1, 0, 8, 90, 7};
    int size = sizeof(a) / sizeof(a[0]);
    // vector<int> temp(size);
    // SelectionSort(a, size);
    // BubbleSort(a, size);
    // InsertionSort(a, size);
    // MergeSort(a, 0, size - 1, temp);
    QuickSort(a, 0, size - 1);
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
}