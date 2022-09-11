#include <iostream>
#include <thread>//thread
#include <condition_variable>//condition_variable
#include <vector>
#include <algorithm>//for_each
using namespace std;
mutex mtx;
condition_variable cv;
int printThis = 1;//Ҫ�������
int loopTimes = 100;//ѭ������
int workersNum = 3;//�߳���
void work(int num) {
	for (int i = 0; i < loopTimes; i++) {
		unique_lock<mutex>ulk(mtx);
		cv.wait(ulk, [num] {return num == printThis; });
                cout /*<< std::this_thread::get_id() << ":" */<< num/* << endl*/;
		printThis = num % workersNum + 1;//ת����һ���߳�
		ulk.unlock();
		cv.notify_all();
	}
}
 
int main() {
	vector<thread> workers(workersNum);
	for (int i = 1; i <= workersNum; ++i)
		workers[i-1] = thread(work, i);
	for_each(workers.begin(), workers.end(), mem_fn(&thread::join));
	//cout << "���";
	getchar();
	return 0;
}
