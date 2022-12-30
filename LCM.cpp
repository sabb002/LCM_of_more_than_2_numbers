#include "iostream"

int lcm(int numberOfInt){

        int count = 0;
        int arr[numberOfInt];

    for(int i = 0; i< numberOfInt; i++)
    {
        std::cin>>arr[i];
    }

    for(int i = 1; i<10000; i++)
    {
        for(int j = 0; j<numberOfInt; j++)
        {
            if(i%arr[j]==0)
            {
                count++;             
            }
            else{
                count = 0;
            }
           
        }
        if(count == numberOfInt){
                return i;
            }
    }
 
}

int main()
{
    int numOfint;
    std::cout<<"Enter the number of Integer: ";
    std::cin>>numOfint;
    std::cout<<lcm(numOfint);
}

