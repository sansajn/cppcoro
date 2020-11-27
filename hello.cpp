#include <cassert>
#include <cppcoro/task.hpp>
#include <cppcoro/sync_wait.hpp>

int main(int argc, char * argv[])
{
	// task doesn't start until awaited

	bool started = false;
	auto func = [&]() -> cppcoro::task<> {
		started = true;
		co_return;
	};

	cppcoro::sync_wait([&]() -> cppcoro::task<> {
		auto t = func();
		assert(!started);
		co_await t;
		assert(started);
	}());

	return 0;
}
