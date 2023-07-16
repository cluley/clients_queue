#include "queue.h"

int Queue::cnt = 0;

void Queue::client() {
	while (cnt != 5) {
		std::this_thread::sleep_for(std::chrono::seconds(1));
		cnt++;

		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 5);
		q_status();
	}
}
void Queue::teller() {
	do {
		std::this_thread::sleep_for(std::chrono::seconds(2));
		cnt--;

		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);
		if (cnt >= 0) q_status();
	} while (cnt != -1);
}

void Queue::q_status() {
	std::cout << "Длина очереди: " << cnt;
	if (cnt > 1 && cnt < 5) {
		std::cout << " человека" << std::endl;
	}
	else {
		std::cout << " человек" << std::endl;
	}
}