#include <iostream>

#include "queue.h"

int main() {
	Queue queue1, queue2;

	std::thread ct(&Queue::client, queue1);
	std::thread tt(&Queue::teller, queue2);

	if(ct.joinable()) ct.join();
	if(tt.joinable()) tt.join();

	return 0;
}