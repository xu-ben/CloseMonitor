/*
 * πÿ±’œ‘ æ∆˜/win.cpp
 * Created on: 2015-1-16
 * Author    : ben
 */
#include <windows.h>
using namespace std;

int main(int argc, char* argv[]) {
	SendMessageA(FindWindow(0, 0), WM_SYSCOMMAND, SC_MONITORPOWER, 2);
	return 0;
}
