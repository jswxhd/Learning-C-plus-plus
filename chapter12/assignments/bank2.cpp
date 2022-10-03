// bank2.cpp -- using the Queue interface in ../examples
// The answer is 57 customers per hour
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "queue.h"

const int MIN_PER_HR = 60;

bool newcustomer(double x);

int main(void)
{
	using std::cin;
	using std::cout;
	using std::endl;
	using std::ios_base;

	std::srand(std::time(0));

	cout << "Case Study: Bank of Heather Automatic Teller\n";
	cout << "Enter maximum size of queue: ";
	int qs;
	cin >> qs; // using 10 as q size
	Queue line1(qs);
	Queue line2(qs);

	cout << "Enter the number of simulation hours: ";
	int hours;
	cin >> hours; // using 100 as simulation hours
	long cyclelimit = MIN_PER_HR * hours;

	cout << "Enter the average number of customers per hour: ";
	double perhour;
	cin >> perhour;
	double min_per_cust = MIN_PER_HR / perhour; // avg time between arrivals

	Item temp;	    // new customer data
	long turnaways = 0; // turn away by full queue
	long customers = 0; // joined the queue
	long served = 0;    // served during the simulation
	long sum_line1 = 0, sum_line2 = 0;  // cumulative line length
	int wait_time1 = 0, wait_time2 = 0;  // time until autoteller is free
	long line_wait1 = 0, line_wait2 = 0; // cumulative time in line


	for(int cycle = 0; cycle < cyclelimit; cycle++)
	{
		if(newcustomer(min_per_cust))
		{
			if(line1.isfull() && line2.isfull())
				turnaways++;
			else
			{
				customers++;
				temp.set(cycle);
				if(line1.queuecount() <= line2.queuecount())
					line1.enqueue(temp);
				else
					line2.enqueue(temp);
			}
		}
		if(wait_time1 <= 0 && !line1.isempty())
		{
			line1.dequeue(temp);
			wait_time1 = temp.ptime();
			line_wait1 += cycle - temp.when();
			served++;
		}
		if(wait_time1 > 0)
			wait_time1--;
		sum_line1 += line1.queuecount();

                if(wait_time2 <= 0 && !line2.isempty())
                {
                        line2.dequeue(temp);
                        wait_time2 = temp.ptime();
                        line_wait2 += cycle - temp.when();
                        served++;
                }
                if(wait_time2 > 0)
                        wait_time2--;
		sum_line2 += line2.queuecount();
	}

	if(customers > 0)
	{
		cout << "customer accepted: " << customers << endl;
		cout << "  customer served: " << served << endl;
		cout << "       turnaways: " << turnaways << endl;
		cout << "average queue size: ";
		cout.precision(2);
		cout.setf(ios_base::fixed, ios_base::floatfield);
		double avg_q1 = (double) sum_line1 / cyclelimit;
		double avg_q2 = (double) sum_line2 / cyclelimit;
		cout << (avg_q1 + avg_q2) / 2 << endl;

		double avg_w1 = (double) line_wait1 / served;
		double avg_w2 = (double) line_wait2 / served;
		cout << " average wait time: "
		     << (avg_w1 + avg_w2) / 2 << " minutes\n";
	}
	else
		cout << "No customers.\n";
	cout << "Done!\n";

	return 0;
}

bool newcustomer(double x)
{
	return (std::rand() * x / RAND_MAX < 1);
}

/**
void update_line(int &cycle, int & wait_time, Queue &line,
long &line_wait, long &served, long &sum_line)
{
	if(wait_time <= 0 && !line.isempty())
        {
        	line.dequeue(temp);
                wait_time = temp.ptime();
                line_wait += cycle - temp.when();
                served++;
        }
        if(wait_time > 0)
        	wait_time--;
	sum_line += line.queuecount();
}
**/
