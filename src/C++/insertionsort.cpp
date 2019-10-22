#include <iostream>

using namespace std;
void insertion_Sort(int [],int );
int main()
{
    int array[50], number_of_elements;
    cout<<"Enter the number of elements of the array - "<<endl;
    cin>>number_of_elements;
    cout<<"Enter the elements of the array : "<<endl;
    for(int index=0;index<number_of_elements;index++)
        cin>>array[index];
    insertion_Sort(array,number_of_elements);
    return 0;
}

void insertion_Sort(int array[], int number_of_elements)
{
    int i,j,key,count=0;
    for(j=1;j<number_of_elements;j++)
    {
        count++;
        key=array[j];
        i=j-1;
        while(i>=0&&array[i]>key)
        {
            count++;
            array[i+1]=array[i];
            i=i-1;
        }
        array[i+1]=key;
    }
    cout<<endl<<" Sorted sequence is "<<endl;
    for(i=0;i<number_of_elements;i++)
    cout<<array[i]<<endl;
    cout<<"Count is - "<<count;
}
