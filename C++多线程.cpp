#include <iostream>
#include <thread>//thread
#include <condition_variable>//condition_variable
#include <vector>
#include <algorithm>//for_each
using namespace std;
mutex mtx;
condition_variable cv;
int printThis = 1;//要输出的数
int loopTimes = 100;//循环次数
int workersNum = 3;//线程数
void work(int num) {
	for (int i = 0; i < loopTimes; i++) {
		unique_lock<mutex>ulk(mtx);
		cv.wait(ulk, [num] {return num == printThis; });
                cout /*<< std::this_thread::get_id() << ":" */<< num/* << endl*/;
		printThis = num % workersNum + 1;//转到下一个线程
		ulk.unlock();
		cv.notify_all();
	}
}
 
int main() {
	vector<thread> workers(workersNum);
	for (int i = 1; i <= workersNum; ++i)
		workers[i-1] = thread(work, i);
	for_each(workers.begin(), workers.end(), mem_fn(&thread::join));
	//cout << "完成";
	getchar();
	return 0;
}
