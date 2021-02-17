#include<bits/stdc++.h>
using namespace std;


    int Algo1(int num)
{
    if(num==1){
        return 0;
    }
    for(int i=2; i<num; i++){
        if(num%i==0){
            return 0;
        }
    }
    return 1;

}
int Algo2(int num)
{
   if(num==1){
        return 0;
    }
    for(int i=2; i<=sqrt(num); i++)
    {
        if(num%i==0){
            return 0;
        }
    }
    return 1;
}
int Algo3(int arr[], int num)
{
    for(int i=2; i<sqrt(num); i++)
    {
        if(arr[i]==0)
        {
            for(int j=2*i; j<=num; j=i+j)
            {
                arr[j]=1;
            }
        }
    }
//   for(int i=2; i<=num; i++)
//   {
//       if(arr[i]==0)
//       {
//            printf("%d ", i);
//       }
//    }
}
int main()
{
    clock_t start_time, end_time;
    int n=10000;
    double cpu_time_used;

    ///algo 1
    printf("Algorithm_1: \n");
    start_time= clock();
    for(int i=2; i<n; i++)
        if(Algo1(i));
    end_time= clock();
    cout<<"\ntime taken: "<<10000*( double)(end_time-start_time)/CLOCKS_PER_SEC
    <<" milliseconds\n\n";

    ///algo 2

    printf("Algorithm_2: \n");
    start_time= clock();
    for(int i=2;i<n; i++){
        if(Algo1(i)==1)
        {
            //printf("%d ", i);
        }
    }
    end_time= clock();
   //cpu_time_used= ((double)(end_time-start))/CLOCKS_PER_SEC;
    cout<<"\ntime taken: "<<10000*( double)(end_time-start_time)/CLOCKS_PER_SEC
    <<" milliseconds\n\n";

    ///algo 3

    printf("Algorithm_3: \n");
    int arr[n+1]={0};
    start_time= clock();
    Algo3(arr, n);
    end_time= clock();
    //cpu_time_used= ((double)(end_time-start))/CLOCKS_PER_SEC;
   cout<<"\ntime taken: "<<10000*( double)(end_time-start_time)/CLOCKS_PER_SEC
    <<" milliseconds\n\n";
}
