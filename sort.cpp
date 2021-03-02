//sort 函数几种用法
#include<iostream>
#include<algorithm>
using namespace std;
typedef struct student {
	char name[20];
	int math;
	int english;
}Student;
bool compare(Student a, Student b);
int main()
{
	struct student example[4] = { { "apple", 67, 89}, {"wang", 100, 100},
									{"xu", 56, 88} };
	sort(example, example + 3, compare);
	for (int i = 0; i < 3; i++)
		cout << example[i].name << " " << example[i].math << " " << example[i].english << endl;


}
bool compare(Student a, Student b)
{
	//return a.math > b.math;
	if (a.math > b.math)
		return a.math < b.math;
	else if (a.math == b.math)
		return a.english > b.english;

}