#pragma once

#include <iostream>
#include <thread>
#include <chrono>
#include "Windows.h"

class Queue {
public:
	void client();
	void teller();
	void q_status();
private:
	static int cnt;
};