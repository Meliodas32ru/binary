#include "stdafx.h"
#include <iostream> 
#include <algorithm>
using namespace std;
 
int main() 

  {
  setlocale(LC_ALL, "rus");
 
  int arr[10]; // ������� ������ �� 10 ���������
  int key; // ������� ���������� � ������� ����� ���������� ����
 
  cout << "������� 10 ����� ��� ���������� �������: " << endl;
 
  for (int i = 0; i < 10; i++) 
	  {
		cin >> arr[i]; // ��������� �������� �������
	  }
 
  sort (arr, arr + 10); // ��������� � ������� ������� sort (������� ����������)
 
  cout << endl << "������� ����: ";
 
  cin >> key; // ��������� ����
 
  bool flag = false;
  int l = 0; // ����� �������
  int r = 9; // ������ �������
  int mid;
 
  while ((l <= r) && (flag != true)) 
	  {
		mid = (l + r) / 2; // ��������� ��������� ������ ������� [l,r]
 
		if (arr[mid] == key) flag = true; //��������� ���� �� ���������� ���������
		if (arr[mid] > key) r = mid - 1; // ���������, ����� ����� ����� ���������
		else l = mid + 1;
	  }
 
  if (flag) cout << "������ �������� " << key << " � ������� �����: " << mid << endl;
  else cout << "��������, �� ������ �������� � ������� ���" << endl;
  
  system("pause");
  return 0;
}