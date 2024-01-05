

//======================================= static============================================================================//

// #include<iostream>
// using namespace std;

// int main()
// {
//    int arr[6]={10,20,3,8,7,6};
//    int i,j,temp;
 
//  cout<<"Unsorted array is :"<<" \n";
//  for(i=0;i<6;i++)
//  {
//    cout<<arr[i]<<" "<<"\t"<<" \n";
//  }

//  for(i=1;i<6;i++)
//  {
//    temp=arr[i];
//    j=i-1;

//    while(j>=0 && arr[j]>temp)
//    {
//       arr[j+1]=arr[j];
//       j--;
//    }
//    arr[j+1]=temp;
//  }
//  cout<<"Sorted array is "<<"\n";

//  for(i=0;i<6;i++)
//  {
//    cout<<arr[i]<<" "<<"\t";
//  }  
//  return 0;
// }


//=========================================================dynamic=============================================================//

#include<iostream>
using namespace std;

int main()
{
  int arr[40];
  int i,j,temp,n;
   
   cout<<"Enter size of array"<<endl;
   cin>>n;

   for(i=0;i<n;i++)
   {
    cout<<"Enter numbers for sorting:["<<i<<"]:"<<"\n";
    cin>>arr[i];
   }

   cout<<"unsorted array is:"<<"\n";

   for(i=0;i<n;i++)
   {
    cout<<arr[i]<<"\n";
   }

   for(i=1;i<n;i++)
   {
    temp=arr[i];
    j=i-1;

    while(j>=0 && arr[j]>temp)
    {
      arr[j+1]=arr[j];
      j--;
    }
    arr[j+1]=temp;
   }

   cout<<"Sorted array is"<<endl;
   for(i=0;i<n;i++)
   {
    cout<<arr[i]<<"\t"<<"\n";
   }
   return 0;
}

//===================================================================End=========================================================//

