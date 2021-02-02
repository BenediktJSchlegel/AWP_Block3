//#include <iostream>
//#include <list>
//
//
//using namespace std;
//
//void print_line(list<int> values, int count);
//list<int> shift_list(list<int> values);
//int get_value(list<int> _list, int _i);
//
//int main() {
//
//	list<int> values;
//
//
//	string text = "y7IU&<;H:U<H?IIJUA;?D;DU|KHA;DI7B7J";
//
//	//int Liste füllen => einfachere Handhabung
//	for (int i = 0; i < text.length() - 1; i++)
//	{
//		values.push_back(text[i]);
//	}
//
//	for (int i = 0; i < 50; i++)
//	{
//		print_line(values, i);
//		values = shift_list(values);
//	}
//
//	return 0;
//}
//
//void print_line(list<int> values, int count) {
//
//	for (int i = 0; i < values.size(); i++)
//	{
//		cout << (char)get_value(values, i);
//	}
//	cout << endl;
//}
//
//list<int> shift_list(list<int> values) {
//	list<int> ret_list;
//
//	for (int i = 0; i < values.size(); i++)
//	{
//		if (get_value(values, i) == 126) {
//			ret_list.push_back(32);
//		}
//		else {
//			ret_list.push_back(get_value(values, i) + 1);
//		}
//	}
//
//	return ret_list;
//}
//
//int get_value(list<int> _list, int _i) {
//	//interator => iteriert über die liste
//	list<int>::iterator it = _list.begin();
//
//	for (int i = 0; i < _i; i++) {
//		++it;
//	}
//
//	//pointer auf iterierten wert zurückgeben
//	return *it;
//}