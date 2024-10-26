#include<iostream>
#include<algorithm>
using namespace std;

struct process{
    int id;
    int arrivalTime;
    int burstTime;
    int completionTime;
    int turnAroundTime;
    int waitingTime;
};

bool compareArrivalTime(process p1, process p2) {
   if(p1.arrivalTime < p2.arrivalTime) {
      return true;
   } return false;
}

int main()
{
    int n;
    float sumTurn=0,avgTurn=0,sumWait=0,avgWait=0;
    cout<<"Enter the number of process: ";
    cin>>n;

    process p[n];

    cout<<"Enter process ID, arrival time, burst time for each process: "<<endl;

    for(int i=0; i<n; i++)
    {
        cin>>p[i].id>>p[i].arrivalTime>>p[i].burstTime;
    }

    sort(p,p+n,compareArrivalTime);

    //calculating completion time
    p[0].completionTime = p[0].arrivalTime + p[0].burstTime;

    for(int i=1; i<n; i++)
    {
        p[i].completionTime = p[i-1].completionTime + p[i].burstTime;
    }

    //calculating turn around time
    for(int i=0; i<n; i++)
    {
        p[i].turnAroundTime = p[i].completionTime - p[i].arrivalTime;
    }
    //waiting time
    for(int i=0; i<n;i++){
        p[i].waitingTime = p[i].turnAroundTime - p[i].burstTime;
    }

    //average
    for(int i=0; i<n; i++){

        sumTurn=sumTurn + p[i].turnAroundTime;
        sumWait=sumWait + p[i].waitingTime;

    }
    avgTurn=sumTurn / n;
    avgWait=sumWait / n;

    for(int i=0; i<n; i++){
        cout<< "Id : "<< p[i].id << "    Arrival time : "<<p[i].arrivalTime<< "    Burst time : "<<p[i].burstTime << "    Completion time : "<< p[i].completionTime<< "   Turn around time : "<< p[i].turnAroundTime << "    Waiting time :   "<< p[i].waitingTime<<endl;

    }

    cout<< "Average turn around time :"<< avgTurn<<endl;
    cout<< "Average waiting time :  "<< avgWait<<endl;


    return 0;
}
