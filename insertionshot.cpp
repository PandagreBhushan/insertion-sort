// #include<iostream>
// using namespace std;

// int main()

// {
//     int arr[50];
//     int n,c,t,min;

//     cout<<"Enter number of Elements"<<endl;
//     cin>>n;

//     for(int i=0;i<n;i++)
//     {
//         cout<<"Enetr values for Sorting["<<i<<"]:"<<endl;
//         cin>>arr[i];
//     }
//     cout<<"Unsorted array"<<endl;
//     for( int i=0;i<n;i++)
//     {
//         cout<<arr[i]<<" "<<endl;
//     }

//     for(int i=1;i<=n-1;i++)
//     {
//         min=i;

//         while (min>0 && arr[min]<arr[min-1])
//         {
//           t=arr[min];
//           arr[min]=arr[min-1];
//           arr[min-1]=t;
//           min--;
//         }
        
//     }
//     cout<<"Sorted array is"<<endl;
//     for(int i=0;i<=n-1;i++)
//     {
//         cout<<arr[i]<<" "<<endl;
//     }

// } 

//========================================================type 2================================================================//


// #include<iostream>
// using namespace std;

// int main()
// {
//    int arr[50];
//    int n,c,t,min;

//    cout<<"\nEnter number of elements"<<endl;
//    cin>>n;

//    for(int i=0;i<n;i++)
//    {
//       cout<<"\nEnter values for sorting["<<i<<"]:";
//       cin>>arr[i];
//    }

//    cout<<"\n Unsorted array is "<<endl;
//    for(int i=0;i<n;i++)
//    {
//       cout<<arr[i]<<" "<<endl;
//    }
//    for(int i=0;i<n;i++)
//    {
//       min=i;

//       while(min>0 && arr[min]<arr[min-1])
//       {
//          t=arr[min];
//          arr[min]=arr[min-1];
//          arr[min-1]=t;
//          min--;
//       }
//    }
//     cout<<"\n Sorted array is"<<endl;

//     for(int i=0;i<n;i++)
//     {
//       cout<<arr[i]<<" ";
//     }
//     return 0;
// }

//================================================================PRAC===========================================================//

// #include<iostream>
// using namespace std;

// int main()
// {
//    int arr[50];
//    int n,c,t,min;

//    cout<<"\nEnter number of element"<<endl;
//    cin>>n;

//    for( int i=0;i<n;i++)
//    {
//       cout<<"\nEnter numbers for sorting["<<i<<"]:"<<endl;
//       cin>>arr[i];

//    }
//    cout<<"\nUnsorted array"<<endl;
//    for(int i=0;i<n;i++)
//    {
//       cout<<arr[i]<<" "<<endl;
//    }

//    for(int i=0;i<=n-1;i++)
//    {
//       min=i;
//       while (min>0 && arr[min] < arr[min-1])
//       {
//          t=arr[min];
//          arr[min]=arr[min-1];
//          arr[min-1]=t;
//          min--;
//       }
     
//    }
//    cout<<"\nSorted array is "<<endl;
//     for(int i=0;i<=n-1;i++)
//     {
//       cout<<arr[i]<<" "<<endl;
//     }
//    return 0;
// }
//=============================================================you yube(Actual)===========================================================//

// #include<iostream>
// using namespace std;
// int main()
// {
//    int arr[6]={5,4,10,1,6,2};

//    int i,j,temp;
    
//     for(i=0;i<6;i++)
//     {
//         cout<<arr[i]<<"\n";
//     }

//     for(i=1;i<6;i++)
//     {
//       temp=arr[i];
//       j=i-1;

//       while(j>=0 && arr[j]>temp)
//       {
//          arr[j+1]=arr[j];
//          j--;
//       }
//       arr[j+1]=temp;
//     }

//     cout<<"Sorted array is :"<<"\n";

//     for(i=0;i<6;i++)
//     {
//       cout<<arr[i];
//     }
//     return 0;
// }

//=========================================================recap==============================================================//

// #include<iostream>
// using namespace std;

// int main()
// {
//    int arr[50];
//    int n,i,j,temp;

//    cout<<"Enter size of array is :"<<"\n";
//    cin>>n;

//    for(i=0;i<n;i++)
//    {
//       cout<<"Enter numbers for sorting:["<<i<<"]:"<<endl;
//       cin>>arr[i];
//    }

//    cout<<"Unsorted array is :"<<endl;
//    for(i=0;i<n;i++)
//    {
//       cout<<arr[i]<<" "<<"\n";
//    }

//    for(i=1;i<n;i++)
//    {
//       temp=arr[i];
//       j=i-1;

//       while(j>=0 && arr[j]>temp)
//       {
//          arr[j+1]=arr[j];
//          j--;

//       }
//       arr[j+1]=temp;

//    }
//    cout<<"Stored array is :"<<"\n";
//    for(i=0;i<6;i++)
//    {
//       cout<<arr[i]<<" ";
//    }
// return 0;
// }
//==============================================================================================================================//

// #include<iostream>
// using namespace std;

// int main()
// {
//    int arr[200];
//    int i,j,n,temp;

//    cout<<"Enter the Size of arry"<<endl;
//    cin>>n;

//    for(i=0;i<n;i++)
//    {
//       cout<<" Enter number for sorting:["<<i<<"]: "<<"\n";
//       cin>>arr[i];
//    }
//    cout<<"Unsoeted array is:"<<"\n";
//    for(i=0;i<n;i++)
//    {
//      cout<<arr[i];

//    }

//    for(i=1;i<n;i++)
//    {
//       temp=arr[i];
//       j=i-1;

//       while(j>=0 && arr[j]>temp)
//       {
//          arr[j+1]=arr[j];
//          j--;
//       }

//       arr[j+1]=temp;
//    }
//    cout<<"Sorted array is:"<<"\n";
//    for(i=0;i<n;i++)
//    {
//       cout<<arr[i]<<" "<<"\n";
//    }
//    return 0;
// }

//=======================================My bad luck == no one can understand me and my code ============================================================================//

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

