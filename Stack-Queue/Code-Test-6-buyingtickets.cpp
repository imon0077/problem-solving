#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int buyTicketTime(vector<int>& tickets, int k) {
    int n = tickets.size();
    queue<int> q; // Queue to keep track of people's positions
    priority_queue<int> pq; // Max heap to keep track of ticket counts

    for (int i = 0; i < n; ++i) {
        q.push(i);
        pq.push(tickets[i]);
    }

    int time = 0;

    while (true) {
        int personPosition = q.front();
        int ticketsToBuy = pq.top();

        q.pop();
        pq.pop();

        if (personPosition == k && ticketsToBuy == 0) {
            // If this is the target person and they have no more tickets to buy, return the time
            return time;
        }

        if (ticketsToBuy > 0) {
            q.push(personPosition);
            pq.push(ticketsToBuy - 1);
        } else {
            q.push(personPosition);
            pq.push(0); // Ensure the queue sizes match
        }

        time++;
    }

    return time; // This should not be reached if k is a valid position
}

int main() {
    vector<int> tickets = {2, 3, 2};
    int k = 2;

    int time = buyTicketTime(tickets, k);
    cout << "Time taken for the person at position " << k << " to finish buying tickets: " << time << " seconds." << endl;

    return 0;
}



// Time complexity : O(n^2)
// Space complexity : O(n)