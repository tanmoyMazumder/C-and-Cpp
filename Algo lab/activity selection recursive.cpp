#include<bits/stdc++.h>

using namespace std;

activitySelector(int startTime[], int endTime[], int k, int numberOfTasks)
{
    int currentIndex=k+1;

    while(currentIndex<=numberOfTasks && startTime[currentIndex]<endTime[k])
        currentIndex=currentIndex+1;
    if(currentIndex< numberOfTasks)
    {
        cout<< "("<<startTime[currentIndex]<<","<<endTime[currentIndex]<<") ";
        activitySelector(startTime, endTime, currentIndex, numberOfTasks);
    }
}

int main()
{
    int numberOfTasks,k;
    cin>>numberOfTasks;
    int startTime[numberOfTasks], endTime[numberOfTasks];

    for(int i=0; i<numberOfTasks; i++)
        cin>>startTime[i];
    for(int i=0; i<numberOfTasks; i++)
        cin>>endTime[i];

    activitySelector(startTime, endTime, -1, numberOfTasks);

    return 0;
}












