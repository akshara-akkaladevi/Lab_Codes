#include<stdio.h>

void findWaitingTime(int processes[], int n, int burstTime[], int waitingTime[]) {
    int remainingTime[n];

    // Copy burst times to remaining times
    for (int i = 0; i < n; i++) {
        remainingTime[i] = burstTime[i];
    }

    int complete = 0; // Number of processes completed
    int shortest = 0; // Index of the shortest job

    int time = 0; // Current time

    while (complete != n) {
        shortest = -1;

        // Find the process with the shortest remaining time at the current time
        for (int i = 0; i < n; i++) {
            if (remainingTime[i] > 0 && (shortest == -1 || remainingTime[i] < remainingTime[shortest])) {
                shortest = i;
            }
        }

        if (shortest == -1) {
            time++; // No process is available, move to the next time
            continue;
        }

        // Update waiting time and remaining time for the selected process
        waitingTime[shortest] = time;
        time += remainingTime[shortest];
        remainingTime[shortest] = 0;
        complete++;
    }
}

void findTurnaroundTime(int burstTime[], int waitingTime[], int n, int turnaroundTime[]) {
    // Calculate turnaround time for each process
    for (int i = 0; i < n; i++) {
        turnaroundTime[i] = burstTime[i] + waitingTime[i];
    }
}

void findAverageTime(int processes[], int n, int burstTime[]) {
    int waitingTime[n], turnaroundTime[n], totalWaitingTime = 0, totalTurnaroundTime = 0;

    // Calculate waiting time and turnaround time
    findWaitingTime(processes, n, burstTime, waitingTime);
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

    findAverageTime(processes, n, burstTime);

    return 0;
}
