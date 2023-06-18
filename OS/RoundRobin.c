#include<stdio.h>

void findWaitingTime(int processes[], int n, int burstTime[], int waitingTime[], int timeQuantum) {
    int remainingTime[n];

    // Copy burst times to remaining times
    for (int i = 0; i < n; i++) {
        remainingTime[i] = burstTime[i];
    }

    int complete = 0; // Number of processes completed
    int time = 0; // Current time

    while (complete != n) {
        for (int i = 0; i < n; i++) {
            if (remainingTime[i] > 0) {
                // Process is not completed yet

                if (remainingTime[i] <= timeQuantum) {
                    // Process can be completed within the time quantum
                    time += remainingTime[i];
                    waitingTime[i] = time - burstTime[i];
                    remainingTime[i] = 0;
                    complete++;
                } else {
                    // Process needs more time to complete
                    time += timeQuantum;
                    remainingTime[i] -= timeQuantum;
                }
            }
        }
    }
}

void findTurnaroundTime(int burstTime[], int waitingTime[], int n, int turnaroundTime[]) {
    // Calculate turnaround time for each process
    for (int i = 0; i < n; i++) {
        turnaroundTime[i] = burstTime[i] + waitingTime[i];
    }
}

void findAverageTime(int processes[], int n, int burstTime[], int timeQuantum) {
    int waitingTime[n], turnaroundTime[n], totalWaitingTime = 0, totalTurnaroundTime = 0;

    // Calculate waiting time and turnaround time
    findWaitingTime(processes, n, burstTime, waitingTime, timeQuantum);
    findTurnaroundTime(burstTime, waitingTime, n, turnaroundTime);

    printf("Process\tBurst Time\tWaiting Time\tTurnaround Time\n");

    // Calculate total waiting time and turnaround time, and print the details for each process
    for (int i = 0; i < n; i++) {
        totalWaitingTime += waitingTime[i];
        totalTurnaroundTime += turnaroundTime[i];
        printf("%d\t%d\t\t%d\t\t%d\n", processes[i], burstTime[i], waitingTime[i], turnaroundTime[i]);
    }

    // Calculate and print the average waiting time and turnaround time
    float averageWaitingTime = (float) totalWaitingTime / n;
    float averageTurnaroundTime = (float) totalTurnaroundTime / n;
    printf("\nAverage Waiting Time: %.2f", averageWaitingTime);
    printf("\nAverage Turnaround Time: %.2f", averageTurnaroundTime);
}

int main() {
    int n;
    int timeQuantum;

    printf("Enter the number of processes: ");
    scanf("%d", &n);

    int processes[n], burstTime[n];

    // Input the burst time for each process
    printf("Enter the burst time for each process:\n");
    for (int i = 0; i < n; i++) {
        printf("Process %d: ", i + 1);
        scanf("%d", &burstTime[i]);
        processes[i] = i + 1; // Assign process ID
    }

    printf("Enter the time quantum: ");
    scanf("%d", &timeQuantum);

    findAverageTime(processes, n, burstTime, timeQuantum);

    return 0;
}
