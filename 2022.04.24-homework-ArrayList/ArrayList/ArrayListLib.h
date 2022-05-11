#pragma once
#include<ostream>
class ArrayList
{
private:
	int* data;
	int capacity;
	int count;
	void expand(int count = 1);
	void swap(int posi, int posj);
	int ind(int index);

public:
	ArrayList(int capacity = 10);
	ArrayList(const ArrayList& list);
	~ArrayList();

	/// <summary>
	/// returns count
	/// </summary>
	/// <returns></returns>
	int size();

	/// <summary>
	/// �������� ������� � �����
	/// </summary>
	/// <param name="element"></param>
	void pushend(int element);
	/// <summary>
	/// �������� � ������
	/// </summary>
	/// <param name="element"></param>
	void pushbegin(int element);
	/// <summary>
	/// �������� ������� �� ������� position
	/// </summary>
	/// <param name="element"></param>
	/// <param name="position"></param>
	void insert(int element, int position);
	/// <summary>
	/// ������� ������� �� ������
	/// </summary>
	/// <returns></returns>
	int extractbegin();
	/// <summary>
	/// ������� ������� �� �����
	/// </summary>
	/// <returns></returns>
	int extractend();
	/// <summary>
	/// ������� ������� � �������� position
	/// </summary>
	/// <param name="position"></param>
	/// <returns></returns>
	int extract(int position);
	/// <summary>
	/// 
	/// </summary>
	/// <param name="pos"></param>
	/// <returns></returns>
	int& operator[](int pos);
	/// <summary>
	/// QuickSort
	/// </summary>
	void sort();

	friend std::ostream& operator<<(std::ostream& stream, ArrayList& list);
};
